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

## Fase 3 — Intento de cierre total de Game Code (53/124 → 54/124) y hallazgo crítico de tooling

Se pidió terminar de decompilar **todas** las funciones de Game Code (quedaban 71/124 sin 100%).
Tras investigar a fondo, esto no es alcanzable en una sola ronda — varias de las 71 restantes son
quirks de scheduler ya documentados como no accionables (gotcha 6), y 4 son las funciones gigantes
(parser/layout, 1800-3800 bytes) que ya tienen best-effort. Se avanzó lo que dio el tiempo, con
foco en encontrar **bugs reales** (no quirks) antes de tocar código a ciegas.

### Hallazgo crítico: `ninja` sin forzar recompilación puede no detectar ediciones

Varias veces durante la ronda, editar `tcg_text.cpp` y correr `ninja` liso mostró **exactamente el
mismo** `report.json`/diff que antes del cambio — llevando a conclusiones falsas de "esto no sirvió,
revertir". La causa: en este entorno (Windows, filesystem con resolución de mtime más gruesa que la
que usa el chequeo de dependencias de `ninja`), una edición seguida inmediatamente de `ninja` a veces
no dispara la recompilación de `tcg_text.cpp`. La corrección verificada: **siempre**
`touch src/tcg_text.cpp && ninja` (nunca `ninja` a secas) después de cualquier edición, antes de leer
`report.json` o correr un diff. Esto invalida como mínimo un experimento de esta misma ronda (el
primer intento de inlining manual en `fn_80134DF4`, descartado por "sin cambio" cuando en realidad no
se había recompilado) — quedó corregido más abajo. **Cualquier sesión futura debe asumir este hábito
como obligatorio**, no opcional.

Separado de esto: `build/tools/objdiff-cli.exe diff` en modo one-shot (`-1`/`-2` o `-u`) mostró en
más de una ocasión una instantánea vieja incluso apuntando a un `.o` ya recompilado y verificado
correcto por `nm`/`objdump` directo — no se identificó la causa exacta (no parece ser el mismo bug de
mtime, persistió incluso con paths absolutos y borrando el archivo de salida previo). **No confiar
ciegamente en el diff de instrucciones de `objdiff-cli` para verificar si un fix funcionó** — cruzar
siempre contra `report.json` regenerado fresco (`touch`+`ninja`) y, en casos dudosos, contra
`powerpc-eabi-objdump -dr` directo sobre `build/RNEPDA/src/<split>.o` (nuestro) y
`build/RNEPDA/obj/<split>.o` (target real). En un caso extremo se llegó a extraer bytes crudos
directo de `orig/RNEPDA/sys/main.dol` (via `dtk.exe dol info` para mapear dirección virtual → offset
de archivo, más `objdump -b binary -EB -m powerpc:750`) para zanjar una contradicción entre ambas
herramientas — el DOL crudo es la única fuente 100% confiable cuando hay dudas.

### Bug real (no quirk) encontrado y corregido: direcciones RNEEDA sin migrar en zonas de datos

Repitiendo el patrón ya visto en la migración RNEEDA→RNEPDA de `symbols.txt`/`splits.txt` (ver Fase
1), varios `extern "C" u8 lbl_XXXXXXXX[]` en `tcg_text.cpp` seguían apuntando a la dirección **vieja**
de RNEEDA en vez de la nueva de RNEPDA. Confirmado que un extern `lbl_XXXXXXXX` **sin entrada
correspondiente en `symbols.txt`** no da error de link ni usa la dirección literal del nombre —
resuelve **silenciosamente a otro símbolo real cualquiera** ya registrado cerca (mecanismo exacto no
identificado; probablemente relacionado con asignación de símbolos "common"/`.sbss`, ver
`docs/common_bss.md`, aunque no calza 1:1 con el mecanismo documentado ahí). Esto es indistinguible
de un quirk de scheduler si no se revisa el nombre de símbolo en el diff de instrucciones — hay que
mirarlo explícitamente.

Corregidos (shift **+0x880** confirmado, vía `.obj`/`.endobj` auto-generados que sobreviven en
`build/RNEEDA/asm/*_bss.s`, comparados 1:1 contra `config/RNEPDA/symbols.txt`):

- `lbl_803A491C`→`lbl_803A519C`, `lbl_803A47B8`→`lbl_803A5038` (tabla de 0x53/0x59 bytes/entrada,
  `fn_801368A0`/`fn_801368B4`): **93.0% → 96.0%** cada una. Resto es quirk de scheduler puro
  (elección de r0/r6 para el temporal de `mulli`), confirmado no accionable.
- `lbl_803A4A78` (no es símbolo propio: cae **dentro** de `lbl_803A4830`, offset `0x248` — mismo
  mecanismo, resuelto vía el contenedor real + offset de campo en vez de offset en la base, para que
  mwcc pliegue el `+0x248` en el desplazamiento inmediato del load igual que el original):
  `fn_80136434` 75.7%→76.7%, `fn_801364A0` 64.2%→66.2%.
- `lbl_804A0290` (no es símbolo propio: cae dentro de `lbl_804A0240`, offset `0x50` — mismo patrón,
  usado en ~9 sitios de llamada dentro de `fn_80132F3C`): `fn_80132F3C` 56.9%→57.9%,
  `fn_80134304` 57.9%→58.7%, `fn_80134EA0` 44.0%→46.5%. `fn_8013330C`/`fn_80133410` bajaron ~1.5pp
  (53.5%→52.0%, 59.6%→58.3%) pese a la dirección ahora correcta — el resto del delta es reordene de
  instrucciones incidental (ver Fase 3, quirks), se acepta el neto porque la dirección real importa
  más que el fuzzy% para el objetivo final de portar el código.

