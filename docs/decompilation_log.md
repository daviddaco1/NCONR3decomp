# Bitácora de descompilación

Registro cronológico, por sesión/ronda, del trabajo de reconocimiento y matching. Es historial de
investigación (qué se probó, qué funcionó, qué no y por qué) — para el estado actual resumido y las
lecciones reutilizables ya extraídas, ver [`CLAUDE.md`](../CLAUDE.md). Este archivo crece con cada
sesión; no se reescribe retroactivamente salvo error de hecho.

## Fase 1 — Reconocimiento inicial del binario

De los 11296 símbolos `type:function` en `symbols.txt`, solo ~383 tienen nombre real (el resto son
placeholders `fn_8XXXXXXX`) — decomp-toolkit los nombró por firma conocida, y todos caen en
librerías estándar de Wii: OS (`OSSetMEM1/2`, memoria), IOS/ISFS (`IOS_*`, `ISFS_*`, NAND), ES
(`ESP_*`, tickets/TMD), NWC24 (`NWC24*`, WiiConnect24), TRK (stub de debug), y libc del runtime
(`memcpy`, `strlen`, etc.).

`grep -aoE` sobre `orig/RNEEDA/sys/main.dol` buscando patrones `*.c`/`*.h` recuperó nombres de
archivo fuente reales embebidos (casi seguro de `__FILE__` en asserts), que revelan la estructura de
módulos del juego: `glib_*.cpp` (motor 3D propio: anim/model/physics/process/reflection/
rendertarget/scene/shadow), `eft_*.c` (efectos), `tcg_*.c` (otro subsistema de render/texto, nombre
sin confirmar), `n2d_main.c` (2D), `g_camnw.c` (cámara), `sys_task.c`/`file_task.c`
(scheduler/IO), `dvdfs.c` (FS de disco), y una librería de red completa tipo GameSpy/DWC
(`d_nhttp.c`, `NHTTP_*.c`, `dwc_auth_interface.c`, `hmac.c`, con headers `Calendar/`,
`Parental_Control/`, `Update/`, `WiiConnect24/`, `Internet/`, `Sound/`, `Display/` — middleware de
Nintendo Wi-Fi Connection, no específico de este juego). Esto da una hipótesis de agrupación real
para `splits.txt` a medida que se avance (grep no commiteado por vivir en `orig/`, gitignored —
regenerar si hace falta).

`config.linker_version` (en `configure.py`) se confirmó con código fuente real, no un placeholder:
`src/Runtime.PPCEABI.H/global_destructor_chain.c` (copia sin modificar del runtime estándar de
Metrowerks, igual al de `doldecomp/pikmin2`/`zeldaret/tp`) matchea 100% (2/2 funciones, byte a byte),
tanto con `GC/3.0a5.2` como con `Wii/1.0` (mismo resultado — no alcanza para distinguir cuál es la
versión real). El placeholder original (`GC/1.3.2`) no puede compilar código real: no reconoce
`-enc SJIS`.

El juego usa excepciones de C++ (`extab`/`extabindex` con contenido real).

## Fase 2 — SDK / Runtime

### Bloqueo de LINK — resuelto (estructural, no de contenido)

`mwldeppc.exe` daba `runtime sources 'global_destructor_chain.c' and '__init_cpp_exceptions.cpp'
both need to be updated to latest version`. Causa: mwld reconoce esos 2 nombres de objeto
hardcodeados en el binario y no tolera que `.ctors$10`/`.dtors$10`/`.dtors$15` queden repartidos
entre ambos — deben vivir los 3 en el mismo objeto (lo muestra, sin comentarlo explícitamente, el
propio ejemplo de `docs/getting_started.md` para linkers GC 2.7+/Wii). Fix aplicado: en
`splits.txt` las 3 secciones se agruparon en el split de `__init_cpp_exceptions.cpp`;
`global_destructor_chain.c` sólo retiene `.text`/`.sbss`. `ninja` linkea y pasa `build.sha1` limpio.

### Intento de `Matching=True` en objetos de runtime — bloqueado, sin resolver

Poner `Matching=True` en `global_destructor_chain.c` (ya 100% por REPORT) rompe `build.sha1`: el DOL
mantiene el mismo tamaño pero difiere en ~1.46M bytes desde offset 9176 (cascada de direcciones por
reorden + padding de 8 bytes). Mismo síntoma en los 8 objetos SDK siguientes
(`PPCArch.c`, `OSFPRInit.c`, `OSPSInit.c`, `OSCache.c`, `OSReset.c`, `__start.c`,
`__ppc_eabi_init.c`, `exit.c`), con 2 variantes:

- `__start.c`/`PPCArch.c`: el DOL **crece** (+32/+256 bytes) y el diff arranca en el header
  (byte 8/31) — offsets de sección corridos.
- `global_destructor_chain.c`: tamaño igual, diff interno por reorden/padding.

Pistas investigadas y descartadas:

- `docs/comment_section.md` explica que la sección `.comment` (presente solo en objetos compilados
  de verdad) le indica a `mwld` que ajuste el alignment de símbolos. `symbols.txt` soporta
  `align:N` por símbolo (`docs/symbols.md`). **Probado explícito** (`__destroy_global_chain`/
  `__register_global_object` con `align:4`, los 5 símbolos de `__start.c` con `align:4`) —
  **cero efecto**. `align:` no controla lo que decomp-toolkit genera en `.comment` de un objeto
  `Matching` (probablemente solo influye en objetos que siguen siendo asm crudo).
- Comparado contra proyectos reales (`gh search code`): `SMGCommunity/Petari` (fuente de la que se
  adaptó casi todo el runtime) tiene AMBOS archivos en `NonMatching` — nunca lo resolvieron.
  `zeldaret/tp` marca esto `MatchingFor(ALL_GCN)` — matching solo en GameCube, nunca en Wii, para el
  mismo cluster de archivos. `doldecomp/sadx`/`mkdd` sí tienen ambos en `Matching` simultáneo, pero
  son linkers GC 1.0-2.6 (sin rename `$NN` de `.ctors`/`.dtors`), no comparable.
