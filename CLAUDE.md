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
python configure.py progress   # progreso; la última línea "C code" es el % de C real
sha1sum -c config/RNEPDA/build.sha1   # verificación final (forzar relink: borrar build/RNEPDA/main.dol)
ninja build/RNEPDA/src/<split sin ext>.o   # compilar un solo objeto
python setup.py                # chequeo de prerrequisitos + integridad del dump + build de prueba
```

No hay tests ni linter: la verificación es `ninja` limpio + `build.sha1` + `report.json`
(`fuzzy_match_percent` por unidad/función; `python tools/list_unmatched.py <unidad>` lista lo que
falta). objdiff (app) abre la raíz del repo y lee `objdiff.json`. Dependencias manuales: Python 3 y
ninja; el resto (dtk, objdiff-cli, binutils, compiladores CodeWarrior) se descarga solo en `build/`.

## Arquitectura

- `config/RNEPDA/config.yml` apunta a `orig/RNEPDA/sys/main.dol`; `splits.txt` asigna rangos de
  direcciones a TUs (el **orden de los bloques es el orden de enlace**) y `symbols.txt` nombra
  direcciones. Sintaxis en `docs/splits.md` / `docs/symbols.md`.
- `configure.py` define libs y objetos. Un objeto es un split; su fuente es `src/<split>` salvo
  `source=`/`src_dir=`. Tipos en uso:
  - `Object(NonMatching, "x.c", ...)` — C/C++ real (escrito, importado o mixto).
  - `AsmObject("x.cpp")` — fuente asm (generado por `tools/asm_to_cpp.py`, o `.s` de dtk con
    `source="x.s"`). Categoría de progreso `asm`.
  - Objetos sin fuente: dtk enlaza el `.o` original. Todo es `NonMatching`: hoy no se puede enlazar
    código propio porque los datos de cada TU no están splitteados.
  - C importado de otros proyectos: `src_dir="libs", source="..."` con `cflags_*` y `mw_version`.
- **Archivos mixtos**: C para las funciones que matchean + asm para el resto, separados por
  `// ---- Funciones aun sin C que matchee (asm generado) ----`, cada función asm marcada
  `// asm_to_cpp: <fn>`. `configure.py progress` descuenta esas funciones del "C code".
- `libs/`: código de terceros (CC0) — `xenoblade/` (`PowerPC_EABI_Support`, `RVL_SDK`, `nw4r`),
  `mkw/` (doldecomp/mkw: GameSpy) y `ss/` (zeldaret/ss: NW4R faltante). Ver `libs/README.md`.
  `include/` es del juego (`types.h`, `m2c_macros.h`).
- `build/` es 100% generado; `build/RNEPDA/asm/` tiene el asm de dtk por split (fuente de
  `asm_to_cpp.py` y m2c).

### Compilador y flags (verificados por matching)

| Zona | Compilador | Flags |
|---|---|---|
| Game code (mayoría) | Wii/1.0 | extra `-O4,s -schedule off -func_align 4`; con scheduler activo queda ~94% por orden de instrucciones |
| `tcg_text.cpp` | Wii/1.0 | base (`-O4,p`): los flags varían por TU, probar ambos |
| MSL_C / Runtime | Wii/1.0 | `cflags_mslc` / `cflags_mw_runtime` (`_eh` para `.cp` con excepciones) |
| TRK | Wii/1.0a | `cflags_trk` (incluye `-str reuse,pool`) |
| RVL SDK | Wii/1.0 | `cflags_sdk` |
| NW4R | GC/3.0a5.2 | `cflags_nw4r` (Xenoblade) / `cflags_ss_nw4r` (SS) |
| GameSpy | GC/3.0a5.2 | `cflags_mkw_spy` |

## Herramientas propias (`tools/`)

Se corren desde la raíz; cada una documenta su uso en el docstring. El resto de `tools/` es de
dtk-template (`project.py`, `download_tool.py`, etc.): no tocar salvo necesidad real.

- Splits: `tu_datarefs.py` (refs a datos por función → fronteras de TU), `mk_splits.py`
  (bloques con extab/extabindex calculados del DOL), `insert_splits.py` (inserta en orden de
  dirección), `align_ref.py` + `select_tus.py` (heredar TUs de proyectos de referencia por
  secuencia de tamaños), `rename_tu.py`, `find_sources.py`.
- Símbolos: `rename_symbols.py` (`--asm-only` no toca C), `pair_unnamed.py`.
- Asm/C: `asm_to_cpp.py` (asm dtk → asm inline mwcc), `try_import.py` (probar C importado por
  TU y compilador), `mix_asm.py` (arma mixtos), `gen_eye_stub.py`, `list_unmatched.py`.
- m2c (asm → C automático): `m2c_context.py` (firmas de todo el binario → `build/m2c_ctx.h` y
  `build/RNEPDA/include/m2c_protos.h`; regenerar antes de `m2c_pass.py`),
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

## Estado (actualizar al cerrar una etapa)

- **Código 100% matcheado** (3,299,164 bytes, 11,293 funciones) mezclando asm y C; **C real
  ≈10.9%**. Datos 0% (sin splits de datos).
- `.text` 100% splitteado. TUs `unk_<addr>` = fronteras sin nombre real (los huecos grandes, como
  `dwc/unk_8022813C.c`, pueden contener varios archivos). Funciones del juego siguen como `fn_*`.
- Siguiente: subir el C real (m2c + ajuste manual) y splits de datos por TU (habilitan enlazar y
  arreglan funciones casi idénticas por offsets de strings).

Historial ronda por ronda en [`docs/decompilation_log.md`](docs/decompilation_log.md);
actualizarlo al cerrar cada sesión.
