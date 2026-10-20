# Naruto Shippuden: Clash of Ninja Revolution 3 (Decompilation)

[Versión en español](README.md)

Matching decompilation of **Naruto Shippuden: Clash of Ninja Revolution 3** (Wii), with the
goal of porting it to PC.

## Legal

This repository does not distribute or include any ISO, DOL, asset or file extracted from the
game. Everything under `orig/` is excluded via `.gitignore` and must never be committed. Building
requires a legitimate copy of the game, provided by the user.

## Supported version

| Game ID | Region |
|---|---|
| `RNEPDA` | Europe/PAL |

## How it works

We write C/C++ code that, built with the game's original compiler (Metrowerks CodeWarrior for
Wii), produces code byte-identical to `main.dol`. A function that matches this way is confirmed
to be the real implementation and can be safely modified or ported. This is the standard method
used by the GC/Wii decomp community (Wind Waker, Pikmin, Melee, Skyward Sword...).

The executable is split into *translation units* (TUs, one source file each) according to
`config/RNEPDA/splits.txt`. Each TU has one of these sources:

- **Real C/C++**: hand-written, imported from another decompilation project (Nintendo/Metrowerks
  libraries) or generated with [m2c](https://github.com/matt-kempster/m2c) and verified.
- **asm**: the original code as inline assembly, waiting to be rewritten.
- **mixed**: C for the functions that already match and asm for the rest.

## Status

| | |
|---|---|
| Code matched (asm + C) | **100%** (3.3 MB, 11,293 functions) |
| Code in real C | ≈10.9% |
| Data | 0% (no data splits yet) |
| `.text` split | 100% |

`python configure.py progress` prints up-to-date numbers (the "C code" line is real C). The
detailed history (in Spanish) is in [`docs/decompilation_log.md`](docs/decompilation_log.md).

## Dependencies

- **Python 3**
- **[ninja](https://github.com/ninja-build/ninja)**

The rest of the toolchain (decomp-toolkit, objdiff-cli, PPC binutils, wibo and the Metrowerks
CodeWarrior compilers) is downloaded automatically on first run. Per-OS details in
[`docs/dependencies.md`](docs/dependencies.md). Automatic C generation additionally needs a clone
of m2c (GPL, not included) with `M2C_DIR` pointing to it.

## Usage

1. Copy the game into `orig/RNEPDA/` (disc image or extracted files; `sys/main.dol` is read).
2. Build:

```sh
python setup.py                # optional: checks prerequisites and dump integrity
python configure.py            # generates build.ninja + objdiff.json
ninja                          # builds
python configure.py progress   # progress
sha1sum -c config/RNEPDA/build.sha1   # verifies the rebuilt DOL is identical
```

There is no test suite: verification is that `ninja` builds and `build.sha1` matches. For
function-by-function work use [objdiff](https://github.com/encounter/objdiff), opening the repo
root as the *project directory*.

## Layout

| Path | Contents |
|---|---|
| `config/RNEPDA/` | `config.yml`, `splits.txt` (TUs), `symbols.txt` (names), `build.sha1` |
| `configure.py` | Build definition: libs, objects, per-area compiler flags |
| `src/` | Game and library sources (C, mixed or asm), one per TU |
| `include/` | Game headers |
| `libs/` | Imported third-party code (see below) |
| `tools/` | dtk-template tools and project tools (splits, symbols, asm → C) |
| `docs/` | Project log and dtk-template documentation |
| `patches/` | Patches to external tools |
| `orig/` | Game dump (not versioned) |
| `build/` | Everything generated (not versioned) |

[`CLAUDE.md`](CLAUDE.md) (Spanish) summarizes the build architecture, verified compiler flags per
area and known gotchas.

## Third-party code

`libs/` contains MSL/Runtime/MetroTRK, RVL SDK and NW4R sources and headers from
[xbret/xenoblade](https://github.com/xbret/xenoblade), GameSpy from
[doldecomp/mkw](https://github.com/doldecomp/mkw) and parts of NW4R from
[zeldaret/ss](https://github.com/zeldaret/ss), all under CC0 (license in each `libs/<source>/LICENSE`).
Library TU names were also taken from those projects and from
[doldecomp/ogws](https://github.com/doldecomp/ogws) and [zeldaret/tp](https://github.com/zeldaret/tp).

## Credits

Scaffold based on [dtk-template](https://github.com/encounter/dtk-template) by Luke Street
(encounter). Tools: [decomp-toolkit](https://github.com/encounter/decomp-toolkit),
[objdiff](https://github.com/encounter/objdiff), [m2c](https://github.com/matt-kempster/m2c),
[decomp.me](https://decomp.me), [decomp.dev](https://decomp.dev),
[wibo](https://github.com/decompals/wibo).