- **Corrección (sesión de análisis comparativo, 2026-07-31)**: la entrada anterior agrupaba también
  a `doldecomp/brawl` en el lote "GC 1.0-2.6, no comparable" — es un error, re-verificado esta
  sesión. El DOL principal de `brawl` usa **el mismo linker que nosotros** (`GC/3.0a5.2`), y ahí
  `global_destructor_chain.c`/`__init_cpp_exceptions.cpp` están **ambos `NonMatching`** — mismo
  síntoma exacto que el nuestro, no lo contrario. `brawl` solo logra `Matching=True` en una copia
  *distinta* de esos archivos: la de la librería común de los módulos `.rel`
  (`config/RSBE01_02/rels/...`), con un split que NO agrupa el trío `.ctors$10`/`.dtors$10`/
  `.dtors$15` (esa restricción de layout aplica solo a objetos que van al DOL principal, no a
  `.rel`). Esto es evidencia adicional a favor de la conclusión, no en contra: confirma que el
  bloqueo es específico de linkear el **DOL principal** con linkers de generación GC2.7+/Wii, en
  cualquier juego que los use, no un error de nuestra config.
  **Conclusión: quirk real de `mwldeppc` específico de linkers Wii al linkear el DOL principal,
  confirmado en al menos 3 proyectos maduros independientes (Petari, tp, brawl), sin resolver en la
  comunidad.** Cerrado como **NonMatching aceptado** — no reintentar sin evidencia nueva (binarios
  de RVL SDK reales, o consulta directa en Discord de decomp.me).

### Lotes de funciones matcheadas (adaptado de `SMGCommunity/Petari`, mismo RVL SDK)

- **Lote 1** (progreso 4→12/11297): resto de `.init` — `src/Runtime.PPCEABI.H/__start.c`
  (`__check_pad3`, `__set_debug_bba`, `__get_debug_bba`, `__start`, `__init_registers`,
  `__init_data`) y `__ppc_eabi_init.c` (`__init_hardware`, `__flush_cache`). 8 funciones, 100%
  fuzzy (824/824 bytes).
- **`__mem.c` — `memcpy` resuelto**: el `memcpy` que existía (loop simple estilo `pikmin2`)
  matcheaba solo 9.4%. Este juego usa la variante asm hand-written de `memcpy` (rutas rápidas de
  32/16 bytes vía `lfd`/`stfd`/`lwz`/`stw`, fallback byte a byte), idéntica a `xbret/xenoblade`. →
  100.0% fuzzy (668/668 bytes). `memset` ya matcheaba 100%.
- **`__fill_mem` — nop faltante, sin resolver**: queda en 97.8% fuzzy (180 bytes generados vs 184
  originales). El original tiene un `nop` justo después del `beqlr` de retorno temprano
  `(n & 3) == 0` y antes del loop final `if (n) do {...} while(--n);` (alinea el loop a 8 bytes);
  nuestro build no lo emite. Probadas las 9 versiones de compilador Wii disponibles
  (`1.0`/`1.0a`/`1.0RC1`/`1.1`/`1.3`/`1.5`/`1.6`/`1.7`/`0x4201_127`) — resultado idéntico en las 9
  (97.77778%). Sacar el `return;` final explícito tampoco cambió nada. Parece un heurístico de
  alineación de loop de mwcc no ligado a la forma del C — requiere `decomp-permuter` por fuerza
  bruta (búsqueda random corrida, cientos de iteraciones sin score < 100 aún).
- **Lote 2** (progreso 16→24/11297): `exit.c` (`__init_user`, `__init_cpp`, `exit` — mecanismo
  genérico de `_ctors`/`_dtors`, complementa el de excepciones C++), `PPCArch.c` parcial
  (`PPCMfhid2`, `PPCMthid2`), `OSFPRInit.c`/`OSPSInit.c` (tuvieron que separarse en 2 archivos:
  decomp-toolkit no soporta 2 rangos `.text` no contiguos en el mismo split — error "Cyclic
  dependency encountered while resolving link order"), `OSCache.c` (`DCZeroRange`,
  `ICInvalidateRange`, `ICFlashInvalidate`, `ICEnable`). Se agregó `f32`/`f64` a `include/types.h`.
- **Lote 3** (progreso 24→47/11297): `PPCArch.c` completo (2→24 funciones, bloque contiguo
  `PPCMfmsr`...`PPCMthid4`) — 23/24 al 100%. 3 placeholders (`fn_802A1890`, `fn_802A18B0`,
  `fn_802A1954`) identificados como `PPCMthid0`/`PPCSync`/`PPCMfwpar` por tamaño exacto, renombrados
  en `symbols.txt`. `PPCMtfpscr` quedó en 98.8% por dos `stw` en orden distinto dentro de un bloque
  `asm{}` embebido (a diferencia de asm puro, SÍ se reordena) — arreglado escribiendo los `stw` en
  el orden contrario en el C fuente → 100%. Se agregó `OSReset.c` (`OSResetSystem`), confirmado por
  string embebido `"OSResetSystem() is obsoleted..."` — número de línea real del `__FILE__` es
  `1185` (no `1130` como en Petari): **los literales embebidos varían por revisión de SDK aunque el
  código sea igual, verificar cada uno por REPORT, no asumir**.

### `decomp-permuter`

Instalado en `tools/decomp-permuter/` (sin `.git` anidado, commiteado, Python puro). 2 parches para
Windows nativo: `src/compiler.py` invoca `compile.sh` vía `sh` (Windows no ejecuta `.sh` por
shebang vía `CreateProcess`, confirmado `WinError 193`); `src/main.py` saltea el check de bit
ejecutable (`os.stat` no lo refleja en Windows). `cpp.exe` sale gratis de
`build/compilers/ProDG/*/CPP.exe`. Uso:

```sh
export PATH="$PATH:$(pwd)/build/tools/binutils:$(pwd)/build/compilers/ProDG/3.9.3"
python tools/decomp-permuter/permuter.py -j4 --stop-on-zero tools/decomp-permuter/scratch/<func>
```

**Lección repetida 2 veces**: REPORT (`configure.py progress`/`report.json`) cachea objetos
internamente y puede no recompilar aunque el `.c` no cambió — un `fuzzy_match_percent` visto puede
estar desactualizado. Verdad de terreno: comparar el `.o` que realmente linkea
(`build/RNEEDA/src/...`) o correr `ninja` limpio y mirar el mtime de `report.json`.

- **`__init_cpp_exceptions` resuelto — 100% (era 92.3%)**: `GetR2()` no era una función separada
  (ni real ni inlineada) — era `asm` embebido directo en el call site:
  ```c
  register char* R2;
  asm { mr R2, r2 }
  fragmentID = __register_fragment(_eti_init_info, R2);
  ```
  (mwcc exige `register` en la variable destino de un `asm` embebido — sin eso, error 34001).
  Encontrado con un scratch de permuter aislado, score 0 al primer intento manual. El TODO anterior
  (que asumía "en el original es `bl GetR2__Fv`") era una hipótesis incorrecta de una sesión previa.
- **`__destroy_global_chain` — contenido ya 100% correcto, bloqueo es de layout**: scratch aislado
  (sin `__register_global_object` en la misma unidad) da score 0 directo. El problema real es
  layout entre funciones del mismo `.c` (reorden + padding de 8 bytes al compartir archivo) —
  permuter no puede tocar esto (opera función por función). Bisección: sin `-inline auto`/
  `-inline deferred` el orden se corrige, pero el padding persiste con cualquier combinación de
  flags en las 7 versiones de compilador Wii disponibles.