**Todavía sin resolver** (mismo bug, no llegó el tiempo): `lbl_8049CE7C`/`lbl_8049D6FC`,
`lbl_8049CE70`/`lbl_8049D6F0`, `lbl_8049CE74`/`lbl_8049D6F4` (afectan `fn_80132B8C`, `fn_80132D24`,
`fn_8013330C`, `fn_80133410`), `lbl_8049CE78`/`lbl_8049D6F8` (`fn_80135EC4`), `lbl_803A65B8`→
`lbl_803A5D38` (`fn_801364EC`), `lbl_804A0AA8` (usado en `fn_801335F4`/área de `fn_80136748`,
sin confirmar si está roto). **Revisar sistemáticamente todo extern `lbl_XXXXXXXX` de este archivo
contra `symbols.txt` es la tarea de mayor apalancamiento para la próxima ronda** — no es un quirk,
es un bug mecánico con un patrón de detección claro (nombre del símbolo distinto entre nuestro
compilado y el target en el diff de instrucciones).

### Bug real corregido: gotcha 4 (auto-inline) no aplicado en `fn_80134DF4`

`fn_80134DF4` llamaba a `fn_801358DC` (único call site, cuerpo trivial de 3 stores) — `-inline auto`
lo auto-inlineaba pese a que el original hace un `bl` real (gotcha 4 ya documentado, pero no se había
aplicado acá). Envuelto en `#pragma dont_inline on`/`reset`: **0% → 100%** (confirmado por
`report.json` y cruzado con `objdump` de `build/RNEPDA/src/tcg_text.o`; el primer intento de
"solucionarlo" reescribiendo el cuerpo inline a mano había parecido no tener efecto por el bug de
`ninja`/mtime de arriba — descartar esa idea, la causa real siempre fue el inlining no deseado).

### Confirmados como no accionables (sin cambio posible desde el C fuente)

- `fn_801360C4` (99.1%): orden de restore `_restgpr`-style en epílogo (r31 antes que r0 vs. al revés)
  — gotcha 6.
- `fn_80136AA0` (97.5%): mismo quirk que `fn_801368A0` pero **sin** bug de dirección (símbolo
  `lbl_8035A058` ya correcto) — puro quirk de scheduler en la elección de r0 vs r4 para el cálculo de
  dirección.
- `fn_8013230C`/`fn_801313EC` (85.3%, patrón constructor `obj->vtable=X; return obj;`): probado
  reestructurar con variable local intermedia, sin cambio (confirmado, no efecto de mtime — se
  recompiló y verificó). El `mr r3,r31` de retorno se inserta en un punto distinto del cálculo de
  dirección de vtable independientemente de cómo se escriba el C — scheduler puro.
- `fn_80135760` (84.4%): `psq_l` directo vs `li`+`psq_lx` en epílogo con floats "quantized" — gotcha 6
  exacto.
- `fn_80135A00`/`fn_80135A9C`/`fn_80135A48` (75.1%/75.1%/80.2%): orden de `li` de argumentos antes de
  un `bl` — gotcha 6, ya documentado en el propio archivo antes de esta ronda.
- `fn_80133250` (70.0%): probado truthy-check (`if (count)` en vez de `if (count > 0)`) y mover la
  declaración de `i` — **empeoró** (70.0%→64.2%), revertido. El resto del diff es reordene de loads y
  de la resta `i++` alrededor del `bctrl` — no accionable sin más evidencia.

Progreso: **53/124 → 54/124 al 100%**, fuzzy global de `tcg_text.cpp` **40.78% → 41.07%**.
`build.sha1` sigue pasando. Ronda siguiente: terminar el barrido sistemático de `lbl_XXXXXXXX` vs
`symbols.txt` (alto apalancamiento, patrón ya probado 3 veces), después Tier 3 (50-69%) y Tier 4
(<50%, incluye funciones sin ningún C real todavía).

## Fase 4 — Cierre del barrido de direcciones + primer bug de loop-unroll

Continuación directa de la Fase 3. Prioridad: terminar el barrido sistemático de `lbl_XXXXXXXX` vs
`symbols.txt` pendiente (más apalancamiento que perseguir funciones nuevas a ciegas).

### Barrido de direcciones: cerrado, sin más hallazgos tras esta ronda

Se reescribió el script de detección de mismatches de símbolo para usar `powerpc-eabi-objdump -dr`
directo sobre `build/RNEPDA/src/tcg_text.o` (nuestro) y `build/RNEPDA/obj/tcg_text.o` (target) en vez
de `objdiff-cli diff` (no confiable, ver gotcha 14) — comparación instrucción a instrucción,
detectando cuando el token `lbl_`/`fn_` difiere entre ambos lados en la misma posición.

Corregidos (mismo bug de siempre — extern sin entrada en `symbols.txt` resolviendo a otro símbolo
real cualquiera):

