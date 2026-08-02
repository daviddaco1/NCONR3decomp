# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Qué es este proyecto

Descompilación por coincidencia ("matching decompilation") de **Naruto Shippuden: Clash of Ninja Revolution 3**
(Wii, GameID `RNEPDA`, región Europa/PAL, confirmado contra dump propio), con el objetivo final de portearlo a PC.
No existe ningún proyecto de descompilación previo para este juego (verificado en decomp.dev); el más
cercano es `doldecomp/gnt4` (GNT4, versión japonesa, *otro* juego de la serie) — sirve de referencia
puntual, no de base directa.

**Nunca commitear el ISO/dump del juego, archivos extraídos, `.dol`/`.rel`/`.map`, ni ningún asset.** El
`.gitignore` ya bloquea `orig/*/*` y los binarios — no lo debilites para "hacer que algo funcione".

## El método (por qué esto no es un simple parche de asm)

El objetivo es escribir código C/C++ que, compilado con el compilador **original** del juego (Metrowerks
CodeWarrior para GameCube/Wii), produzca un binario byte-idéntico (`main.dol`) al original. Una vez que una
función "matchea", ese código fuente ya es la implementación real de esa función y puede modificarse o
portarse. Esto es distinto de una reimplementación libre: hasta que algo matchea, se asume no-funcional o
solo aproximado.

## Comandos esenciales

```sh
python3 configure.py          # genera build.ninja + objdiff.json (idempotente, correr tras tocar configure.py/config.yml)
ninja                         # compila; en la primera corrida, decomp-toolkit analiza main.dol y
                               # auto-genera config/RNEPDA/symbols.txt y splits.txt
python3 configure.py progress # imprime % de progreso (code/data matcheado vs. total)
python3 configure.py --non-matching   # compila versiones equivalentes-pero-no-matching (para "modding"/porting real, no matching puro)
python3 configure.py --debug          # build con símbolos de debug
python3 configure.py --help           # ver todas las flags (--dtk, --compilers, --binutils, --wrapper, etc. para overridear rutas de herramientas descargadas)
```

No hay test suite ni linter de aplicación aquí — la única "verificación" es que `ninja` compile y que
`config/RNEPDA/build.sha1` matchee (`sha1sum -c config/RNEPDA/build.sha1` tras un build completo). El
progreso real se mide con **objdiff**, no con tests.

Dependencias manuales: solo **Python 3** y **ninja** (ya instalados en esta máquina). Todo lo demás
(decomp-toolkit, objdiff-cli, binutils PPC/gc-wii, wibo, sjiswrap, y los propios compiladores Metrowerks
CodeWarrior) se descargan automáticamente la primera vez que corre `configure.py`, vía
`tools/download_tool.py`. No instalar Wine ni CodeWarrior manualmente — el wrapper (`wibo` en macOS/Linux)
ya viene resuelto.