- Reintento de `Matching=True` con ambos archivos juntos (mwld exige los 2 simultáneos por nombre
  hardcodeado) — falla igual, mismo error. Ver bloqueo de LINK arriba para el análisis completo
  contra Petari/zeldaret/sadx/brawl/mkdd.

## Fase 3 — Código de juego (`tcg_text.cpp`)

Primera vez que se toca código propio del juego (no SDK). Sin proyecto de referencia — todo sale de
leer el asm directo. Split real: `tcg_text.cpp` (`0x80130BC8`-`0x801363B8`, 124 funciones, sistema
de texto del motor — nombre de archivo no confirmado 100%, sale del mangling RTTI `tcg_text_c`).

**Gotcha de `splits.txt`**: decomp-toolkit auto-calcula el rango de `extabindex` asociado a un split
nuevo; si el `.text` termina justo en el límite de una función con extabindex propio, esa función
queda huérfana (`Bad extabindex relocation @ 0xXXXXXXXX`). Fix: extender el `end:` del `.text` para
incluirla (acá, `0x80136354` con `size:0x64` → `end` correcto `0x801363B8`, no `0x80136354`).

**RTTI/vtable real** (en `build/RNEEDA/asm/auto_07_80345C40_data.s`, cerca de `0x80359728`): tabla
de vtables consecutivas con strings de clase al lado — jerarquía confirmada: `CTextEntryBase`
(vtable `lbl_803597D0`) ← `CTextEntry_Char` (`lbl_80359728`) y `CTextEntry_Code` (`lbl_80359770`).
Layout de vtable MW estándar: `[typeinfo_ptr, 0, dtor, virtual_setter, virtual_getter]`.
`CTextEntry_Char`/`CTextEntry_Code` no overridean el setter/getter de campo 0x0 (mismo
`fn_801362B4`/`fn_8013633C` en las 3 vtables), sí el destructor. También aparecen `CTextOne` y
`CLinkList` con vtables parciales, sin decompilar.

**Gotcha de compilación C++**: compilar como `.cpp` mangla nombres — sin envolver en
`extern "C" { ... }`, `symbols.txt` no encuentra el símbolo compilado y REPORT no reporta
`fuzzy_match_percent` para NINGUNA función del objeto (no solo la afectada), sin error visible.
Revisar `nm` del `.o` si un objeto entero desaparece de REPORT sin razón aparente.

### Ronda 1-3 — accessors triviales y constructores (progreso 0→53/124 al 100%)

Cluster de accessors triviales con indirección (`lwz r3,0(r3)`, patrón handle/pImpl,
`TcgTextEntryData`/`TcgTextEntryHandle`) y accessors propios de `CTextEntryBase`
(`CTextEntryBaseData`, campos `0x0/0x4/0x5/0x8`, antes del vtable ptr en `0xc`) — todos 100%.

Constructores `CTextEntryBase`/`CTextEntry_Char`/`CTextEntry_Code` (`fn_801362BC`, `fn_80130C90`,
`fn_80131BB0`) resueltos, 2 gotchas nuevos:

- **Bug SDA21 en punteros externos**: declarar un puntero de vtable externo como `void*` lo vuelve
  elegible para direccionamiento small-data (1 instrucción `li`/`lhz`, reloc `R_PPC_EMB_SDA21`) en
  vez del `lis`+`addi` de 2 instrucciones (`R_PPC_ADDR16_HA`/`_LO`) del original. Fix: declarar como
  array incompleto (`extern "C" u32 lbl_XXXXXXXX[];`).
- **Inlining no deseado**: con `-inline auto` global, mwcc inlineaba llamadas triviales de 1 línea
  dentro de la función caller cuando el original las deja como `bl` real (probable: en la fuente
  real vivían en otra unidad de traducción). Fix: `#pragma dont_inline on` antes / `reset` después.

Patrón general: funciones leaf (sin llamadas internas) matchean 100% de forma confiable. Funciones
que llaman a otras (incluso triviales) quedan frecuentemente en 40-85% fuzzy por reordenamiento de
registros/instrucciones del scheduler `-O4,p` alrededor del `bl`/`b` — contenido siempre correcto
(confirmado por disassembly), solo difiere orden/registro. Priorizar leaf functions para 100%
reales; el resto queda como progreso documentado, no perseguido a mano.

### Ronda 4 — 23 funciones más (12 al 100%, progreso 51→53/124)

- Mismo gotcha de inlining reaparece con CUALQUIER llamada a función definida en el mismo `.cpp`.
- **Parámetros `s16` no generan `extsh` de forma confiable**: a veces hace falta declarar como
  `s32` + cast explícito `(s16)` en el punto de uso exacto donde el original hace `extsh`. Pero en
  `fn_80135CD8` ese mismo fix empeoró el resultado (76.8%→67.9%, revertido a `s16` directo) — no
  hay regla universal, probar ambas formas y quedarse con la que REPORT confirme mejor.
- `fn_80135768` es la función real detrás de varios wrappers (tail call). Su tipo de retorno no
  cambia el idiom de normalización booleana elegido por mwcc (`subic/subfe` vs `neg/or/srwi`) pese
  a probar `!=0`/ternario/`u32`/`s32` — mismo tipo de quirk no accionable que el nop de
  `__fill_mem`.
- Quirk de scheduler: mwcc a veces adelanta instrucciones independientes (`extsh`/`li`/`cmpwi`)
  antes del `stw`/`stfd` de guardado de no-volátiles en el prólogo, cuando el original las deja
  después — no accionable desde la fuente.
- Quirk `psq_lx`/`psq_l` en epílogo: funciones que guardan 2+ floats "quantized" restauran con
  `li rX,OFF; psq_lx` en el original, pero este build genera `psq_l` directo — probable diferencia
  de versión/flag de compilador Wii real vs el disponible, no accionable.
- `fn_80134D44` (tipado `u32`) en realidad devuelve un PUNTERO — confirmado por 2 llamadas
  consecutivas sin CSE usadas para indexar otro objeto. El tipo declarado no afecta su propio
  codegen (ya 100%).
- Campos nuevos en `TcgTextEntryData`: `field_0xec`/`0xf0`/`0xfc`/`0x104`/`0x108`/`0x10c`.

### Ronda 5-6 — cluster "contenedor" con dispatch virtual (progreso se mantiene en 53/124, fuzzy global 8.63%→15.72%)

