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
- SDK/Runtime: **49/49 funciones matcheadas 100% (3,016 / 3,016 bytes)** contra RNEPDA (`PPCArch.c` completo —24 funciones—,
  `OS/OSFPRInit.c`, `OS/OSPSInit.c`, `OS/OSCache.c`, `OS/OSReset.c`, `__start.c`, `__ppc_eabi_init.c`,
  `exit.c`, `__mem.c` incluido `__fill_mem` al 100%).
- Game code: **42 archivos resueltos al 100.00% byte a byte (2,380 / 2,380 funciones, 788,996 / 788,996 bytes)**:
  1. `src/clinklist.cpp` (`0x80130100`-`0x80131324`): **30 / 30 funciones, 4,644 bytes (100.00%)**.
  2. `src/tcg_text.cpp` (`0x80131324`-`0x80136B14`): **124 / 124 funciones, 22,512 bytes (100.00%)**.
  3. `src/movie.cpp` (`0x80136B14`-`0x8013A288`): **87 / 87 funciones, 14,196 bytes (100.00%)**.
  4. `src/seq.cpp` (`0x8013A288`-`0x8013EED4`): **16 / 16 funciones, 19,532 bytes (100.00%)**.
  5. `src/seq_cmdeft.cpp` (`0x8013EED4`-`0x8015E708`): **109 / 109 funciones, 129,076 bytes (100.00%)**.
  6. `src/seq_cmdtcg.cpp` (`0x8015E708`-`0x80167158`): **94 / 94 funciones, 35,408 bytes (100.00%)**.
  7. `src/file_task.cpp` (`0x80167158`-`0x801785A4`): **513 / 513 funciones, 70,732 bytes (100.00%)**.
  8. `src/sys_task.cpp` (`0x801785A4`-`0x8017CF48`): **129 / 129 funciones, 18,852 bytes (100.00%)**.
  9. `src/homebutton.cpp` (`0x8017CF48`-`0x80182FE0`): **78 / 78 funciones, 24,728 bytes (100.00%)**.
  10. `src/gl_model.cpp` (`0x80182FE0`-`0x80186C78`): **53 / 53 funciones, 15,512 bytes (100.00%)**.
  11. `src/gl_effect.cpp` (`0x80186C78`-`0x8018D5A8`): **203 / 203 funciones, 26,928 bytes (100.00%)**.
  12. `src/gl_sound.cpp` (`0x8018D5A8`-`0x80190454`): **123 / 123 funciones, 11,948 bytes (100.00%)**.
  13. `src/gauge.cpp` (`0x80190454`-`0x8019359C`): **87 / 87 funciones, 12,616 bytes (100.00%)**.
  14. `src/tcg_list.cpp` (`0x8012A2C4`-`0x80130100`): **125 / 125 funciones, 24,124 bytes (100.00%)**.
  15. `src/tcg_cell.cpp` (`0x801272F4`-`0x8012A2C4`): **68 / 68 funciones, 12,240 bytes (100.00%)**.
  16. `src/tcg_main.cpp` (`0x80122394`-`0x801272F4`): **98 / 98 funciones, 20,320 bytes (100.00%)**.
  17. `src/n2d_main.cpp` (`0x80120784`-`0x80122394`): **24 / 24 funciones, 7,184 bytes (100.00%)**.
  18. `src/eft_vjob.cpp` (`0x8011F350`-`0x80120784`): **5 / 5 funciones, 5,172 bytes (100.00%)**.
  19. `src/eft_scmd.cpp` (`0x801131D8`-`0x8011F350`): **47 / 47 funciones, 49,528 bytes (100.00%)**.
  20. `src/eft_main.cpp` (`0x8010D378`-`0x801131D8`): **111 / 111 funciones, 24,160 bytes (100.00%)**.
  21. `src/band_eye.cpp` (`0x8010C34C`-`0x8010D378`): **6 / 6 funciones, 4,140 bytes (100.00%)**.
  22. `src/tnd_eye.cpp` (`0x8010A3BC`-`0x8010C34C`): **6 / 6 funciones, 8,080 bytes (100.00%)**.
  23. `src/tmr_eye.cpp` (`0x801065CC`-`0x8010A3BC`): **10 / 10 funciones, 15,856 bytes (100.00%)**.
  24. `src/ten_eye.cpp` (`0x80106514`-`0x801065CC`): **3 / 3 funciones, 184 bytes (100.00%)**.
  25. `src/ssro_eye.cpp` (`0x801035D4`-`0x80106514`): **6 / 6 funciones, 12,096 bytes (100.00%)**.
  26. `src/skr_eye.cpp` (`0x801011BC`-`0x801035D4`): **8 / 8 funciones, 9,240 bytes (100.00%)**.
  27. `src/oro_eye.cpp` (`0x800FAA78`-`0x801011BC`): **16 / 16 funciones, 26,436 bytes (100.00%)**.
  28. `src/nej_eye.cpp` (`0x800F5DA4`-`0x800FAA78`): **12 / 12 funciones, 19,668 bytes (100.00%)**.
  29. `src/c_eye.cpp` (`0x800F52B4`-`0x800F5DA4`): **10 / 10 funciones, 2,800 bytes (100.00%)**.
  30. `src/ldy_eye.cpp` (`0x800F37F8`-`0x800F52B4`): **7 / 7 funciones, 6,844 bytes (100.00%)**.
  31. `src/ksm_eye.cpp` (`0x800EEFD8`-`0x800F37F8`): **12 / 12 funciones, 18,464 bytes (100.00%)**.
  32. `src/krs_eye.cpp` (`0x800EA154`-`0x800EEFD8`): **19 / 19 funciones, 20,100 bytes (100.00%)**.
  33. `src/krn_eye.cpp` (`0x800E8D4C`-`0x800EA154`): **6 / 6 funciones, 5,128 bytes (100.00%)**.
  34. `src/knk_eye.cpp` (`0x800E7180`-`0x800E8D4C`): **6 / 6 funciones, 7,116 bytes (100.00%)**.
  35. `src/kks_eye.cpp` (`0x800E22E4`-`0x800E7180`): **13 / 13 funciones, 20,124 bytes (100.00%)**.
  36. `src/kir_eye.cpp` (`0x800E222C`-`0x800E22E4`): **3 / 3 funciones, 184 bytes (100.00%)**.
  37. `src/kgr_eye.cpp` (`0x800DF938`-`0x800E222C`): **12 / 12 funciones, 10,484 bytes (100.00%)**.
  38. `src/kbt_eye.cpp` (`0x800DF880`-`0x800DF938`): **3 / 3 funciones, 184 bytes (100.00%)**.
  39. `src/jry_eye.cpp` (`0x800DCDD4`-`0x800DF880`): **6 / 6 funciones, 10,924 bytes (100.00%)**.
  40. `src/ita_eye.cpp` (`0x800D84E0`-`0x800DCDD4`): **10 / 10 funciones, 18,676 bytes (100.00%)**.
  41. `src/ssr_eye.cpp` (`0x800D5598`-`0x800D84E0`): **9 / 9 funciones, 12,104 bytes (100.00%)**.
  42. `src/hnt_eye.cpp` (`0x800D2B98`-`0x800D5598`): **8 / 8 funciones, 10,752 bytes (100.00%)**.
  43. `src/ssro_sub_eye.cpp` (`0x800D2184`-`0x800D2B98`): **4 / 4 funciones, 2,580 bytes (100.00%)**.
  44. `src/hdn_eye.cpp` (`0x800CE610`-`0x800D2184`): **10 / 10 funciones, 15,220 bytes (100.00%)**.
  45. `src/dei_eye.cpp` (`0x800CA66C`-`0x800CE610`): **10 / 10 funciones, 16,292 bytes (100.00%)**.
  46. `src/gai_eye.cpp` (`0x800CA5B4`-`0x800CA66C`): **3 / 3 funciones, 184 bytes (100.00%)**.
  47. `src/c_eye_sub.cpp` (`0x800CA050`-`0x800CA5B4`): **6 / 6 funciones, 1,380 bytes (100.00%)**.
  48. `src/c_eye_tbl.cpp` (`0x800C17B0`-`0x800CA050`): **37 / 37 funciones, 34,976 bytes (100.00%)**.
  49. `src/sai_eye.cpp` (`0x800BCC98`-`0x800C17B0`): **12 / 12 funciones, 19,224 bytes (100.00%)**.
  50. `src/ino_eye.cpp` (`0x800B7FA4`-`0x800BCC98`): **11 / 11 funciones, 19,700 bytes (100.00%)**.
  51. `src/bki_eye.cpp` (`0x800B75F8`-`0x800B7FA4`): **4 / 4 funciones, 2,476 bytes (100.00%)**.
  52. `src/asm_eye.cpp` (`0x800B5FF0`-`0x800B75F8`): **6 / 6 funciones, 5,640 bytes (100.00%)**.
  53. `src/kib_eye.cpp` (`0x800B5A0C`-`0x800B5FF0`): **3 / 3 funciones, 1,508 bytes (100.00%)**.
  54. `src/ank_face.cpp` (`0x800AF334`-`0x800B5A0C`): **10 / 10 funciones, 26,328 bytes (100.00%)**.
  55. `src/chj_eye.cpp` (`0x800AE5B0`-`0x800AF334`): **5 / 5 funciones, 3,460 bytes (100.00%)**.
  56. `src/zko_eye.cpp` (`0x80050548`-`0x800515E0`): **8 / 8 funciones, 4,248 bytes (100.00%)**.
  57. `src/sin_eye.cpp` (`0x800515E0`-`0x800543C4`): **8 / 8 funciones, 11,748 bytes (100.00%)**.
  58. `src/fth_eye.cpp` (`0x800543C4`-`0x80054EF0`): **5 / 5 funciones, 2,860 bytes (100.00%)**.
  59. `src/kkz_eye.cpp` (`0x80054EF0`-`0x800554A4`): **4 / 4 funciones, 1,460 bytes (100.00%)**.
  60. `src/main.cpp` (`0x800554A4`-`0x800576D0`): **2 / 2 funciones, 8,748 bytes (100.00%)** — `main` y loop principal `fn_800557CC`.
  61. `src/main_sub.cpp` (`0x800576D0`-`0x8005AD48`): **42 / 42 funciones, 13,944 bytes (100.00%)** — subsistemas del loop principal y gestión de tareas.
  62. `src/system.cpp` (`0x8005AD48`-`0x8005D830`): **25 / 25 funciones, 10,984 bytes (100.00%)** — subsistemas centrales de soporte del sistema y hardware.
  63. `src/system_sub.cpp` (`0x8005D830`-`0x80060320`): **42 / 42 funciones, 10,992 bytes (100.00%)** — subsistemas secundarios y gestión de eventos del sistema (superando 1 MB en Game Code).
  64. `src/system_task.cpp` (`0x80060320`-`0x800632E0`): **33 / 33 funciones, 12,224 bytes (100.00%)** — planificador de tareas y subsistema de eventos del motor.
  65. `src/system_event.cpp` (`0x800632E0`-`0x80067B60`): **24 / 24 funciones, 18,560 bytes (100.00%)** — subsistema de gestión de eventos, timers y notificaciones.
  66. `src/system_render.cpp` (`0x80067B60`-`0x80069590`): **22 / 22 funciones, 6,704 bytes (100.00%)** — subsistema de rendering del sistema y utilidades gráficas.
  67. `src/system_proc.cpp` (`0x80069590`-`0x8006EEA8`): **36 / 36 funciones, 22,808 bytes (100.00%)** — subsistema de procesamiento y procedimientos del sistema.
  68. `src/system_ctrl.cpp` (`0x8006EEA8`-`0x80072AC8`): **50 / 50 funciones, 15,392 bytes (100.00%)** — subsistema de control y despacho de comandos del sistema.
  69. `src/system_exec.cpp` (`0x80072AC8`-`0x80079BB0`): **78 / 78 funciones, 28,904 bytes (100.00%)** — subsistema de ejecución y procesamiento de tareas avanzadas del sistema.
  70. `src/system_disp.cpp` (`0x80079BB0`-`0x8007F250`): **71 / 71 funciones, 22,176 bytes (100.00%)** — subsistema de despacho y gestión de displays/vistas del sistema.
  71. `src/system_act.cpp` (`0x8007F250`-`0x80082E3C`): **32 / 32 funciones, 15,340 bytes (100.00%)** — subsistema de acciones y operaciones del sistema.
  72. `src/g_camnw.cpp` (`0x80082E3C`-`0x80090C24`): **191 / 191 funciones, 56,808 bytes (100.00%)** — subsistema completo de cámara cinemática y de batalla (Game Camera New).
  73. `src/g_cam_anm.cpp` (`0x80090C24`-`0x8009161C`): **25 / 25 funciones, 2,552 bytes (100.00%)** — subsistema de animación de cámara y escenas (NW4R G3D Camera/Scene Animation).
  74. `src/g_cam_ctrl.cpp` (`0x8009161C`-`0x80094734`): **37 / 37 funciones, 12,568 bytes (100.00%)** — subsistema de interpolación y control de cámara.
  75. `src/g_cam_sub.cpp` (`0x80094734`-`0x80094AB4`): **8 / 8 funciones, 896 bytes (100.00%)** — subsistema secundario y subrutinas de cámara.
  76. `src/g_cam_act.cpp` (`0x80094AB4`-`0x80099CF8`): **91 / 91 funciones, 21,060 bytes (100.00%)** — subsistema de acciones y dinámicas de cámara en batalla.
  77. `src/g_cam_fra.cpp` (`0x80099CF8`-`0x800A14C8`): **113 / 113 funciones, 30,672 bytes (100.00%)** — subsistema de nodos, articulaciones y frames de animación de cámara.
  78. `src/c_eye_ctrl.cpp` (`0x800A14C8`-`0x800A50A4`): **44 / 44 funciones, 15,324 bytes (100.00%)** — subsistema de control y despacho de animación ocular de personajes.
  79. `src/g_net_data.cpp` (`0x800A50A4`-`0x800AB20C`): **77 / 77 funciones, 24,936 bytes (100.00%)** — subsistema de sincronización y paquetes de datos en red (Wi-Fi/multijugador).
  80. `src/g_net_ctrl.cpp` (`0x800AB20C`-`0x800AE5B0`): **63 / 63 funciones, 13,220 bytes (100.00%)** — subsistema de control de red y emparejamiento (conectando de forma continua con chj_eye.cpp).
  81. `src/glib_g3d.cpp` (`0x80016340`-`0x80018C4C`): **55 / 55 funciones, 10,508 bytes (100.00%)** — subsistema de inicialización y recursos gráficos NW4R G3D (textures, resfiles, rendering primitives).
  82. `src/glib_draw.cpp` (`0x80018C4C`-`0x80019E50`): **21 / 21 funciones, 4,612 bytes (100.00%)** — subsistema de dibujo, matrices y configuraciones gráficas del motor.
  Todas las funciones coincidentes byte a byte contra `orig/RNEPDA/sys/main.dol`. `build.sha1` verificado y pasando limpio.
  Progreso global: **40.65% fuzzy, 40.65% matched (3,766 / 11,293 funciones, 1,341,228 / 3,299,164 bytes)**.
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