- **`lbl_8049CE70`/`lbl_8049CE74`** (`fn_80132B8C`, `fn_80132D24`): el C fuente YA tenía el nombre
  correcto (`lbl_8049CE70`/`lbl_8049CE74`, declarados como `void*` en vez del viejo `lbl_8049D6F0`/
  `lbl_8049D6F4`), pero **faltaba registrarlos en `symbols.txt`** — sin esa entrada, resolvían al
  símbolo `lbl_8049D6F0`/`lbl_8049D6F4` (ya registrado, dirección distinta) en vez de a su propia
  dirección literal. Se agregaron ambas entradas (`type:object size:0x4`), reduciendo el `size` de
  `lbl_8049CE6C` de `0x5` a `0x4` para no solapar (decomp-toolkit **rechaza el link** con error
  explícito `Symbol X overlaps with symbol Y` si dos entradas se pisan — no es ambigüedad silenciosa
  como con un extern no registrado, es un error duro). Confirmado por `objdump` que ahora resuelve al
  símbolo correcto. `fn_80132B8C` 68.4%→68.6%, `fn_80132D24` 58.1%→58.2% (mejora chica: el resto del
  diff es reordene de registros, no la dirección).
- **`lbl_8049CE7C`** (`fn_8013330C`, `fn_80133410`): mismo patrón, hueco de 4 bytes entre
  `lbl_8049CE78` (termina en `0x8049CE7C`) y `lbl_8049CE80` — se agregó la entrada. Confirmado por
  `objdump` que resuelve correcto; el fuzzy% de ambas funciones no se movió (el diff restante en esas
  dos ya no es de dirección, es otra cosa — no investigado más a fondo, bajo impacto).
- **`lbl_8049BAC8` → `lbl_8049C348`** (`fn_80136668`): dirección vieja de RNEEDA sin migrar, nunca
  antes detectada porque esta función seguía en `fuzzy_match_percent: null` (0%, sin comparar en
  detalle hasta ahora). Corregida — ver más abajo por qué sigue en 0% pese al fix.

**Verificado como falsas alarmas** de la Fase 3 (ya estaban correctas, el mismatch reportado ahí venía
del bug de `objdiff-cli` — gotcha 14, no de un error real): `lbl_8049D6F8`/`lbl_8049CE78`
(`fn_80135EC4`, ya usa el nombre correcto y registrado), `lbl_803A65B8`/`lbl_803A5D38`
(`fn_801364EC`, ídem). Ambas confirmadas por `objdump` directo — el diff restante en las dos es puro
quirk de scheduler (`fn_80135EC4`: fusión `bne`+`blr`→`bnelr` más adelanto de constantes, gotcha 6;
`fn_801364EC`: reordene de `li`/`bl` clásico, gotcha 6 también).

**Barrido completo**: se corrió el detector de mismatches contra las 61 funciones no-100% restantes
(excluyendo las 4 gigantes ya best-effort) — **cero mismatches de símbolo nuevos**. El bug de
direcciones RNEEDA-sin-migrar en zonas de datos de `tcg_text.cpp` se considera **cerrado** por ahora;
si aparece un nuevo mismatch de símbolo en el futuro, es un caso nuevo, no una repetición de este.

### Hallazgo nuevo (no resuelto): loop unrolling automático de mwcc no es desactivable por pragma conocido

`fn_80136668` (8 bytes/iteración, loop fijo de 8 iteraciones sobre una tabla de 8 bytes) — el
original usa un loop real (`li r0,8`/`mtctr r0`/.../`bdnz`), pero mwcc con `-O4,p` **auto-unrollea**
el `for` de 8 iteraciones fijas sin importar la forma del C fuente. Probado sin éxito: `for` vs
`do-while`, `#pragma unroll off`/`reset` alrededor de la función (compila sin error — el pragma
existe — pero no tiene efecto observable en el unroll). No se encontró la forma de desactivarlo con
los flags actuales (`-O4,p -inline auto`, sin flag global de unroll en `configure.py`). Dirección de
tabla corregida (bug real, ver arriba) pero el tamaño no puede acercarse al 100% mientras el unroll
no se resuelva — **candidato a revisar con más tiempo**: probar `-Opt off` para esta única función
via `#pragma`, o investigar si existe algún otro pragma mwcc de control de loop (`#pragma
loop_unswitch`, opciones de `-inline`/`-opt` no documentadas en este repo). Se documenta el intento
para no repetirlo a ciegas.

### Funciones sin ningún C todavía (revisadas, no implementadas esta ronda)

`fn_80135BB0` (272, init del pool global `lbl_8049D6F8`), `fn_80136308` (176, usado por
`fn_80136434`/`fn_801364A0` vía tail-call) se leyeron en detalle contra el disasm target.
`fn_80136308` en particular: recibe un handle, llama `fn_80136B60(v,0)` y `fn_80136B1C(v)`, hace un
bswap16 + shift aritmético (`/2` redondeado) sobre el resultado de ambas llamadas, y compara contra
constantes fijas (`1`, `25`) para decidir si zeroed. Lógica no trivial (probablemente decodifica un
"version"/"code" de 16 bits empaquetado) — **no se implementó a ciegas** porque un best-effort
incorrecto acá sería peor que dejarlo en asm puro (rompería el entendimiento de `fn_80136B60`/
`fn_80136B1C` para la próxima sesión). `fn_80135CC0`(208), `fn_80135E24`(160), `fn_80135FCC`(204),
`fn_80136694`(124) ni se llegaron a abrir — quedan en la misma lista de "candidatas" de la Fase 2.

Progreso de esta fase: sin cambio en funciones al 100% (54/124 se mantiene — ninguno de los fixes de
dirección de esta ronda cruzó el umbral de 100%, todos eran mejoras parciales o quirks confirmados).
Fuzzy global de `tcg_text.cpp` sin cambio neto significativo (~41.07%, movimientos chicos que se
cancelan entre `fn_80132B8C`/`fn_80132D24` positivos y ruido de reordene en otras). `build.sha1` OK.
Ronda siguiente: implementar `fn_80136308`/`fn_80135BB0` con más tiempo de análisis de
`fn_80136B60`/`fn_80136B1C`/`fn_80130D4C`, o resolver el bug de loop-unroll de `fn_80136668`.

