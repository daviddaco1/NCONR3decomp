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
