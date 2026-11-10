# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Qué es

Descompilación por coincidencia (*matching decompilation*) de **Naruto Shippuden: Clash of Ninja
Revolution 3** (Wii, `RNEPDA`, Europa/PAL), con objetivo final de port a PC. Se escribe C/C++ que,
compilado con el compilador original (Metrowerks CodeWarrior), produce código byte-idéntico al
`main.dol`. No hay `.rel`: todo está en el DOL. Proyecto basado en
[dtk-template](https://github.com/encounter/dtk-template) (decomp-toolkit + objdiff).

**Nunca commitear** ISO/dump, archivos extraídos, `.dol`/`.rel`/`.map` ni assets. `.gitignore`
bloquea `orig/*/*`, `build/` y binarios: no debilitarlo.

El usuario trabaja en español: commits, `CLAUDE.md` y `docs/decompilation_log.md` van en
español. Los demás `docs/*.md` son la documentación oficial de dtk-template (inglés): no
traducir.

## Comandos

```sh
python configure.py            # genera build.ninja + objdiff.json (correr tras tocar configure.py,
                               # splits.txt, symbols.txt o crear/borrar fuentes)
ninja                          # compila todo y regenera build/RNEPDA/report.json
python configure.py progress   # progreso; matched/fuzzy ya excluyen el asm (= % de C real)
sha1sum -c config/RNEPDA/build.sha1   # verificación final (forzar relink: borrar build/RNEPDA/main.dol)
ninja build/RNEPDA/src/<split sin ext>.o   # compilar un solo objeto
python setup.py                # chequeo de prerrequisitos + integridad del dump + build de prueba
python tools/check_workspace.py [--clean]   # coherencia configure/objdiff/build/report (ver abajo)
```

No hay tests ni linter: la verificación es `ninja` limpio + `build.sha1` + `report.json`
(`fuzzy_match_percent` por unidad/función; `python tools/list_unmatched.py <unidad>` lista lo que
falta). objdiff (app) abre la raíz del repo y lee `objdiff.json`. Dependencias manuales: Python 3 y
ninja; el resto (dtk, objdiff-cli, binutils, compiladores CodeWarrior) se descarga solo en `build/`.

### Verificación (antes de commitear o cerrar una sesión)

1. `python configure.py && ninja` sin errores (si falla, `report.json` queda viejo).
2. `rm build/RNEPDA/main.dol && ninja` y `sha1sum -c config/RNEPDA/build.sha1` → `OK`.
3. `python tools/check_workspace.py` → `0 problemas`. Detecta fuentes inexistentes, fuente con
   nombre base distinto al split, `.o` huérfanos y unidades asm < 100%: todo eso un build
   incremental lo oculta (el `.o` viejo sigue en disco y el reporte lo lee).
4. `python configure.py progress`: comparar con la cifra anterior. Si baja sin haber tocado C,
   buscar la causa por unidad comparando contra una copia previa de `report.json`.
5. Para una verificación desde cero sin volver a bajar herramientas: borrar
   `build/RNEPDA/src/` (no `build/` entero) y correr `ninja`.

Dos métricas distintas: **matching crudo** (`report.json` → `measures.matched_code_percent`,
C + asm) y **C real** (`configure.py progress`, sin asm). El objetivo es C real.

## Arquitectura

- `config/RNEPDA/config.yml` apunta a `orig/RNEPDA/sys/main.dol`; `splits.txt` asigna rangos de
  direcciones a TUs (el **orden de los bloques es el orden de enlace**) y `symbols.txt` nombra
  direcciones. Sintaxis en `docs/splits.md` / `docs/symbols.md`.
- `configure.py` define libs y objetos. Un objeto es un split; su fuente es `src/<split>` salvo
  `source=`/`src_dir=`. Tipos en uso:
  - `Object(NonMatching, "x.c", ...)` — C/C++ real (escrito, importado o mixto).
  - `AsmObject("x.cpp")` — fuente asm (generado por `tools/asm_to_cpp.py`, o `.s` de dtk con
    `source="x.s"`). Categorías de progreso `[<cat de su lib>, "asm"]` (post-proceso tras
    `config.libs`); `asm` es solo marca, no se imprime.
  - Objetos sin fuente: dtk enlaza el `.o` original. Todo es `NonMatching`: hoy no se puede enlazar
    código propio porque los datos de cada TU no están splitteados.
  - C importado de otros proyectos: `src_dir="libs", source="..."` con `cflags_*` y `mw_version`.
- **Archivos mixtos**: C para las funciones que matchean + asm para el resto, separados por
  `// ---- Funciones aun sin C que matchee (asm generado) ----`, cada función asm marcada
  `// asm_to_cpp: <fn>`.
- **Progreso**: `report.json` (objdiff) cuenta el asm como matched. `configure.py progress`
  registra `strip_asm` en `config.progress_report_hook` (en `configure.py`; el hook lo agrega
  `tools/project.py`): resta de matched/fuzzy las unidades `asm` y las funciones marcadas
  `// asm_to_cpp: <fn>` en el fuente, y lo muestra aparte como `% asm` y línea `Asm:`. Así
  matched = C real. **Toda función asm generada dentro de un `Object` (no `AsmObject`) debe llevar
  esa marca**, si no cuenta como C. El asm original de Nintendo/Metrowerks (Runtime, TRK, OSCache,
  PPCArch, mtx) no se marca: en el fuente real ya era asm. `tools/progress_svg.py` lee
  `report.json` crudo (genera `docs/progress.svg` del README).
- `libs/`: código de terceros (CC0), no editar — `xenoblade/` (`PowerPC_EABI_Support`, `RVL_SDK`,
  `nw4r`), `mkw/` (doldecomp/mkw: GameSpy), `ss/` (zeldaret/ss: NW4R faltante) y `forecast/`
  (doldecomp/forecast, subset: NW4R `ef`/`g3d`/`snd`, BTE). Ver `libs/README.md`. Locales sin
  versionar (en `.git/info/exclude`, solo referencia, la build no los usa): `libs/unispy/` (GameSpy
  open source) y `_forecast_full/` (clon completo de forecast). `include/` es del juego
  (`types.h`, `m2c_macros.h`, `m2c_protos.h`).
- `build/` es 100% generado; `build/RNEPDA/asm/` tiene el asm de dtk por split (fuente de
  `asm_to_cpp.py` y m2c). Las herramientas usan `build/m2c_ctx.h`, `build/m2c_data.h`,
  `build/triage.json` y los directorios `build/{fn_diff,hand,m2c,m2c_cpp}`.
- `scratch/` (ignorado): área de trabajo descartable. `scratch/fase1_archivo/` guarda lo que se
  sacó del repo en la auditoría de la fase 1 (scripts sueltos de `tools/`, `_ef_staging/`,
  archivos de la raíz, experimentos de `build/`).

### Compilador y flags (verificados por matching)

| Zona | Compilador | Flags |
|---|---|---|
| Game code (mayoría) | Wii/1.0 | **C++** (`-lang=c++`, también los `.c`) + `-O4,s -schedule off -func_align 4 -opt nopeephole`; con scheduler activo queda ~94% por orden de instrucciones; funciones sueltas necesitan `#pragma peephole on` |
| `tcg_text.c` | Wii/1.0 | base (`-O4,p`) + `-lang=c++`: los flags varían por TU, probar ambos |
| MSL_C / Runtime | Wii/1.0 | `cflags_mslc` / `cflags_mw_runtime` (`_eh` para `.cp` con excepciones) |
| TRK | Wii/1.0a | `cflags_trk` (incluye `-str reuse,pool`) |
| RVL SDK | Wii/1.0 | `cflags_sdk` |
| NW4R | GC/3.0a5.2 | `cflags_nw4r` (Xenoblade) / `cflags_ss_nw4r` (SS) |
| GameSpy | GC/3.0a5.2 | `cflags_mkw_spy` |

## Herramientas propias (`tools/`)

Se corren desde la raíz; cada una documenta su uso en el docstring. Solo las listadas acá (y las
versionadas en git) son herramientas; los scripts desechables (`check_*`, `apply_*`, `test_*`,
`.o` de prueba) van en `scratch/` (ignorado), no en `tools/` ni en la raíz. El resto de `tools/` es de
dtk-template (`project.py`, `download_tool.py`, etc.): no tocar salvo necesidad real (cambios
locales en `project.py`: `progress_report_hook` y columna asm en `print_category`).

- Splits: `tu_datarefs.py` (refs a datos por función → fronteras de TU), `mk_splits.py`
  (bloques con extab/extabindex calculados del DOL), `insert_splits.py` (inserta en orden de
  dirección), `align_ref.py` + `select_tus.py` (heredar TUs de proyectos de referencia por
  secuencia de tamaños), `rename_tu.py`, `find_sources.py`.
- Símbolos: `rename_symbols.py` (`--asm-only` no toca C), `pair_unnamed.py`. Renombrar en
  `symbols.txt` sin actualizar los fuentes asm deja esas funciones en 0% (gotcha 1): usar siempre
  `rename_symbols.py`, que actualiza ambos.
- Verificación: `check_workspace.py` (coherencia configure/objdiff/build/report; `--clean` borra
  `.o` huérfanos).
- Permutador C++: `m2c_permute.py` (mutaciones sobre el C de M2C_TX, `--triage`, `--apply` seguro).
- Contexto m2c: `m2c_ctx_fargs.py` (floats que m2c no ve en código paired-single, aridad exacta de
  hojas/thunks, retorno s32/f32; correr después de `m2c_context.py`).
- Importar C externo: `import_scan.py` (compila fuentes de otros decomps y empareja funciones con
  el asm **por contenido**, también las `fn_*`), `adopt_import.py` (renombra y adopta por TU con
  verificación y reversión; `--allow-loss`), `fix_mixed_decls.py` (repara mixtos tras renombrar).
- Asm/C: `asm_to_cpp.py` (asm dtk → asm inline mwcc), `try_import.py` (probar C importado por
  TU y compilador), `mix_asm.py` (arma mixtos), `gen_eye_stub.py`, `list_unmatched.py`.
- **Game code = C++** (incluso los `.c` del DOL: RTTI y llamadas virtuales lo prueban, ver fase
  105 de la bitácora). Nombres de archivo = `__FILE__` del DOL (`rename_lang.py`). Todo dentro de
  `extern "C" {}` (los `fn_*` no tienen nombre mangled conocido). `m2c_cpp.py <split>|--game`
  regenera TUs del juego en C++ desde el asm (prototipos completos, casts, aridad por llamadas) y
  deja asm lo que no matchea (conserva el C++ existente); `apply_template.py` propaga una función
  a sus gemelas en asm; `m2c_triage.py` agrupa casi-matches; `fn_diff.py <split> <fn> [c]` compara una función aislada contra el
  asm para ajustarla a mano. No escribir game code en C.
- m2c (asm → C automático): `m2c_context.py` (firmas de todo el binario + firmas reales de
  `libs/` → `build/m2c_ctx.h`, tipos de datos → `build/m2c_data.h`; `--protos` reescribe
  `include/m2c_protos.h`, que está versionado y lo usan los C de librerías ya commiteados),
  `m2c_pass.py "<flags separados por |>" <splits...>` (genera C, se queda con lo que matchea al
  100%, verifica con build completo y revierte lo que falle), `m2c_fix.py` (correcciones sobre la
  salida). m2c es GPL y **no se incluye**: clonar https://github.com/matt-kempster/m2c y exportar
  `M2C_DIR`. Los nombres de TU pasados por shell no deben llevar `\r`.
- `fpk_tool.py`: extractor de paquetes `.fpk` de Eighting. `tools/decomp-permuter/`: permuter
  parcheado para Windows (comando en la bitácora).

## Gotchas confirmados

1. **objdiff empareja funciones por nombre**: un C idéntico da 0% si el símbolo sigue como
   `fn_XXXX`. Los destinos de relocation no se comparan (modo por defecto); las relocations
   faltantes sí cuentan.
2. **mwcc nombra el `.o` por el nombre del fuente** (`-o <dir>`): el fuente debe tener el mismo
   nombre base que el split, o ninja usa un `.o` viejo sin avisar.
3. **Un `.o` viejo enmascara fallos**: borrarlo antes de verificar. En Windows `ninja` puede no
   ver una edición (usar `touch`). `report.json` queda viejo si la build falla.
4. El fuente tiene que existir al correr `configure.py` o no se genera su regla de compilación.
5. `splits.txt`: cortar un grupo de extab compartido da `Conflicting splits within reversed extab
   group` (sirve para validar fronteras); un `.text` que termina justo antes de una función con
   extabindex la deja huérfana.
6. `extern` de datos como array incompleto (`extern u8 lbl_X[];`) para obtener `lis/addi`. Un
   `lbl_X` ausente de `symbols.txt` resuelve en silencio a otro símbolo cercano; registrar uno que
   se solapa es error de link (achicar el `size:` del contenedor).
7. Compilar `.cpp` mangla nombres: sin `extern "C"`, `report` pierde la unidad entera.
8. asm inline de mwcc: no acepta `addic.` con `@l` ni `bl` a etiquetas de otra función (usar el
   `.s` de dtk con funciones `local` → `global`, o GNU as resuelve sin relocation); `HID2`
   ensambla como SPR 1011 (Gekko: 920); `sym+off` small-data se escribe sin `@sda21`.
9. `-inline auto` inlinea llamadas dentro de la TU: `#pragma dont_inline on/reset`.
10. Patrones de codegen: `beq A; b B` tras comparar un puntero = `x = x ? x : f()`; un `mr r5,r3`
    "muerto" tras una llamada = ese valor es el 3er argumento en otra rama; invertir `if/else`
    cambia el orden de bloques solo si el contenido de cada rama difiere.
11. `Matching=True` en objetos de runtime rompe `build.sha1` (quirk de `mwldeppc`, sin resolver).
12. **Cambiar un `AsmObject` por C de `libs/` que no matchea entero baja el matching crudo** (el
    DOL sigue dando OK porque `NonMatching` enlaza el `.o` original, así que `build.sha1` no lo
    detecta). Importar C solo como mixto (`mix_asm.py`): C para lo que matchea + asm para el resto.
    Con `src_dir="libs"`, el nombre base del fuente debe coincidir con el del split (gotcha 2); si
    no, renombrar el split con `rename_tu.py`.

13. El compilador del SDK varía por TU: probar `Wii/1.0`, `GC/3.0a5.2` y `GC/3.0a5` (dvd pasó de
    2.4 KB a 17.5 KB de C solo cambiando a `GC/3.0a5.2`). `import_scan.py` prueba varios.
14. Pasadas automáticas: `m2c_cpp.py` (fase 3) regenera de forma incremental (conserva structs,
    typedefs, pragmas de región, externs y C existente; acepta por TU solo sin regresión y con C
    nuevo; backup en `build/m2c_cpp_backup/`) y `m2c_pass.py` restaura byte a byte lo que toca
    (backup en `build/m2c_pass_backup/`). Aun así, comparar función por función (por
    `virtual_address`) contra el `report.json` previo después de cada pasada. No adoptar C en TUs
    con `source="x.s"` (gotcha 8). Escribir archivos restaurados en binario (CRLF).
15. Worktrees: copiar `build/{compilers,tools,binutils}`, nunca junction (ninja los re-descarga
    dentro y pisa los del checkout principal). `orig/RNEPDA` sí puede ser junction.

## Archivos que nunca se borran

`src/`, `include/`, `libs/`, `config/RNEPDA/` (`splits.txt`, `symbols.txt`, `build.sha1`,
`config.yml`), `configure.py`, `tools/` versionados (incluidos los cambios locales de
`project.py`), `docs/`, `orig/` (dump, nunca se commitea) y `build/compilers`, `build/tools` y
`build/binutils` (se vuelven a bajar, pero tardan). Un fuente asm (`AsmObject`) es parte del
matching aunque parezca generado: no borrarlo sin reemplazo que dé 100%.

## Limpieza de temporales

Lo descartable va en `scratch/` desde el principio. Para limpiar: `python tools/check_workspace.py
--clean` (`.o` huérfanos) y revisar `git status --ignored` fuera de `build/` y `orig/`. Mover a
`scratch/` en vez de borrar, salvo `.o`/`.s`/`.log` regenerables. Nunca `git clean -x` ni borrar
`build/` entero.

## Retomar una sesión interrumpida

1. `git status` y `git stash list`: hay trabajo sin commitear en fuentes nuevas que **no** están
   en git hasta que se agregan (`src/gamespy/...`, `src/nw4r/ef/...`).
2. `python configure.py && ninja && python tools/check_workspace.py`.
3. `python configure.py progress` y comparar con **Estado** y la última entrada de la bitácora.
4. Si una herramienta quedó a medias (`m2c_pass.py` revierte sola lo que falla; `mix_asm.py`
   no), verificar el último split tocado con `tools/list_unmatched.py <unidad>`.

## Estado (actualizar al cerrar una etapa)

- Fase 3 (2026-11-06), verificada: **C real 30.37%** (1,001,992 / 3,299,164 bytes; 6,240
  funciones). Game Code 16.42%, SDK 42.90%. Matching crudo 93.79%. `build.sha1` OK.
  Contexto de m2c: `tools/m2c_context.py` y luego `tools/m2c_ctx_fargs.py` (agrega firmas de las
  funciones que m2c no descompila y corrige aridad/floats/retorno).
- Game code: flags `-fp_contract off` (verificado: 0 fmadds en el juego). Pipeline:
  `python tools/m2c_context.py && python tools/m2c_ctx_fargs.py` y
  `M2C_TX=1 python tools/m2c_cpp.py --game` (incremental, idempotente, acepta por TU sin
  regresiones). Reglas de matching (structs por campo, tablas `.sdata2`, inline de llamadas y
  lecturas, pila alineada con locales en orden descendente, switch irregular, dont_inline) en la
  bitácora, entrada "variante M2C_TX".
- `build/tools/dtk.exe` es el v1.8.3 stock (sirve con `symbols.txt` completo); reconstruir el
  parcheado con `scratch/fase3/build_dtk_patched.sh` (requiere autorización).
- `.text` 100% splitteado. Funciones del juego siguen como `fn_*`. Datos 0% (sin splits de datos).
- Siguiente: errores de compilación de m2c restantes (aritmética de punteros, aridad contexto vs
  firma propia), diferencias de marco en funciones con bucles (eye), SDK (790 KB asm).

Historial ronda por ronda en [`docs/decompilation_log.md`](docs/decompilation_log.md);
actualizarlo al cerrar cada sesión.