`fn_80132AF4`/`fn_80132A38`/`fn_80132BB0`/`fn_80132CB4`/`fn_80132DC8` — ninguna al 100% (54-79%) pero
contenido estructural confirmado (mismo orden de llamadas/offsets/control de flujo).

- Structs nuevos: `ItemHandle` (vtable en offset `0xc`, no `0x0`), `ItemList`/`ContainerHandle`
  (contenedor tipo vector de punteros: `count`(`0x4`), `items`(`0x8`), más `0xc`/`0x60`/
  `0xcc`/`0xd0`/`0xd4` floats).
- `h` (handle genérico del archivo) es simultáneamente `TcgTextEntryHandle*` y `ContainerHandle*` —
  mismo bit pattern, distinta interpretación según la función; cast gratis a nivel de bytes.
- El original nunca cachea un puntero intermedio en variable local si lo puede releer desde `h` —
  recargar la expresión encadenada completa en cada uso (en vez de cachear en un temporal) subió
  `fn_80132A38` de 67.6% a 79.1%.
- Constantes flotantes SÍ conviene cachearlas en una variable local (al revés que los punteros):
  cachear `lbl_804A0290[0]` recuperó la forma de 1-sola-carga que usa el original.
- `ItemHandle` y `CTextEntryBaseData` resultaron ser el MISMO layout (primeros `0xc` bytes iguales,
  vtable en `0xc` en ambos) — confirmado en `fn_80132DC8` reusando
  `fn_8013632C`/`fn_80136314`/`fn_80136334`.
- Quirks nuevos: `_savegpr_NN`/`_restgpr_NN` eligen registro base distinto (26 vs 27) según cantidad
  de locales; `fn_80136334` (retorna `u8`) genera `clrlwi. r0,r3,24` (record-form fusionado) en vez
  de `cmpwi r3,0` separado — mismo tipo de idiom no accionable ya visto con `extsh`.

Pendientes de este cluster (sin `.c` propio, citadas desde múltiples callers): `fn_801365EC`
("release item"), `fn_80132430`/`fn_801325C8` ("armar SrcObj temporal desde otro contenedor").

### Ronda 7 — `fn_80134C40`/`fn_80135768`/`fn_801351A8` (fuzzy global 15.72%→23%+, ver rondas siguientes)

`fn_80135768` (75%) es la función real detrás de `fn_80135DC8`/`fn_8013593C` — "cache slot" sobre un
`GlobalTable{count;arr;}` global (`lbl_8049CE78`). Quirk nuevo: mwcc funde SIEMPRE "branch a un
`blr` suelto" en `bnelr`/`beqlr` directo (peephole automático); el original no tiene ese peephole
aplicado pese a probar early-return/else-guard/variable compartida/returns separados. `fn_80134C40`
(62%) repite quirks ya vistos. `fn_801351A8` (69%) revela que `fn_80135448` (ya validada, tipada
`u32`) también devuelve puntero — mismo patrón que `fn_80134D44`.

### Ronda 8 — primeras funciones grandes, 400-600 bytes (fuzzy global →21.06%)

Por pedido explícito de priorizar tamaño: `fn_80132430`(408, 68.6%)/`fn_801325C8`(536, 58.2%)/
`fn_801327E0`(600, 58.8%). Las gigantes (2000+) se evaluaron con un agente y se descartaron por
ahora (`fn_80130CCC`, 3796 bytes, es el parser principal de tags de texto — fácil de entender,
matchear byte a byte en una sesión no es realista).

- `fn_80132430`/`fn_801325C8` arman `TempList{origCount;byteCount;count;arr;}` parseando records de
  0x10 bytes (bswap manual `clrrwi/srwi/rlwinm/or`, idiom compartido con `fn_80135BAC`).
  `fn_801325C8` extiende a varias tablas concatenadas (aritmética de boundary no verificada bit a
  bit — tramo de mayor riesgo). Ambas solo forward-declaran `fn_80130CCC`/`fn_80131BEC`.
- `fn_801327E0` es el constructor principal de `TcgTextEntryHandle`: encadena ~20 setters ya
  validados con valores constantes. Sin `#pragma dont_inline` subía solo a 25.8%; con el bloque,
  58.8%.
- `TcgTextEntryData` ganó `field_0x0`/`0x8`/`0xc`/`0x5c`. `TempList` (antes `SrcObj`) se unificó y
  movió al inicio del archivo.

### Ronda 9 — `fn_80133BA8` (776 bytes, 57.8%, fuzzy global →23.05%)

Función "notify" citada por casi todos los setters ya escritos. Recorre `ch->list->items`, dispatch
virtual (vtable slot `0x10`), arma `ResultEntry` (struct nueva 0x3c bytes) en
`h->data->field_0x60->arr`, 5 casos según código de dispatch. Limitado por
`h->data->field_0x5c` (máximo de slots a llenar, aunque itera todos los items). Solo
forward-declara `fn_80132E98`/`fn_80134744`.

### Ronda 10 — `fn_80134744` (952 bytes, 44.5%, fuzzy global →24.96%)

Clip/remap de un rectángulo (glyph bounding box) contra `field_0x20`/`field_0x24`: camino directo
(`field_0x15==0`) o clip real con 2 chequeos de rango vía `fn_80197284` (externa, sin decompilar),
usando el idiom estándar de conversión int↔double de Gekko/Broadway vía magic-constant
`lbl_804A0288` (Gekko no tiene `fcfid` en hardware; un cast `(f32)` en C ya compila al bit-trick).
44.5% es sólido para la densidad de instrucciones (60+ ops de punto flotante); el resto es
reasignación de registros (`DIFF_ARG_MISMATCH`), no lógica incorrecta. Se corrigió la firma real
(7 parámetros, no 6 — 2 floats de escala independientes).

### Pendientes al cierre de la ronda 10

Sin decompilar, todas >1800 bytes: `fn_80133F08`(1900), `fn_80131BEC`(2116, parser "hermano" de
`fn_80130CCC` para atributos con array de tablas), `fn_80132E98`(3272), `fn_80130CCC`(3796, parser
principal de tags de texto). Candidatas para sesión dedicada, posiblemente con `decomp-permuter`
para los tramos de puro scheduler una vez verificado el contenido general.

## Fase 4 — Re-verificación de SDK Code contra RNEPDA (2026-07-31)

Tras la migración a RNEPDA, `symbols.txt`/`splits.txt` se regeneraron desde cero (ver nota de
migración en `CLAUDE.md`) y `splits.txt` quedó vacío (solo secciones, sin splits de archivo).
`configure.py` ya tenía los 10 objetos SDK listados (`Object(NonMatching, ...)`, migrados tal
cual desde RNEEDA) y el código fuente en `src/` no se tocó — solo faltaban las direcciones
nuevas en `splits.txt`.