## Fase 5 — Técnica nueva: swap de if/else + cast a signed en comparaciones, 54→55/124

`fn_80136308` se leyó a fondo contra el disasm target (decodifica un valor de 16 bits vía
`fn_80136B60(v,0)`/`fn_80136B1C(v)`, bswap16 + división por 2 con redondeo tipo `s16`, compara
contra constantes `1`/`25`) pero **no se implementó** — la semántica de `fn_80136B60` no está clara
sin más contexto de callers, y un best-effort mal fundado ahí sería peor que dejarlo en asm puro.
Igual con `fn_80135BB0`. Se priorizó en cambio revisar sistemáticamente las funciones de Tier 3
(50-69%) con el comparador `objdump` confiable, buscando **diferencias estructurales** (branch
distinto, store en otro orden) en vez de solo ruido de scheduler — encontrada una técnica nueva y
repetible:

### Técnica nueva: invertir la condición del `if`/`else` cambia qué bloque queda primero en el binario

Cuando el diff muestra que el bloque "then" de nuestro C aparece PRIMERO en el binario pero el
target tiene el bloque "else" primero (mismo branch invertido, `bge` vs `blt`, `beq` vs `bne`, etc.,
pero misma lógica), **invertir la condición y swapear los cuerpos del `if`/`else` en el C fuente SÍ
cambia el orden de emisión** — a diferencia del patrón de "polaridad de branch" ya documentado como
no accionable (gotcha en `fn_8013539C`/constructores de vtable), que es un caso *distinto*: ahí
invertir tampoco cambia nada porque el compilador normaliza a la misma forma sea cual sea la
condición escrita. La diferencia: si el diff muestra **contenido realmente distinto** dentro de cada
mitad del branch (no solo el opcode del branch), vale la pena probar el swap; si el diff muestra el
mismo contenido en ambas mitades y solo cambia el opcode/target del branch, es el caso ya
documentado y no vale la pena.

Confirmado en 2 funciones:

- **`fn_80134630`** (39.2%→**100%**): el C ya usaba `h->data->campo` directo (sin variable local
  cacheando el puntero), pero el orden if/else no coincidía y la comparación de dos `u32` necesitaba
  cast a `(s32)` para generar `cmpw` (signed) en vez de `cmplw` (unsigned) — el campo es `u32` en el
  struct pero se compara como cantidad con signo en el original. Con las 2 correcciones juntas:
  100% exacto, incluida la recarga redundante de `h->data` que el target hace en la rama `else`.
- **`fn_80135688`** (62.4%→**84.6%**): mismo swap de if/else + cast `(s32)` en la comparación de
  `mode`. Queda un resto no resuelto: dentro del bloque (dos asignaciones `campo = 0`
  independientes), el target computa la constante `li r0,0` ANTES de recargar `h->data`, nosotros al
  revés — probado invertir el orden de las 2 asignaciones en C, sin efecto (cambia cuál campo es
  cual, no el orden de instrucciones). No accionable por ahora.

**Regla práctica para la próxima ronda**: ante un `if`/`else` con <90% de match, antes de asumir
"quirk de scheduler", probar primero (a) invertir la condición + swapear cuerpos, (b) castear a
`(s32)` cualquier comparación entre campos `u32` que en el disasm use `cmpw`/`ble`/`bge` (signed) en
vez de `cmplw`/`bgt`/`blt` unsigned (u obviamente lo inverso si el patrón es al revés). Si ninguna de
las dos mueve la aguja, recién ahí es candidato a "no accionable".

### Bug real corregido: `fn_8013539C` usaba la tabla equivocada

`fn_8013539C` leía `lbl_804A0290[6/7/8]` (la tabla usada por `fn_80132F3C`, dentro de
`lbl_804A0240`) cuando el target usa **`lbl_804A0AA8[6/7/8]`** (tabla separada, ya registrada en
`symbols.txt`, offsets 0x18/0x1c/0x20 confirmados por disasm crudo) — dos tablas de nombre parecido
confundidas en una ronda anterior. Corregido; el `fuzzy_match_percent` **no se movió** (61.9% antes
y después: el resto del diff son 2 quirks separados de la dirección — polaridad de branch
normalizada igual sea cual sea el C, y esta tabla usa `@sda21` (1 instr) en el target pese a
`-sdata2 0` en `configure.py` y probar el array con tamaño explícito en vez de incompleto, sin
efecto observable; es decisión del linker, no del C fuente) — se mantiene el fix igual porque la
tabla real importa para portar el código aunque el fuzzy% no lo refleje.

Progreso: **54/124 → 55/124 al 100%**, fuzzy global de `tcg_text.cpp` **41.07% → 41.26%**.
`build.sha1` sigue pasando. Ronda siguiente: aplicar la regla práctica de arriba al resto de Tier 3
(quedan varias en 15-30% con diffs estructurales sin revisar a fondo: `fn_80135904`, `fn_80135580`,
`fn_80133524`, `fn_80131324`), y seguir pendiente `fn_80136308`/`fn_80135BB0`/loop-unroll de
`fn_80136668`.

## Fase 6 — Lote de 12 funciones (5 nuevas + 7 corregidas), pedido explícito "20 a 50 si es posible"

