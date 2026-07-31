# Naruto Shippuden: Clash of Ninja Revolution 3 (Decompilation)

[English version](README.en.md)

Descompilación por coincidencia (*matching decompilation*) de **Naruto Shippuden: Clash of
Ninja Revolution 3** (Wii), con el objetivo de portearlo a PC.

## Legal

Este repositorio no distribuye ni incluye ningún ISO, DOL, asset o archivo extraído del juego.
Todo el contenido bajo `orig/` está excluido vía `.gitignore` y nunca debe commitearse. Para
compilar hace falta una copia legítima del juego, provista por el usuario.

## Versión soportada

| Game ID | Región |
|---|---|
| `RNEPDA` | Europa/PAL |

## Por qué decompilation y no un parche sobre el binario

Un port real a PC (resolución libre, remapeo de controles, mods, rendimiento nativo) requiere
código C/C++ original recompilable, no un binario parcheado. El método usado acá es el estándar
de la comunidad de descompilación GC/Wii (Zelda: Wind Waker, Pikmin, Melee, Kirby's Return to
Dream Land): se escribe código C/C++ que, compilado con el compilador original del juego
(Metrowerks CodeWarrior), produce un binario byte-idéntico. Una función que matchea así queda
confirmada como la implementación real y puede modificarse o portarse con seguridad.

## Dependencias

- **Python 3**
- **[ninja](https://github.com/ninja-build/ninja)**

El resto del toolchain (decomp-toolkit, objdiff-cli, binutils PPC/gc-wii, wibo, y los propios
compiladores Metrowerks CodeWarrior) se descarga automáticamente en la primera corrida de
`configure.py`. Detalle por sistema operativo en [`docs/dependencies.md`](docs/dependencies.md).

## Uso

```sh
python3 configure.py          # genera build.ninja + objdiff.json
ninja                          # compila; primera corrida genera symbols.txt/splits.txt
python3 configure.py progress  # % de progreso (code/data matcheado vs. total)
```

Flags adicionales (`--non-matching`, `--debug`, overrides de rutas de herramientas) en
`python3 configure.py --help`.

No hay test suite: la verificación es que `ninja` compile y que
`config/RNEPDA/build.sha1` matchee. El progreso funcional se sigue con
[objdiff](https://github.com/encounter/objdiff), abriendo la raíz del repo como *project
directory* una vez generado `objdiff.json`.

## Estructura del proyecto

Ver [CLAUDE.md](CLAUDE.md) para la arquitectura completa del toolchain, el estado actual de la
configuración y el detalle del trabajo de reconocimiento/decompilación en curso.

## Créditos

Scaffold inicial basado en [dtk-template](https://github.com/encounter/dtk-template) de Luke
Street (encounter). Herramientas del ecosistema:
[decomp-toolkit](https://github.com/encounter/decomp-toolkit),
[objdiff](https://github.com/encounter/objdiff), [decomp.me](https://decomp.me),
[decomp.dev](https://decomp.dev), [wibo](https://github.com/decompals/wibo).
