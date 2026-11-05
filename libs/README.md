# libs/

Código de terceros importado de otros proyectos de descompilación (todos CC0 1.0; cada carpeta
trae su `LICENSE`). Se compila con los flags de su proyecto de origen (`cflags_*` en
`configure.py`). Nada de esto es código del juego.

| Carpeta | Origen | Contenido |
|---|---|---|
| `xenoblade/` | [xbret/xenoblade](https://github.com/xbret/xenoblade) | `PowerPC_EABI_Support` (MSL_C, Runtime, MetroTRK), `RVL_SDK`, `nw4r`, `NdevExi2A` (fuentes y headers) e `include/` (su `types.h` y afines) |
| `mkw/` | [doldecomp/mkw](https://github.com/doldecomp/mkw) | GameSpy, piezas del RVL SDK y sus headers |
| `ss/` | [zeldaret/ss](https://github.com/zeldaret/ss) | Fuentes NW4R que Xenoblade no tiene y sus headers |
| `forecast/` | [doldecomp/forecast](https://github.com/doldecomp/forecast) @ `1283668` | Solo el subset que usa la build: fuentes NW4R (`ef`, `g3d`, `snd`), RVL SDK (VI, BTE…) y los headers que incluyen |

Las copias editadas para esta versión del juego (diferencias de versión, archivos mixtos C+asm)
viven en `src/`, no acá.