**Método**: decomp-toolkit re-detecta la mayoría de nombres reales por firma/tamaño
independientemente de la región (mismo SDK RVL, solo relocado) — `memcpy`, `__start`,
`PPCMfmsr`...`PPCMthid4`, `__OSFPRInit`, `DCZeroRange`, `OSResetSystem`, etc. ya aparecían con
nombre real en el `symbols.txt` recién generado por decomp-toolkit, sin trabajo manual. Se ubicó
cada función por nombre (`grep`/`Read` sobre `symbols.txt`), se armaron los rangos `start:`/`end:`
de cada split (`.init`/`.text`/`.sbss`/`.ctors`/`.dtors`) y se corrió `ninja`.

**3 placeholders identificados de nuevo por tamaño/emparejamiento** (mismo método que en
RNEEDA, direcciones distintas): `fn_802A21D4`(8 bytes, entre `PPCMfhid0`/`PPCMfl2cr`) →
`PPCMthid0`; `fn_802A21F4`(8 bytes, entre `PPCMtdec`/`PPCHalt`) → `PPCSync`;
`fn_802A2298`(0xC bytes, entre `PPCMthid2`/`PPCMtwpar`, empareja con el `Mtwpar` adyacente) →
`PPCMfwpar`.

**Resultado, sin cambiar una sola línea de C fuente**: `ninja` linkea limpio, `build.sha1` pasa,
y REPORT da exactamente el mismo perfil de matching que en RNEEDA — **48/49 funciones SDK al
100% fuzzy**, `__fill_mem` en 97.78% (mismo nop de alineación sin resolver, ver Fase 2).
Confirma que el bloqueo de `Matching=True` en `global_destructor_chain.c`/
`__init_cpp_exceptions.cpp` (Fase 2) es estructural al linker Wii, no algo específico de la
región RNEEDA — sigue reproduciéndose igual en RNEPDA.

`tcg_text.cpp` (game code) queda pendiente de la misma re-verificación — direcciones de game code
no se tocaron en esta ronda.

## Fase 3 — Migración de región: RNEEDA (USA) → RNEPDA (Europa/PAL)

2026-07-31: se reemplaza el target del proyecto por la versión europea, decisión del usuario, no
motivada por un bloqueo técnico en USA. GameID confirmado contra el header del dump propio (bytes
0x0-0x5 del ISO: `RNEPDA`). Hash SHA-1 del `main.dol` extraído vía `dtk vfs cp` desde el ISO:
`982a4f104272d2637fbbabbcad30aeead05d6e6d` (usado tanto en `config/RNEPDA/config.yml` como en
`config/RNEPDA/build.sha1`, siendo el mismo DOL objetivo final).

Cambios de config: `configure.py` (`VERSIONS = ["RNEPDA"]`), `config/RNEEDA/` renombrado a
`config/RNEPDA/`, `orig/RNEPDA/RNEPDA.iso` como nuevo dump base (`object_base`). El dump USA
(`orig/RNEEDA/`, `.rvz` + árbol extraído) se deja en disco sin usar — está gitignored, no estorba.

**`symbols.txt` y `splits.txt` de RNEEDA se descartaron, no se migraron.** El DOL europeo es un
binario distinto (fecha de build distinta, casi seguro recompilado por el estudio con textos/tablas
localizadas) — las direcciones absolutas del USA no tienen por qué coincidir con las del EU, ni
siquiera para funciones idénticas en código fuente. Ambos archivos se regeneran desde cero en el
próximo `ninja` contra `build/RNEPDA/main.dol`, como al inicio del proyecto (ver Fase 1).

**Qué SÍ se conserva:** todo el código fuente ya escrito bajo `src/`/`include/` (`tcg_text.cpp`,
`global_destructor_chain.c`, `__init_cpp_exceptions.cpp`, etc.) — es lógica en C/C++, no depende de
direcciones. Sirve como punto de partida directo para volver a matchear contra las nuevas
direcciones EU. **Qué NO se conserva automáticamente:** el estado "Matching=True"/fuzzy% de cada
función (53/124 en `tcg_text.cpp`, 47 en SDK/Runtime) — hay que re-verificar cada una contra
`objdiff` una vez que el split correspondiente exista en el `splits.txt` nuevo, porque:

- El compilador/linker (`Wii/1.0`, `mw_comment_version: 15`) probablemente es el mismo SDK — pero
  no está confirmado para el binario EU hasta correr el mismo proceso de la Fase 1
  (`global_destructor_chain.c` como sonda).