Para búsquedas de codegen por fuerza bruta (scheduler puro, sin pista de código): `tools/decomp-permuter/`
ya está clonado y parcheado para correr en Windows nativo (ver [`docs/decompilation_log.md`](docs/decompilation_log.md#decomp-permuter) para el comando exacto).

## Arquitectura del toolchain (decomp-toolkit / dtk-template)

Este NO es un proyecto de aplicación tradicional. El flujo real:

1. **`configure.py`** es a la vez el "generador de build" y el archivo de configuración de compilación
   (flags de C/asm, versión del linker, lista de objetos/libs). No hay `Makefile`/`CMakeLists.txt` — todo
   vive acá y en `tools/project.py` (que **no** debe tocarse salvo necesidad real; es compartido entre
   proyectos dtk-template).
2. **`config/RNEPDA/config.yml`** apunta al `main.dol` (dentro de `orig/RNEPDA/`, que puede ser la imagen
   de disco completa o los archivos ya extraídos — decomp-toolkit lee directo de dentro del ISO/RVZ/etc.
   vía su VFS), y referencia `symbols.txt` + `splits.txt`.
3. **`symbols.txt`** y **`splits.txt`** son generados automáticamente por decomp-toolkit en el primer
   `ninja` (analizando el DOL), y luego se editan a mano a medida que se identifican funciones/objetos.
   `splits.txt` decide qué rangos de dirección del DOL corresponden a qué archivo fuente (`.c`/`.cpp`/`.s`)
   — ver `docs/splits.md` y `docs/symbols.md` para la sintaxis exacta antes de tocarlos.
4. **`src/`** y **`include/`** son donde va el código C/C++ real, un archivo por cada split. Hasta que un
   split tiene su `.c` correspondiente, decomp-toolkit lo trata como asm puro (no matchea, pero no rompe
   el build).
5. **`build/`** es 100% generado (gitignored) — nunca editar nada ahí.
6. El juego **no usa módulos `.rel`** (confirmado: no hay ninguno en el dump extraído) — `modules:` se
   deja comentado en `config.yml`.
7. **objdiff** (app de escritorio) es la herramienta de trabajo diario: muestra diff de instrucciones
   asm entre el original y lo que compilamos, función por función. Se abre apuntando a la raíz del repo;
   lee `objdiff.json` (generado por `configure.py`) y rebuildea automáticamente al guardar un archivo.

## Estado actual

**Nota de migración (2026-07-31):** el proyecto corría sobre `RNEEDA` (USA) y se migró a
`RNEPDA` (Europa/PAL) — ver `docs/decompilation_log.md`. `symbols.txt`/`splits.txt` se
resetearon (las direcciones del DOL difieren entre regiones) y se regeneraron desde cero contra
el nuevo `main.dol`. **SDK/Runtime ya re-verificado contra RNEPDA** (mismo día, ver bitácora):
las 10 fuentes SDK se re-splittearon a las nuevas direcciones sin cambiar una línea de código,
misma tasa de matching que en RNEEDA. **`tcg_text.cpp` (game code) también re-verificado**: split
real ubicado en `0x80131324`-`0x80136B14` (shift constante `+0x75C` respecto de las direcciones
RNEEDA — confirmado con 124/124 funciones, 0 gaps), `fn_`/`dtor_` renombrados en masa. Progreso
igual que antes de migrar (53/124 al 100%, fuzzy global 24.96% antes de tocar nada nuevo).

- `config.linker_version`: confirmado con código fuente real (`global_destructor_chain.c` matchea 100%
  tanto con `GC/3.0a5.2` como `Wii/1.0` — mismo resultado, no alcanza para distinguir cuál es la versión
  real del juego; se usa `Wii/1.0`).
- El juego usa excepciones C++ reales (`extab`/`extabindex`); splits de
  `Runtime.PPCEABI.H/global_destructor_chain.c` y `__init_cpp_exceptions.cpp` configurados y linkeando
  limpio (formato `.ctors$10`/`.dtors$10`/`.dtors$15` agrupado en un solo objeto — ver gotcha abajo).
- SDK/Runtime: **48/49 funciones matcheadas 100%** contra RNEPDA (`PPCArch.c` completo —24 funciones,
  incluidas 3 renombradas por tamaño/emparejamiento (`PPCMthid0`/`PPCSync`/`PPCMfwpar`)—,
  `OS/OSFPRInit.c`, `OS/OSPSInit.c`, `OS/OSCache.c`, `OS/OSReset.c`, `__start.c`, `__ppc_eabi_init.c`,
  `exit.c`, `__mem.c` salvo `__fill_mem` en 97.8%). `__init_cpp_exceptions` y `__destroy_global_chain`
  también resueltos a nivel de contenido (100%), pero **no pueden marcarse `Matching=True`** sin
  romper `build.sha1` — bloqueo de linker Wii sin resolver en la comunidad (ver bitácora).
- Game code: `src/tcg_text.cpp` (RNEPDA: `0x80131324`-`0x80136B14`, 124 funciones, motor de
  texto — nombre de archivo probable, no confirmado al 100%). **53/124 al 100% fuzzy**, ~24 funciones
  más con contenido correcto verificado pero <100% (quirks de scheduler no accionables). **Las 4
  funciones grandes (>1800 bytes) ya tienen primera implementación best-effort** (ninguna al 100%,
  todas con bloques documentados inline donde la aritmética exacta no se verificó bit a bit):
  `fn_80131428` (3796 bytes, parser principal de tags, 25.3%), `fn_801335F4` (3272 bytes, motor de
  layout/word-wrap, 19.9%), `fn_80132348` (2116 bytes, variante del parser sin tabla extendida,
  26.7%), `fn_80134664` (1900 bytes, tick de animación/reveal de texto, 42.1%). También resuelto
  `fn_80136748` (344 bytes, arma un recurso de texto — nunca antes decompilada, 22.1%) y corregida
  su firma real de 3 parámetros, lo que subió `fn_801368A0`/`fn_801368B4` a 96.0% cada una.
  5 vtables con dirección RNEEDA heredada incorrecta corregidas (`CTextEntryBase`/`Char`/`Code` y
  2 más) — no cambia el fuzzy% (el diff normaliza el target de relocations) pero es corrección
  real. Con esto se completó el lote de "10 funciones más grandes" pedido al inicio de esta ronda
  de trabajo. **Ronda siguiente**: 5 funciones helper citadas por las gigantes que no tenían
  ningún C (`fn_8013654C` charmap 69.0%, `fn_80136120` lookup+assert 66.5%, `fn_801361FC` tabla de
  ancho 26.9%, `fn_80135D90` alloc de handle 50.5%, `fn_80135F38` "variádica" 22.2% — sin
  `stdarg.h` disponible en el toolchain, aproximada con args fijos en vez de `...` real). Fuzzy
  global de `tcg_text.cpp`: 24.96% → 40.78%. **Ronda siguiente** (intento de cierre total del
  archivo, 53→54/124 al 100%): `fn_80134DF4` cerrada (gotcha 4 —`-inline auto`— no aplicado ahí);
  4 direcciones RNEEDA sin migrar corregidas en zonas de datos, mismo bug de la Fase 1 pero esta
  vez fuera de `symbols.txt`/`splits.txt` (`fn_801368A0`/`fn_801368B4`/`fn_80136434`/
  `fn_801364A0`/`fn_80132F3C`/`fn_80134304`/`fn_80134EA0` mejoraron). Fuzzy global: 40.78% →
  41.07%. **Ronda siguiente**: cerrado el barrido sistemático de `lbl_XXXXXXXX` vs `symbols.txt`
  (gotcha 13) — 3 direcciones más corregidas (`fn_80132B8C`/`fn_80132D24`/`fn_8013330C`/
  `fn_80133410`/`fn_80136668`, agregando 3 entradas nuevas a `symbols.txt`), barrido completo contra
  las 61 funciones restantes sin más hallazgos de dirección (bug se considera cerrado por ahora).
  Hallazgo nuevo sin resolver: mwcc auto-unrollea loops de trip-count fijo chico (`fn_80136668`, 8
  iteraciones) sin flag/pragma conocido para desactivarlo por función — ver gotcha 15.
  `fn_80136308`/`fn_80135BB0` (sin C todavía) revisados contra el disasm target pero no
  implementados (lógica de decodificación de 16 bits no trivial, mejor no arriesgar un best-effort
  incorrecto). Fuzzy global sin cambio neto significativo (~41.07%, 54/124 al 100%). **Ronda
  siguiente**: técnica nueva confirmada en 2 funciones — invertir condición + swap de cuerpos
  `if`/`else` cuando el diff muestra contenido *distinto* en cada mitad (no solo el branch
  invertido), más castear comparaciones de `u32` a `(s32)` cuando el disasm usa `cmpw`/`ble`/`bge`
  en vez de `cmplw`/unsigned (ver gotcha 17). `fn_80134630` 39.2%→**100%**, `fn_80135688`
  62.4%→84.6%. Bug de tabla equivocada corregido en `fn_8013539C` (`lbl_804A0290`→`lbl_804A0AA8`,
  dos tablas de nombre parecido, fuzzy% no se movió pero la tabla real ahora es correcta). Fuzzy
  global: 41.07% → **41.26%**, 54→**55/124** al 100%. **Ronda siguiente** (lote de 12 funciones,
  pedido explícito de decompilar 20-50): 5 funciones nunca antes decompiladas resueltas con
  contenido real (`fn_80136308` 37.9%, `fn_80135BB0` 76.8%, `fn_80135CC0` 46.4%, `fn_80135E24` 55.0%,
  `fn_80136694` 51.4% — `fn_80135FCC`, variádica real sin `stdarg.h`, se dejó pendiente por el mismo
  bloqueo ya conocido de `fn_80135F38`); 2 bugs de tabla equivocada más corregidos (`fn_80136434`/
  `fn_801364A0` usaban `lbl_803A4830+0x248`, heredado de una ronda anterior — el disasm real resuelve
  contra `lbl_803A52F8`, símbolo distinto ya registrado, con offsets propios) y uno más
  (`fn_801364EC`: `lbl_803A5D38` sin entrada en `symbols.txt` → `lbl_803A65B8` real); mayor salto
  individual en `fn_80135B28` (17.5%→**86.25%**, gotcha de inlining nuevo: el compilador no solo
  inlineaba sino que además eliminaba la llamada por dead-code al ser un getter puro sin uso de su
  resultado — resuelto con `#pragma dont_inline`). ~10 funciones más investigadas y descartadas como
  no accionables (mismo contenido, puro reorden de scheduler). Fuzzy global: 41.26% → **43.82%**,
  55/124 al 100% sin cambio (ninguna de las 12 tocadas llegó a 100% exacto esta ronda). **Misma
  sesión, continuación**: `fn_80135810` (la 6ª función 0% que había quedado pendiente por error) resuelta
  0%→53.98% (requirió partir `pad_40` de `TcgTextEntryData` en campos reales). Gotcha nuevo importante:
  poner `#pragma dont_inline` en un call site puede romper el matching de OTRO call site del mismo
  callee (`fn_801358B0` cayó de 100%→3.6% de forma colateral — mwcc cambia el cuerpo compilado del
  callee, no solo si se inlinea, cuando gana un segundo call site "real"; fix fue evitar la asignación
  de struct completo `*(S8*)dst=*(S8*)src` que generaba una llamada al operador sintetizado, reemplazada
  por asignación campo-a-campo). Revisar SIEMPRE el conteo total de funciones al 100% tras cualquier
  cambio de inlining, no solo la función tocada. Fuzzy global final: **44.20%**, 55/124 al 100% (sin
  cambio neto). Total de funciones con cambio de contenido verificado en la sesión completa: **16**.
  Techo real de esta metodología (función-por-función a mano, sin decomp-permuter): ~15-20 por sesión,
  no 20-50. **Tercera continuación**: auditoría sistemática de `lbl_804A0290` (usada en varias de las
  "4 funciones grandes") contra el nombre real de cada relocation en el disasm target — resultó ser
  la técnica de mayor ROI de la sesión. Bug de tabla equivocada (misma familia que `fn_8013539C`)
  confirmado y corregido en **3 funciones más**: `fn_80132F3C` (55.6%→58.8%), `fn_80134304`
  (57.8%→58.8%), `fn_80134EA0` (45.8%→44.5%, el score bajó pese a la corrección — mismo caso ya
  documentado, se mantiene el fix por ser la tabla real). Bug análogo con OTRO par de símbolos
  (`lbl_8049CE70/74` vs `lbl_8049D6F0/D6F4`, dos pares reales confundidos) corregido en
  `fn_80132B8C`/`fn_80132D24`. Intento de replicar el patrón "doble `if` redundante" en
  `fn_80133250` revertido (empeoró tamaño y score — mwcc no CSE'a el `cmpwi` a través de la llamada
  `bctrl` intermedia como sí lo hace en otras funciones, no reproducible con reordenamiento simple
  de sentencias). Fuzzy global: **44.14%**, 55/124 al 100% (sin cambio neto). **Cuarta continuación**: mismo bug de
  símbolo confundido esta vez entre 2 símbolos reales (`lbl_8049CE78` vs `lbl_8049D6F8`, el pool
  global ya usado por otras 4 funciones) corregido en `fn_80135EC4` (83.8%→84.0%, tamaño ya exacto).
  `fn_801361FC` (26.8%→**31.9%**): se reprodujo con `memcpy` la copia a stack de las 2 tablas de
  ancho que una ronda anterior había omitido por "irrelevante al resultado" — cierto para el
  contenido, pero costaba tamaño en el diff. Un loop manual explícito dio peor resultado que
  `memcpy` (revertido) — el resto del gap es que el original usa un loop real `mtctr`/`bdnz` para la
  copia, no reproducible identificado. Fuzzy global final: **44.21%**, 55/124 al 100% (sin cambio
  neto). Total de funciones con cambio de contenido verificado en la sesión completa: **23**.

Historial completo, ronda por ronda (qué se probó, resultados exactos, hallazgos de estructuras) en
[`docs/decompilation_log.md`](docs/decompilation_log.md). Actualizar ese archivo al cerrar una sesión de
trabajo; actualizar esta sección solo cuando cambie el estado agregado (nuevo split, milestone de
progreso, bloqueo nuevo/resuelto).

## Lecciones técnicas reutilizables

Gotchas confirmados por REPORT/build.sha1, aplicables a cualquier función/objeto nuevo — revisar antes
de perseguir un mismatch a mano:

1. **`splits.txt` + extabindex**: si el `.text` de un split nuevo termina justo en el límite de una
   función con extabindex propio, esa función queda huérfana (`Bad extabindex relocation`). Extender el
   `end:` para incluirla.
2. **Símbolos C++ mangled**: compilar como `.cpp` mangla nombres — sin envolver en
   `extern "C" { ... }`, `symbols.txt` no encuentra el símbolo y REPORT deja de reportar
   `fuzzy_match_percent` para TODO el objeto (no solo la función afectada), sin error visible. Si un
   objeto entero desaparece de REPORT sin razón, revisar `nm` del `.o`.
3. **Punteros externos (vtables, `_eti_init_info`, etc.)**: declarar como `void*` los vuelve elegibles
   para direccionamiento small-data (`R_PPC_EMB_SDA21`, 1 instrucción) cuando el original usa
   `lis`+`addi` (2 instrucciones, `R_PPC_ADDR16_HA`/`_LO`). Fix: declarar como array incompleto
   (`extern "C" u32 lbl_XXXXXXXX[];`).
4. **Inlining no deseado**: con `-inline auto` global, mwcc inlinea cualquier llamada a una función
   definida en la misma unidad de traducción, incluso trivial — el original casi siempre las deja como
   `bl` real. Envolver el bloque que llama en `#pragma dont_inline on` / `#pragma dont_inline reset`.
5. **Parámetros `s16`**: no generan `extsh` de forma confiable. Probar declarar como `s32` + cast
   explícito `(s16)` en el punto de uso — pero no es regla universal (al menos un caso empeoró con este
   fix). Probar ambas formas, quedarse con la que REPORT confirme mejor.
6. **Quirks de scheduler/regalloc NO accionables desde el C fuente** (no perder tiempo intentando
   forzarlos con reordenamiento de statements, variables intermedias, etc. — confirmado por bisección
   repetida): reordenamiento de instrucciones alrededor de `bl`/`b`; peephole que funde "branch a `blr`
   suelto" en `bnelr`/`beqlr`; forma `psq_l` directo vs `li+psq_lx` en epílogos con floats "quantized";
   elección de registro base de `_savegpr_NN`/`_restgpr_NN`; `clrlwi.` fusionado vs `cmpwi` separado;
   idiom de normalización booleana (`subic/subfe` vs `neg/or/srwi`) sin relación al tipo de retorno
   declarado. Documentar inline en el `.cpp`/`.c` y seguir con otra función.
7. **REPORT cachea resultados**: `report.json` puede no reflejar el `.c` actual. Verificar contra el
   `.o` real en `build/RNEPDA/src/...` o correr `ninja` limpio antes de confiar en un
   `fuzzy_match_percent`.
8. **Literales embebidos (números de línea de `__FILE__`, tamaños de tabla) varían por revisión de SDK**
   aunque el código sea idéntico a un proyecto de referencia (Petari/etc.) — verificar cada uno por
   REPORT, no asumir.
9. **Bloqueo conocido, no reintentar sin evidencia nueva**: `Matching=True` en objetos de runtime que
   comparten layout con `global_destructor_chain.c`/`__init_cpp_exceptions.cpp` rompe `build.sha1` por
   un quirk de `mwldeppc` específico de linkers Wii, documentado como sin resolver incluso en proyectos
   maduros de la comunidad (Petari, zeldaret/tp, y confirmado también en `doldecomp/brawl` — mismo
   linker `GC/3.0a5.2`, mismo síntoma). Detalle completo en la bitácora.
10. **Cadenas booleanas (`&&`/`||`) asignadas a variable generan temporales visibles** (`li 0`/`li 1`
    intermedios) que un `if` anidado equivalente no produce — si el diff muestra ese patrón y el C
    fuente usa `if` anidado, probar reescribir como asignación booleana directa (fuente:
    `doldecomp/sms`, `docs/AGENT_MATCHING_TIPS.md`).
11. **Destructor definido (aunque vacío) vuelve el tipo "non-trivial" para mwcc**, que lo fija a
    memoria en vez de promoverlo a registros — si una variable local no se registeriza y su tipo
    tiene destructor de usuario, ese es el motivo, no un problema de optimización (misma fuente).
12. **Profundidad de inlining con `-inline auto` depende de si el argumento es un default vs. un
    literal repetido en el call site** — complementa el gotcha 4; si aparece un inline no deseado que
    el `#pragma dont_inline` no explica, revisar esto antes de asumir que no es accionable (misma
    fuente).
13. **`extern "C" u8 lbl_XXXXXXXX[]` sin entrada correspondiente en `symbols.txt` no da error de
    link — resuelve silenciosamente a OTRO símbolo real ya registrado cerca**, indistinguible de un
    quirk de scheduler si no se mira el NOMBRE del símbolo en el diff de instrucciones (el `%` de
    match cae igual que con cualquier otro mismatch). Confirmado 3 veces en la migración RNEEDA→
    RNEPDA de zonas de datos (`lbl_803A491C`/`lbl_803A47B8`/`lbl_804A0290`/`lbl_803A4A78`, ver
    `docs/decompilation_log.md` Fase 3). Dos causas distintas, mismo síntoma: (a) dirección vieja
    de RNEEDA sin migrar — fix: usar el nombre correcto ya registrado en `symbols.txt` (confirmar
    shift comparando `.obj`/`.endobj` sobrevivientes en `build/RNEEDA/asm/*_bss.s` contra las
    entradas de `config/RNEPDA/symbols.txt`); (b) la dirección real cae **dentro** de un símbolo más
    grande ya registrado (offset dentro de un array/struct que decomp-toolkit no partió en sub-
    símbolos) — fix: declarar extern el símbolo CONTENEDOR y sumar el offset **en el punto de uso**
    (no pre-sumado a la base), para que mwcc lo pliegue en el desplazamiento inmediato del load
    igual que el original. Cualquier `lbl_` nuevo debe verificarse contra `symbols.txt` antes de
    asumir que compila correctamente solo porque no tira error.
14. **`ninja` a secas puede no detectar una edición de código fuente** en este entorno (Windows,
    resolución de mtime más gruesa que el chequeo de dependencias de ninja) — el build "parece"
    exitoso pero compila el `.o` viejo, llevando a falsos "este fix no sirvió". Usar siempre
    `touch src/<archivo> && ninja` después de cualquier edición, nunca `ninja` solo, antes de leer
    `report.json` o correr un diff. Además, `build/tools/objdiff-cli.exe diff` en modo one-shot
    mostró más de una vez una instantánea vieja pese a apuntar a un `.o` ya recompilado y verificado
    correcto por `objdump` directo (causa no identificada) — en casos dudosos, no confiar en el diff
    de instrucciones de `objdiff-cli` solo; cruzar contra `report.json` fresco y, si persiste la
    duda, contra `powerpc-eabi-objdump -dr` directo sobre los `.o` de `build/RNEPDA/src/` (nuestro)
    y `build/RNEPDA/obj/` (target), o en el caso extremo contra bytes crudos de
    `orig/RNEPDA/sys/main.dol` (mapear dirección virtual→offset de archivo con `dtk.exe dol info`,
    luego `objdump -b binary -EB -m powerpc:750`).
15. **Registrar un símbolo nuevo en `symbols.txt` que se solape con uno existente es un error duro
    de link** (`Symbol X overlaps with symbol Y`), no una ambigüedad silenciosa — a diferencia de un
    extern SIN entrada (gotcha 13), que sí resuelve mal en silencio. Si el símbolo real cae dentro
    del tamaño declarado de otro ya registrado, hay que **reducir el `size:` del contenedor** para
    dejarle hueco antes de agregar la entrada nueva (confirmado con `lbl_8049CE6C` 0x5→0x4 para
    poder registrar `lbl_8049CE70`).
16. **mwcc con `-O4,p` auto-unrollea loops de trip-count fijo chico** (confirmado con un `for`/
    `do-while` de 8 iteraciones, `fn_80136668`) incluso cuando el original usa un loop real
    (`mtctr`/`bdnz`) — probado sin éxito `#pragma unroll off`/`reset` (compila, pero no cambia el
    unroll observado). No se encontró la forma de desactivarlo con los flags de este proyecto; si
    aparece de nuevo, no perder tiempo repitiendo `#pragma unroll` — probar en cambio si el trip
    count puede dejar de ser una constante literal para el compilador (variable/no-inline), o
    aceptarlo como no accionable con el flag set actual.
17. **Invertir la condición de un `if`/`else` y swapear los cuerpos SÍ puede cambiar qué bloque
    queda primero en el binario** — pero solo quando el diff muestra contenido REALMENTE DISTINTO
    en cada mitad del branch (no solo el opcode invertido, `beq`/`bne`/`blt`/`bge`). Si el diff
    muestra el mismo contenido en ambas mitades y solo el branch cambia de opcode/target, es el otro
    caso (polaridad de branch que mwcc normaliza igual sea cual sea la condición escrita — no
    accionable, visto en constructores de vtable y en `fn_8013539C`) y el swap NO sirve. Confirmado
    que sí sirve en `fn_80134630`/`fn_80135688` (ver `docs/decompilation_log.md` Fase 5).
    Complementario: si el diff muestra `cmpw`/`ble`/`bge` (signed) en el target donde nosotros
    generamos `cmplw`/unsigned para un campo declarado `u32`, castear la comparación a `(s32)` — el
    campo puede ser `u32` en el struct pero compararse con signo en el original.

## Documentación de referencia (ya incluida en `docs/`)

Antes de tocar `symbols.txt`, `splits.txt` o los flags de `configure.py`, leer el doc correspondiente —
la sintaxis es específica de decomp-toolkit y los errores ahí son difíciles de diagnosticar a ciegas:

- `docs/getting_started.md` — flujo completo paso a paso, incluida la config de excepciones C++.
- `docs/symbols.md` / `docs/splits.md` — sintaxis exacta de esos archivos.
- `docs/common_bss.md`, `docs/comment_section.md` — casos especiales de linkers Metrowerks.
- `docs/dependencies.md` — dependencias por sistema operativo.
- `docs/github_actions.md` — CI (workflow de ejemplo en `.github.example/`, no activado todavía).
- `docs/decompilation_log.md` — bitácora detallada, ronda por ronda, de todo el trabajo de matching.

## Convenciones de idioma

El README tiene versión en español (`README.md`) e inglés (`README.en.md`). Este `CLAUDE.md` y la
bitácora (`docs/decompilation_log.md`) están en español porque así es como el usuario del proyecto
trabaja. La documentación en `docs/` restante es la oficial de dtk-template (en inglés) y no debe
traducirse — es referencia técnica externa, no contenido propio del proyecto.