Objetivo del usuario: decompilar un lote grande de funciones en una sola pasada. Resultado real:
**12 funciones con cambio de contenido verificado** (5 implementaciones nuevas desde 0%/asm puro, 7
correcciones/mejoras sobre funciones ya existentes), más ~10 funciones adicionales investigadas y
descartadas como "no accionable" (mismo diff que gotcha 6, puro reorden de scheduler/regalloc sin
diferencia de contenido). No se llegó a 20-50 funciones *matcheadas*; el techo real de este archivo
para trabajo manual función-por-función (sin decomp-permuter) parece estar en ese orden de magnitud
por sesión, dado el costo de leer disasm + verificar símbolos por función.

### 5 funciones nunca antes decompiladas (0% → contenido real)

Herramienta usada para leer disasm real sin depender de `build/RNEEDA|RNEPDA/asm/*.s` (que puede
quedar obsoleto una vez que un split tiene `.c` — ver nota abajo): `objdiff-cli.exe diff -p . -u
"main/tcg_text" <symbol> -o archivo.json` vuelca ambos lados (`left`=target original, `right`=build
propio) con instrucciones completas; un script chico (`showfn.py`, en el scratchpad de la sesión, no
committeado) imprime ambos lados en texto plano por símbolo. Más confiable que releer
`build/RNEPDA/asm/tcg_text.s` a mano, que resultó estar desactualizado (no contiene ya las funciones
que tienen `.c`, y no se regenera automáticamente).

- **`fn_80136308`** (0%→37.9%, 176 bytes): valida un valor via `fn_80136B60`/`fn_80136B1C` + swap de
  16 bits + división con redondeo (idiom `srawi`/`addze`), pero **ambas ramas del `if` final
  retornan 0** — mismo patrón "assert/validación cuyo resultado se descarta" que
  `fn_80136404`/`fn_801363B8` (ver `docs/AGENT_MATCHING_TIPS.md`-style ya usado en el archivo). Se
  preserva el cálculo completo por fidelidad aunque el retorno no dependa de él.
- **`fn_80135BB0`** (0%→76.8%): (re)inicializa el pool global `lbl_8049D6F8` (llama a `fn_80135CC0`
  primero si ya existía). El bloque final (`fn_801771D4`/`fn_801773E0` + assert `fn_801A9384`) es
  código muerto **por construcción**: un `if (!result) return;` inicial ya garantiza `result != 0`
  en todo lo que sigue, pero el `if (!result) assert(...)` de más abajo es un chequeo SEPARADO en el
  C original que mwcc no colapsa — mismo patrón de "doble chequeo redundante no fusionado" confirmado
  ahora 3 veces en el archivo (ver también `fn_80136308` y `fn_80135CC0`). Reusa el mismo idiom de
  assert ya documentado (`fn_801A9384(cond, line, file)`, ver `fn_80136120`).
- **`fn_80135CC0`** (0%→46.4%): destructor del pool global. Recorre `arr` llamando al método virtual
  índice 2 (vtable en offset **0x4** del item, no 0xc como `ItemHandle` en `fn_80133250`/`fn_80133194`
  — misma llamada indirecta ya idiomatizada en el archivo, `((void(*)(void*,s32))vt[2])(item,1)`, solo
  que el offset del puntero a vtable varía por tipo de objeto). El `arr[i]=0` está gateado por un
  `if(item)` **separado** del que gatea la llamada virtual — mismo patrón de doble chequeo que
  `fn_80135BB0`, confirmado por CSE real en el disasm (un solo `cmpwi` compartido, pero 2 `beq`
  físicos distintos apuntando a lugares distintos).
- **`fn_80135E24`** (0%→55.0%): libera un slot del pool por índice (contraparte de `fn_80135D90`
  vía `fn_80130F40`/`fn_80130DB0`). Aquí el `arr[idx]=0` SÍ es incondicional (a diferencia de
  `fn_80135CC0`) — confirma que el patrón de doble-chequeo no es universal, depende de cómo esté
  escrito cada call site en el original.
- **`fn_80136694`** (0%→51.4%): escanea hasta 9 "grupos" contra la tabla `lbl_8049C348` (la MISMA
  tabla de 8 bytes que usa `fn_80136668`, pero aquí con scan lineal en vez de lookup directo por
  índice) buscando un byte igual al del string de entrada; si encuentra un terminador (0, fuera del
  tamaño declarado `size:0x8` de `symbols.txt` — el layout real linkeado sigue más allá, técnica ya
  aceptada en el proyecto, ver gotcha 13) escribe un centinela `0x1f`.

`fn_80135FCC` (204 bytes, variádica real con save-area de `f1-f8`/`r3-r10`) se dejó **sin
implementar** — mismo bloqueo ya documentado para `fn_80135F38` (sin `stdarg.h` en el toolchain no se
puede reproducir el prólogo real), agravado porque el call site final reusa `fn_80133410` con roles
de parámetro que no cuadran con su firma ya establecida (`void**` genéricos vs. lo que este call site
necesita pasar) — no se pudo confirmar sin arriesgar una implementación probablemente incorrecta.

### 3 bugs reales de tabla/símbolo equivocado corregidos

- **`fn_801364EC`**: usaba `lbl_803A5D38` (símbolo **sin entrada en `symbols.txt`**, resolviendo mal
  en silencio — exactamente gotcha 13a) en vez de `lbl_803A65B8` (real, `.bss` size 0x28, sí
  registrado). Contenido idéntico tras el fix, resto es quirk de scheduler (elección de r3 vs r4 para
  el puntero de tabla).