- Literales embebidos (números de línea `__FILE__`, tamaños de tabla) pueden variar por revisión de
  build EU vs. USA aunque el código sea idéntico (gotcha #8 de `CLAUDE.md`).
- Es posible que builds PAL tengan diferencias reales de código (timing 50Hz, textos localizados
  con distinto tamaño → distinto layout de tablas), no solo direcciones — a confirmar función por
  función, no asumir de antemano.

Próximo paso: correr `ninja` para que decomp-toolkit analice `build/RNEPDA/main.dol` y regenere
`symbols.txt`/`splits.txt`; comparar función por función contra el trabajo previo en RNEEDA.

## Fase 5 — Re-ubicación de `tcg_text.cpp` en RNEPDA y parser principal de tags (2026-07-31)

Tras la Fase 4 (SDK re-verificado), quedaba `tcg_text.cpp` (game code). A diferencia del SDK, acá
no hay nombres reales auto-detectados por firma — hubo que re-ubicar el archivo completo a ciegas.

### Método de re-ubicación (sin asumir direcciones iguales)

Intentos descartados, en orden:

1. **Reusar la dirección RNEEDA tal cual** (`0x80130BC8`): `dtk dol split` la rechaza
   ("overlaps with previous split") porque cae en medio de un rango de extabindex real de
   RNEPDA — prueba de que el contenido ahí es otra cosa, no confirmación de que sea la misma
   región corrida.
2. **Búsqueda de bytes exactos** (leaf functions sin relocations, esperando bytes idénticos):
   falló — dos patrones de 12 bytes dieron matches inconsistentes entre sí (bases distintas),
   evidencia de que esos patrones son demasiado comunes en el resto del binario (idioms de
   accessor triviales repetidos por todo el motor).
3. **Búsqueda con máscara** (bytes fijos + wildcard en los campos con relocation) sobre una
   función 100%-matcheada conocida (`fn_801362BC`/constructor `CTextEntry_Char`): cero matches.
   Confirmó que el código en la dirección RNEEDA original YA NO es el mismo contenido en RNEPDA
   (verificado leyendo los bytes reales en esa dirección: es una función completamente distinta).
4. **RTTI/strings del binario** (`grep -aoE` sobre `orig/RNEPDA/sys/main.dol`, mismo método de la
   Fase 1): confirmó que `tcg_text.c` y los nombres de clase (`CTextEntryBase`, `CTextEntry_Char`,
   `CTextEntry_Code`, `CTextOne`, `CLinkList`) siguen presentes, pero encontrar la vtable/typeinfo
   real que los referencia (para de ahí llegar al código) resultó en una madriguera de xrefs
   data→data sin llegar a code→data en tiempo razonable (los `assert()` que normalmente generan
   esas referencias están compilados afuera por `-DNDEBUG=1`).
5. **Lo que funcionó**: generar el volcado asm completo de decomp-toolkit
   (`build/RNEPDA/asm/auto_fn_80131324_text.s`, existe automáticamente para TODO el `.text` no
   configurado, no solo para objetos con split real) y `grep` directo por las direcciones de los
   candidatos a typeinfo (`8035A094`, etc., ya ubicados vía RTTI). Encontró de una el constructor
   real (`fn_80136A18`-style) con el patrón exacto ya conocido (`vtable ptr @ 0xc`). Confirmado con
   3 puntos independientes (inicio del archivo, un constructor conocido, y los 4 "gigantes" ya
   documentados por tamaño) que el shift es **constante: `+0x75C`** respecto de las direcciones
   RNEEDA. 124/124 funciones, 0 gaps, mismo tamaño total (`0x57F0`) — confirmación fuerte.

**Lección nueva**: no asumir que direcciones o contenido se preservan entre regiones ni siquiera
para código de juego (a diferencia del SDK, que sí reusa firmas). Cuando la reubicación por
dirección/bytes falla, la ruta que sí escala es **generar el asm completo vía decomp-toolkit y
grepear por direcciones de datos ya confirmadas por RTTI/strings** — mucho más confiable que
intentar reconstruir relocations a mano con scripts de bajo nivel.

### Aplicación del shift

`splits.txt` actualizado a `0x80131324`-`0x80136B14`; todas las referencias `fn_`/`dtor_` en
`src/tcg_text.cpp` (145 símbolos únicos) desplazadas mecánicamente `+0x75C` con un script
(regex sobre hex). Los símbolos `lbl_` (datos: vtables, constantes, tablas) **no** se tocaron —
quedaron apuntando a las direcciones RNEEDA viejas literalmente como direcciones absolutas (el
convenio `lbl_<hex>`/`fn_<hex>` de decomp-toolkit trata el nombre como la dirección real si no hay
otro símbolo ahí). Esto compila y linkea igual (`NonMatching` tolera contenido incorrecto), y el
fuzzy% global reprodujo el valor exacto de cierre de la sesión RNEEDA (24.96%) — el fuzzy-diff
normaliza relocations por estructura, no por dirección exacta, así que no detecta el desplazamiento
de datos. **Pendiente real**: los `lbl_` de las ~24 funciones no-100% siguen apuntando a datos
incorrectos en RNEPDA; no se remapearon todavía (no bloquea el build, sí la precisión).

### `fn_80131428` — parser principal de tags (3796 bytes, primera implementación)

Sin proyecto de referencia ni versión previa (nunca decompilada, ni en RNEEDA). Estructura real
(confirmada por disasm completo, no supuesta):

- Firma: `TempList* fn_80131428(void* ctx, s32 maxCount, s32 len, void* str, void* extra)` —
  coincide exacto con el forward-declare que ya existía en el archivo (usado por `fn_80132B8C`).
- Loop sobre `len/2` entradas `u16` de `str`. Cada entrada: si bit alto (`0x8000`) es 0, es un
  codepoint "plano" → `fn_80131324` (constructor de `CTextEntry_Char`, también nuevo esta sesión,
  71.0% fuzzy). Si el bit está seteado: bits[8:14] = código de tag (0-0x7f), bits[0:7] = "step".
- **Jump table real** (`jumptable_80359DD0`, 65 entradas) leída directo del volcado de datos: de
  65 códigos, **~50 comparten el mismo handler genérico** (`+0xCB0`, la tabla de códigos
  extendidos) — solo 13 códigos tienen handler propio. Esto redujo drásticamente el trabajo real
  vs. lo que sugerían los 3796 bytes en bruto.
- Códigos >0x40 usan una tabla separada de definiciones (`lbl_80339E20`, 0x28 entradas de 8 bytes,
  copiada al stack) con 5 subtipos (0-4: recursión, alloc+dispatch+recurse, flag global, 2
  variantes de alloc+dispatch+setter).
- Todos los "alloc(0x74)+constructor+dispatch virtual(vtable slot 3 = setter)" de los 13 casos
  reusan funciones YA escritas en sesiones previas (`fn_8013230C`, `fn_801322FC`, `fn_80131288`,
  `fn_8013652C`, `fn_801364EC`, `fn_80135B28`, etc.) — ninguna dependencia nueva quedó sin
  resolver salvo 2 tablas estáticas de datos.
- 2 casos (color en hex, "ruby"/ancho) quedan **best-effort**: usan 2 tablas estáticas
  (`lbl_80339D90`, un blob de constantes en `lbl_804A0A90`/`94`) cuyo layout interno no se decodificó
  bit a bit — se documentó inline, mismo criterio que `fn_80132D24`.
- Variable `r28` (`pendingList` en el C): nunca se le asigna un valor real en ningún camino
  recorrido del disasm — probable dead code, ya que los "validadores" que gatearían su uso
  (`fn_801363B8`/`fn_80136404`) siempre devuelven 0. Documentado, no investigado más a fondo.

**Resultado**: 25.3% fuzzy (contenido/control de flujo correcto para el loop principal y los 13
casos con handler propio; el resto son aproximaciones documentadas). `build.sha1` sigue pasando.
Quedan 3 funciones grandes sin tocar: `fn_80134664`(1900, notify/clip), `fn_80132348`(2116),
`fn_801335F4`(3272).

### `fn_801335F4` — motor de layout/word-wrap (3272 bytes, primera implementación)

Segunda función gigante de la sesión. Firma ya forward-declarada correctamente
(`s32 fn_801335F4(TcgTextEntryHandle* h)`, usada por `fn_80134304`) — no hizo falta cambiarla:
todos los offsets que en una lectura rápida parecían pertenecer a `h` directo (`count`@0x4,
`items`@0x8) en realidad son de `h->data` (releído con `lwz` redundante antes de cada acceso en
el original, no cacheado en un temporal).

Estructura confirmada por disasm completo: recorre `h->data->field_0x8[]` (items), salta los que
tienen el bit `0x2` seteado (`fn_80136A88`), dispatch virtual (vtable slot 4, el "getter" de tipo)
con 6 casos (4/2/0/6/9/default) que ajustan una "pluma" (posición X/Y) de layout, seguido de 2
loops de post-proceso casi idénticos (dispatch igual, ajustan `field_0x28` de cada item según un
flag de `fn_80134DD0(h)`) y un loop final que inserta hasta 2 marcadores nuevos (`alloc(0x74)` +
`fn_8013230C` + dispatch) al final del array si el último grupo de 3 (o 4) items quedó incompleto.

**Best-effort explícito** (documentado inline, mismo criterio que `fn_80132D24`): la aritmética de
punto flotante real de cada caso (avance exacto de glifo, fórmula de alineación en el caso 4 con
sub-switches anidados por `fn_801359C4(h)`/columna acumulada, fórmula exacta de
ascent/descent) no se verificó bit a bit — es un motor de layout con ~15 constantes de punto
flotante (`lbl_804A0AA0`/`lbl_804A0AA8[]`) cuyo significado geométrico exacto no se determinó.
Contenido estructural (loops, dispatch, helpers llamados) sí es fiel al disasm.

**Resultado**: 19.9% fuzzy. `build.sha1` sigue pasando. Quedan 2 funciones grandes:
`fn_80134664`(1900) y `fn_80132348`(2116).

### `fn_80132348` — variante del parser de tags (2116 bytes, primera implementación)

Tercera función gigante. Ya forward-declarada (usada por `fn_80132D24`, que la llama en vez de
`fn_80131428` cuando parsea las tablas "concatenadas"). Mismo formato de tag que `fn_80131428`
(bit alto + código 7 bits + step 8 bits) pero **sin** tabla de códigos extendidos (>0x40 no tiene
manejo especial — de hecho no hay chequeo de rango en absoluto, el `switch` cubre 0-0x3e vía
cadena de `cmpwi`/`bge`, no jump table) y con un comportamiento de fallback distinto: los códigos
sin caso propio se **descartan silenciosamente** (no crean ningún char, a diferencia de
`fn_80131428` que rellena con un char vacío). El parámetro `extraC` (6to argumento, un `s32*`)
actúa como selector de modo en 2 puntos (el "char pendiente" inicial y el código `0x3e`).

Best-effort en 2 bloques: código 4 (decodifica un bitmask de hasta 8 bits en entradas
individuales vía `fn_80136120`, marcadas con flag `0x8`) y códigos 5-8 (bloque "8 posiciones" +
clasificación de caracteres vía 2 jump tables reales del binario — mismo patrón que el caso
hex-color de `fn_80131428`, sin verificar bit a bit el `sprintf` dinámico).

**Resultado**: 26.7% fuzzy. `build.sha1` sigue pasando.

### `fn_80134664` — tick de animación/reveal de texto (1900 bytes, primera implementación)

Cuarta y última función gigante de la sesión. A diferencia de las otras 3 (parsers de tags), esta
es el **tick de animación** que se llama cada frame para avanzar la revelación progresiva del
texto (efecto "máquina de escribir") y sus efectos asociados. No estaba forward-declarada —
tampoco es llamada desde ningún otro punto ya decompilado de este archivo (probablemente invocada
desde fuera de `tcg_text.cpp`, en el loop principal del motor).

Estructura confirmada por disasm completo, 5 sub-sistemas independientes:

1. **Avance de progreso** (`field_0x84`/`0x88` vs contador, `field_0x94`/`0x98`/`0x9c`): si
   `field_0x90==1`, modo "eventos" — recorre un array de records de 0x3c bytes (`fn_80135BA4(h)`)
   y dispara los que ya vencieron según `field_0x94`, con 3 sub-casos (0/2/4) que llaman
   `fn_801356BC` (ya existente) para iniciar transiciones. Si no, modo "progreso continuo" con
   cálculo de ratio directo.
2. **Interpolación de color RGBA** (`field_0x44/0x4c`..`0x47/0x4f` → bytes `0x3c-0x3f`, empacados
   en `field_0x38`) según un contador `field_0x50/0x54` — mismo patrón matemático que el resto del
   archivo (`mulli`/`srawi`/`addze` para redondeo).
3. **Fade** (`field_0xf4/0xf8` → `field_0x2c`), mismo esquema de ratio que (1).
4. **Auto-scroll** (bit `0x200` de `fn_80134DD0`): avanza `field_0x28` por `field_0x104`, clampa
   contra `field_0x18+field_0xcc`.
5. **2 "canales" de tween de posición** (`field_0x28`/`field_0x104`) vía keyframes en
   `h->data+0x110..0x150` — el bloque menos verificado (layout de campos por analogía posicional,
   no confirmado campo a campo).

3 campos nuevos agregados a `TcgTextEntryData` (antes `pad`): `field_0xa4`/`field_0xa8` (buffer
doble de progreso). El resto de campos usados en este best-effort (`0x44-0x4f`, `0x50`, `0x54`,
`0xcc`) siguen sin nombrar — se accedieron vía aritmética de puntero cruda (`(u8*)d + offset`)
para no comprometer el padding ya usado por otras funciones del archivo.

**Resultado**: 42.1% fuzzy — el mejor de las 4 gigantes, pese a ser (subjetivamente) la más
intrincada en cantidad de sub-sistemas independientes. `build.sha1` sigue pasando.

### Vtables reales de CTextEntryBase/Char/Code — direcciones RNEEDA heredadas estaban mal

Al trazar `fn_80136A18`/`fn_801313EC`/`fn_8013230C` (constructores ya con C, heredados de RNEEDA)
contra su disasm REAL de RNEPDA, se confirmó que las 3 vtables (`lbl_803597D0`/`lbl_80359728`/
`lbl_80359770`, nombres heredados sin re-verificar) apuntan a direcciones que ya no son
correctas — la re-ubicación de `tcg_text.cpp` (Fase 5) sólo corrigió direcciones de **código**
(`fn_`/`dtor_`, shift `+0x75C` uniforme), nunca las de **datos** (`lbl_`), que no siguen ningún
shift uniforme (viven en secciones distintas con padding independiente). Direcciones reales
confirmadas por disasm: `lbl_803597D0`→`lbl_8035A100` (CTextEntryBase), `lbl_80359728`→
`lbl_8035A058` (CTextEntry_Char), `lbl_80359770`→`lbl_8035A0A0` (CTextEntry_Code),
`lbl_803597F4`→`lbl_8035A124`, `lbl_803597B8`→`lbl_8035A0E8`. Aplicado en las 5 funciones que las
usan. **El fuzzy% no cambió** (confirma que el diff fuzzy normaliza el *target* de una relocation,
no penaliza que apunte a la dirección equivocada) — el fix es de corrección real, no de score.
Quedan ~14 `lbl_` más sin re-verificar en el archivo (`lbl_803A47B8`, `lbl_804A0290`, los
`lbl_8049CE7X`, etc.), usadas por las funciones ya 100%-fuzzy o parcialmente matcheadas — mismo
riesgo, pendiente para una sesión futura si se persigue matching real (no solo fuzzy).

### `fn_80136748` — arma un recurso de texto desde un string ascii (344 bytes, primera implementación)

Última función pendiente del lote original de "10 más grandes". A diferencia de las otras, nunca
tuvo ni siquiera un intento previo — sólo un prototipo de 2 parámetros para los 2 tail-calls que
la usan (`fn_801368A0`/`fn_801368B4`). El disasm reveló que en realidad usa **3** parámetros
(`buf`, `str`, `len`) — el tercero (`len`) nunca se seteaba explícitamente en esos 2 tail-calls
(`b`, no `bl`, así que `r5` se propaga intacto desde el caller de cada uno), lo que significa que
el prototipo viejo de 2 parámetros para `fn_801368A0`/`58` **también estaba incompleto** —
corregido junto con la función principal.

Cuerpo: copia una plantilla estática de 0x38 bytes (`lbl_80359FA8`, con el largo ya parcheado en
el byte 0x28) al buffer de salida, le agrega el string re-codificado como pares
`(fn_8013654C(char), 0)` y 2 bytes terminadores (`0`, `0xBE`), y llama `fn_80135F38(len, buf)`
para "registrarlo". Si `len<0`, se recalcula vía `fn_80135D90`.

**Resultado**: 22.1% fuzzy para `fn_80136748` (primera vez, contenido/estructura correcta,
aritmética exacta de offsets no verificada al 100%). Pero el fix de firma (3er parámetro)
disparó `fn_801368A0`/`fn_801368B4` de su estado previo a **96.0% fuzzy cada una** — la mejora
más grande de la sesión en proporción al esfuerzo, y evidencia de que revisar firmas de
funciones "wrapper" ya escritas puede valer más que perseguir la función grande en sí.

### Cierre de la ronda de gigantes

Las 4 funciones >1800 bytes de `tcg_text.cpp` (identificadas desde la Ronda 8, nunca
decompiladas) tienen ahora primera implementación best-effort: `fn_80131428`(25.3%),
`fn_801335F4`(19.9%), `fn_80132348`(26.7%), `fn_80134664`(42.1%). Sumado a las correcciones de
vtable y `fn_80136748`/`fn_801368A0`/`fn_801368B4`, el fuzzy global de `tcg_text.cpp` subió de
24.96% a **39.13%**. `build.sha1` pasa en todo momento (NonMatching tolera contenido
aproximado). Ninguna función gigante se persiguió al 100% — todas tienen bloques marcados
inline como best-effort donde la aritmética exacta (especialmente punto flotante) no se
verificó bit a bit, siguiendo el mismo criterio ya establecido para `fn_80132D24`. Con esto se
completa el lote original de "10 funciones más grandes" pedido al inicio de la sesión.

### Ronda de helpers "sin decompilar" citados por las gigantes (2026-07-31)

Tras cerrar el lote de gigantes, se identificaron ~12 funciones citadas como dependencias por las
funciones best-effort recién escritas que **no tenían ningún C** (ni siquiera best-effort —
`report.json` las reportaba `fuzzy_match_percent: null`, es decir, puro asm sin tocar). Se
priorizaron por ser dependencias directas de código ya escrito (mejor relación esfuerzo/impacto
que perseguir otra función grande nueva):

- **`fn_8013654C`** (284 bytes) — convierte un char ascii al indice de glifo de la fuente propia
  del juego. Puntuacion comun vía jump table real de 30 entradas (offsets 0x20-0x3d, extraída
  directo del binario); letras/dígitos por búsqueda posicional en `lbl_8049C344` (contenido no
  interpretado, no hace falta para replicar la búsqueda). Los chequeos de casos especiales están
  repetidos dentro del loop en el original (no dependen del índice de iteración) — se preservó así
  por fidelidad aunque sea lógicamente redundante. **69.0% fuzzy**.
- **`fn_80136120`** (220 bytes) — lookup en tabla fija `lbl_80359C60[10][8]` (u16) con 4
  bounds-checks tipo `assert` que **no están gateados por `NDEBUG`** en el binario original (a
  diferencia de otros validadores ya vistos que sí lo estaban) — se preservan como llamadas reales
  a `fn_801A9384`, no como macro `assert()` de C (que `-DNDEBUG=1` eliminaría por completo).
  **66.5% fuzzy**.
- **`fn_801361FC`** (256 bytes) — getter de una tabla de espaciado/ancho (`lbl_80339F60` o
  `lbl_8033A25C` según modo), con un fallback fijo (0x14) si `fn_80136DA4` da falso. El original
  copia ambas tablas completas al stack antes de indexar; se omitió esa copia (irrelevante para el
  resultado observable) indexando directo sobre los arrays. **26.9% fuzzy**.
- **`fn_80135D90`** (148 bytes) — crea un `TcgTextEntryHandle` nuevo (reusando `fn_80132F3C`) y lo
  registra en un pool global (`lbl_8049D6F8`), devolviendo su índice. Depende de `fn_80130D4C`
  (asignar slot libre), que vive en **otro split fuera de `tcg_text.cpp`** (dirección menor a
  `0x80131324`) — solo forward-declarada, no implementada aquí. **50.5% fuzzy**.
- **`fn_80135F38`** (148 bytes) — versión "variádica" que arma texto formateado reusando el mismo
  pipeline de tags (`fn_8013330C`→`fn_80132B8C`→`fn_80131428`). El original es una función `...`
  real de mwcc (prólogo con save-area de r3-r10/f1-f8 confirmado por disasm), pero **este
  toolchain no tiene `stdarg.h` disponible** (`-nosyspath`, sin MSL, búsqueda exhaustiva del
  filesystem no encontró ninguna versión compatible con mwcc) — sin `va_list` no se puede
  reproducir el prólogo real. Aproximado con un número fijo de 8 argumentos extra en vez de
  variadic real; el contenido/orden de la llamada interna sí es fiel. **22.2% fuzzy**. Esto forzó
  actualizar el único caller conocido (`fn_80136748`), que **bajó** de 22.1% a 13.3% (la forma de
  armar la llamada cambió) — regresión aceptada porque el neto de la ronda es positivo.

Fuzzy global de `tcg_text.cpp`: 39.13% → **40.78%**. `build.sha1` sigue pasando. Quedan sin
decompilar de este mismo grupo: `fn_80135BB0`(272, init del pool global), `fn_8013330C` ya
existía (no confundir), `fn_80135CC0`(208), `fn_80135FCC`(204), `fn_80136308`(176),
`fn_80135810`(160), `fn_80135E24`(160), `fn_80136694`(124) — candidatas para la próxima ronda.