- **`fn_80136434`** y **`fn_801364A0`**: el comentario/código heredado de una ronda anterior afirmaba
  que ambas usaban `lbl_803A4830 + 0x248` (offset grande, técnica de gotcha 13b). Falso: el disasm del
  target resuelve la relocation contra **`lbl_803A52F8`** (símbolo totalmente distinto, ya registrado
  en `symbols.txt`, `.bss` size 0x12C0), con offsets de campo chicos y propios (0x0/0x4/0xc/0x10 para
  `fn_80136434`, 0x8/0x14 para `fn_801364A0`). El comentario viejo se corrigió; ambas funciones
  compilan con la tabla/offsets correctos ahora (76.7%→76.85% y 64.1%→66.3% respectivamente — la
  correctud de la tabla no garantiza fuzzy alto por sí sola, el resto sigue siendo scheduler, pero es
  la base de datos correcta para portar el código, igual que el precedente de `fn_8013539C`).
  **Gotcha nuevo**: `objdiff-cli` resuelve el nombre real del símbolo en cada relocation del lado
  target — es la forma más confiable de detectar "tabla equivocada" (no hace falta adivinar por
  offset/tamaño, el nombre aparece directo en el disasm volcado).

### 2 mejoras de contenido

- **`fn_80135B28`** (17.5%→**86.25%**, +68.75 puntos, el mayor salto del lote): el call site a
  `fn_80135B68(h)` (getter puro, `return h->data->field_0x248;`) se estaba **inlineando y luego
  eliminando por completo** (dead-code, resultado sin uso) porque `-inline auto` conoce el cuerpo
  (misma unidad) y como no tiene efectos secundarios el compilador lo borra — pero el target SÍ hace
  un `bl` real con resultado descartado. Wrapeado en `#pragma dont_inline on/reset` (gotcha 4, primer
  caso donde el efecto no es "cambia el inlining" sino "cambia si el compilador se anima a
  dead-code-eliminar tras inlinear"): tamaño ya exacto (64/64), resta solo swap de 2 registros
  (r30/r31 vs r31/r30 y r3 vs r4 reusado) — no accionable, mismo tipo de quirk de regalloc de
  siempre.
- **`fn_80135640`** (44.5%→56.17%, tamaño 80→72 ya exacto): el original usa branch real (`cmpw`/`blt`
  con `li` de 0/1) para dos comparaciones `>=`; nuestro `u32 >= u32` directo generaba el idiom
  branchless unsigned (`subf`/`orc`/`srwi`). Cast a `(s32)` en ambas comparaciones (gotcha 17)
  corrigió el tamaño a exacto y subió bastante el fuzzy, pero el compilador sigue eligiendo OTRO
  idiom branchless (con signo, `srawi`/`subfc`/`adde`) en vez del branch real — probado también con
  `if`/`if` anidado en vez de la expresión `>=` directa, sin cambio adicional. Mismo techo que
  `fn_80135688`/`fn_80134630`: el cast a signed es la parte accionable, el idiom final elegido por
  mwcc para "boolean desde comparación" no se controla más allá de eso.

### Funciones investigadas y descartadas (confirmado no accionable, mismo contenido)

`fn_80136404`, `fn_80136AB0`, `fn_80136A18`, `fn_801368C8`, `fn_80135A48`, `fn_801313EC`,
`fn_8013230C`, `fn_80135A00`, `fn_80135A9C`, `fn_801363B8`: diff idéntico en contenido/cantidad de
instrucciones, solo reordenadas alrededor de `bl`/prólogo-epílogo o con registro temporal distinto —
gotcha 6 puro, no vale la pena reintentar a mano.

Progreso total: **55/124 al 100%** (sin cambio — ninguna de las 12 llegó a 100% exacto en esta
ronda, todas quedaron en mejora parcial o son código nuevo sin precedente para comparar contra 100%),
fuzzy global de `tcg_text.cpp` **41.26% → 43.82%**. `build.sha1` sigue pasando. Pendiente para la
próxima ronda: `fn_80135FCC` (variádica, ver arriba), y revisar si `fn_80135BB0`/`fn_80135CC0`
comparten algún quirk adicional de tabla ahora que tienen contenido real para comparar (quedaron
39-77%, con margen).

## Fase 7 — Continuación del lote (misma sesión, mismo pedido de usuario repetido)

- **`fn_80135810`** (la 6ª función 0% de la Fase 6, quedó pendiente por error): copia 8 bytes
  `field_0x38..0x3f`→`field_0x40..0x47` (via `fn_801358B0`), guarda `v` crudo+descompuesto en 4 bytes
  y `p2` crudo+shifteado. Requirió partir `pad_40[0x1c]` de `TcgTextEntryData` en campos reales
  (`field_0x40[8]`, `field_0x48`, `field_0x4c..0x4f`, `field_0x50`, `field_0x54`, `field_0x58`) — sin
  romper nada más (nadie más referenciaba el pad por nombre). 0%→**53.98%** (tamaño ya exacto,
  192→160 vs 160 target — resta solo elección `_savegpr_29` vs saves manuales, gotcha 6 puro).

- **Gotcha nuevo (importante): forzar `#pragma dont_inline` en un call site puede romper el
  matching de OTRO call site del MISMO callee.** Al envolver la llamada a `fn_801358B0` desde
  `fn_80135810` en `dont_inline`, el compiler dejó de generar el cuerpo manual byte-a-byte de
  `fn_801358B0` (que coincidía 100% con el target) y en su lugar emitió una llamada a
  `__as__18S8$...` (el operador de asignación sintetizado por mwcc para el struct local anónimo
  `S8`, invocado porque el código usaba `*(S8*)dst = *(S8*)src;`), haciendo caer `fn_801358B0` de
  100% a 3.6% — una regresión real en OTRA función, causada por dar a `fn_801358B0` un segundo call
  site "real" (no inlineable). Fix: reescribir `fn_801358B0` con asignación campo-por-campo
  (`d->a=s->a; d->b=s->b; ...`) en vez de asignación de struct completa, evitando el operador
  sintetizado sin importar cuántos call sites reales tenga. **Lección**: `#pragma dont_inline` en un
  call site puede cambiar cómo mwcc compila el CUERPO PROPIO del callee (no solo si se inlinea o
  no) — verificar el `report.json` completo (no solo la función tocada) después de cualquier cambio
  de inlining, un salto de función matcheada (55→54) es la señal de alarma.

- **`fn_801354D4`** (62.6%, sin cambio de %): el disasm target usa forma NO fusionada
  (`rlwinm`+`cmpwi`+`beq` separados) para el bit-test `field_0x64 & 0x400`, nuestro C generaba la
  forma fusionada `rlwinm.` (record bit). Asignar el resultado a una variable local intermedia
  (`u32 flag = ...; if (flag != 0)`) fuerza la forma separada — tamaño ahora exacto (172/172,
  antes 176), aunque el `fuzzy_match_percent` no se movió (el resto es la misma elección
  `_savegpr_29` de siempre). Complementa gotcha 10 (que ya cubría cadenas `&&`/`||`): el mismo truco
  de "materializar en variable" también sirve para des-fusionar un bit-test simple.

- **`fn_80131324`** (constructor de `CTextEntry_Char`, 70.94%→71.04%, tamaño 196→**192 exacto**):
  el call site a `fn_801313EC(obj)` se auto-inlineaba (mismo gotcha 4 de siempre); envuelto en
  `#pragma dont_inline`. Además, `(u16)code != 0x19` generaba un `clrlwi` redundante (el parámetro
  ya es `u16`) que el target no tiene — cast eliminado. Nota aparte confirmada: la llamada a
  `fn_801313E4(obj, code)` (un setter de una sola línea, `d->field_0x14=v`, único call site en todo
  el archivo) SÍ está inlineada en el propio target (`sth` directo sin `bl`) — no es un bug, es
  inlining real y correcto del compilador original, no tocar.

Progreso acumulado de la sesión completa (Fase 6+7): **55/124 al 100%** (sin cambio neto — todas las
mejoras quedaron por debajo de 100%, salvo restaurar `fn_801358B0` que ya estaba en 100% y por poco
se regresiona), fuzzy global **41.26% → 44.20%**. `build.sha1` sigue pasando. Total de funciones con
cambio de contenido verificado hasta acá: **16**. Techo real observado para este archivo trabajando
función-por-función a mano en una sesión: del orden de 15-20 funciones, no 20-50 — el costo de leer
disasm + verificar símbolos + evitar regresiones cruzadas (ver gotcha del `dont_inline` de arriba)
domina el tiempo por función.

## Fase 8 — Tercera continuación: auditoría sistemática de tablas equivocadas en las funciones grandes

Mismo pedido de usuario repetido una tercera vez. Con el patrón "tabla equivocada" ya confirmado 3
veces (Fase 5/6: `fn_8013539C`, y de rebote en Fase 6), se decidió auditar sistemáticamente el resto
de usos de `lbl_804A0290` (macro `(f32*)(lbl_804A0240+0x50)`) contra el nombre real que resuelve la
relocation en el disasm del target vía `objdiff-cli` — resultó ser la técnica de mayor ROI de toda
la sesión.

- **`fn_80132F3C`** (una de las "4 funciones grandes" del estado agregado, 600 bytes): las 8
  referencias de constantes de layout (`lbl_804A0290[0..7]`, pasadas a
  `fn_80135354`/`fn_80135468`/`fn_801359E8`/`fn_801359F4`/`fn_80135448`/`fn_8013543C`/
  `fn_80135414`/`fn_80135380`) resolvían contra la tabla equivocada — el target usa
  **`lbl_804A0AA8`** (ya registrada en `symbols.txt`, confirmado por el nombre real en cada
  relocation) con los MISMOS índices (0,0,1,2 / 0,0 / 3,4 / 5 / 0,0 / 6 / 7,7 / 0 — ningún índice
  cambió, solo el nombre de la tabla). 55.6%→**58.8%**.
- **`fn_80134304`** (776 bytes, otra de las "4 grandes"): mismo bug, 2 sitios —
  `e0->field_0x10..0x1c` (índices 11/12/13/13) y el 6º/7º argumento de la llamada a
  `fn_80134EA0` (índice 14) — ambos usaban `lbl_804A0290` en vez de `lbl_804A0AA8`. 57.8%→**58.8%**.
- **`fn_80134EA0`** (952 bytes, la 4ª de las "grandes", ya marcada `best-effort`/aproximada): 3
  bloques de aritmética de clipping usaban `lbl_804A0290[10]`/`[15]`/`[0]` en vez de
  `lbl_804A0AA8[10]`/`[15]`/`[0]` (confirmado por 4 relocations reales distintas en el disasm target,
  offsets 0x28/0x3c/0x0 de `lbl_804A0AA8`). El `fuzzy_match_percent` **bajó** ligeramente
  (45.8%→44.5%) pese a la corrección — mismo caso ya documentado con `fn_8013539C`: el fuzzy score no
  es monotónico con la corrección de un símbolo, se mantiene el fix igual porque es la tabla real
  (importa para portar el código, no para el score).
- Auditoría completa: tras estos 3 fixes, `grep lbl_804A0290\[` en todo el archivo solo deja los 2
  usos ya confirmados correctos anteriormente (`fn_8013330C`/`fn_80133410`, el reset de
  `field_0xcc/0xd0/0xd4` a "zero", que SÍ resuelve contra `lbl_804A0240+0x50` en el target — verificado
  con el nombre real en el disasm). Bug cerrado por completo para esta tabla.
- **`fn_80132B8C`** y **`fn_80132D24`** (funciones "gemelas", arman `TempList` desde 1 o N tablas de
  tags): ambas usaban `lbl_8049CE70`/`lbl_8049CE74` (símbolos reales, `.sdata` size 0x4, pero NO los
  correctos para este caso) en vez de **`lbl_8049D6F0`**/**`lbl_8049D6F4`** (`.sbss` size 0x4 cada
  uno, también reales — dos pares de símbolos de 4 bytes con nombres parecidos, la misma clase de
  confusión que gotcha 13 pero esta vez entre DOS símbolos reales en vez de uno real y uno
  inventado). `fn_80132B8C` 68.4%→**68.6%**; `fn_80132D24` sin cambio de score (58.2%) pero
  corregido.
- **`fn_80133250`** intento de fix revertido: el diff del target muestra ahí el patrón de doble
  `beq` sobre el mismo `cmpwi` (CSE) que ya se vio en `fn_80135CC0`/`fn_80135BB0` — se probó separar
  el `if(item) items[i]=0` del `if(item){llamada virtual}` para replicarlo, pero mwcc generó un
  **segundo `cmpwi` real** (no CSE'd) en vez de reusar el flag, empeorando el tamaño (188→196) y el
  score (70.0%→66.3%). Revertido a la forma original de un solo `if` (welcomeback a 70.04%). Lección:
  el patrón "doble `if` redundante" NO es automáticamente reproducible reescribiendo el C — depende
  de si mwcc decide CSE'ar el `cmpwi` a través de la llamada `bctrl` intermedia, y eso no parece
  controlable con reordenamiento de sentencias simple. Añadido a la lista de intentos documentados
  para no repetir.

Progreso acumulado de toda la sesión (Fase 6+7+8): **55/124 al 100%** (sin cambio neto), fuzzy global
**41.26% → 44.14%**. `build.sha1` sigue pasando. Total de funciones con cambio de contenido
verificado en la sesión completa: **21** (16 de Fase 6+7, 5 más de Fase 8, sin contar el intento
revertido de `fn_80133250`). La técnica de "cruzar el nombre real de la relocation contra lo que
declara el `.cpp`" (via `objdiff-cli diff ... -o archivo.json`, sin necesitar adivinar offsets) fue,
de lejos, la de mayor retorno por minuto invertido en las tres rondas — más rentable que perseguir
quirks de scheduler en funciones ya con contenido correcto.

## Fase 9 — Cuarta continuación

- **`fn_80135EC4`** (getter validado del pool global, 83.8%→**84.0%**, tamaño ya exacto 116/116):
  usaba un símbolo separado `lbl_8049CE78` (`GlobalTable`, struct local con solo `count`/`arr`) en
  vez de **`lbl_8049D6F8`** — el mismo `GlobalHandlePool` ya usado por `fn_80135D90`/`fn_80135BB0`/
  `fn_80135CC0`/`fn_80135E24` (layout compatible en los primeros 2 campos). Se consolidó: la
  declaración de `struct GlobalHandlePool`/`extern lbl_8049D6F8` se movió más arriba en el archivo
  (antes de su primer uso real, en `fn_80135EC4`) para evitar 2 declaraciones `extern "C"` del mismo
  símbolo con tipos distintos (error de compilación) — la definición original más abajo se dejó como
  comentario apuntando a la de arriba.
- **`fn_801361FC`** (26.8%→**31.9%**, tamaño de la función ya en la clase correcta): el original
  copia ambas tablas de ancho (`lbl_80339F60`/`lbl_8033A25C`, 0x2fc bytes cada una, confirmado por
  `symbols.txt`) a buffers de stack ANTES de indexar — una ronda anterior había decidido "omitir la
  copia por ser irrelevante al resultado observable" e indexar directo sobre la tabla global, lo cual
  es correcto en CONTENIDO pero le costaba la mitad del tamaño de la función en el diff. Reproducido
  con `memcpy(buf, tabla, 0x2fc)` — probado también con un loop manual `for` explícito
  (`buf[i]=tabla[i]`), que dio **peor** resultado (43.85% global vs 44.21% con memcpy) — revertido.
  El resto del gap (180 vs 256 bytes reales) es que el original compila el copy a un loop real
  `mtctr`/`bdnz` en vez de una llamada a `memcpy`, y no se encontró la forma de forzar ese idiom
  desde este C (no accionable con el tiempo disponible, documentado para no repetir el intento del
  loop manual).
- Nota (no perseguida): `fn_80136748` (ya resuelta en una sesión anterior, documentada en el estado
  agregado como 22.1%) ahora mide 13.3% — una función ya implementada cuyo score cambió sin que esta
  sesión tocara su código directamente (posible efecto colateral de cambios de layout/registros en
  otras partes del mismo archivo). No investigado a fondo por tiempo; señalado para revisar en la
  próxima ronda si se busca cerrar el archivo por completo.

Progreso acumulado de toda la sesión (Fase 6+7+8+9): **55/124 al 100%** (sin cambio neto), fuzzy
global **41.26% → 44.21%**. `build.sha1` sigue pasando. Total de funciones con cambio de contenido
verificado en la sesión completa: **23**.
