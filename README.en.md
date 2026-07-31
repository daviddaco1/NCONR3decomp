# Naruto Shippuden: Clash of Ninja Revolution 3 (Decompilation)

[Versión en español](README.md)

Matching decompilation of **Naruto Shippuden: Clash of Ninja Revolution 3** (Wii), aiming for a
native PC port.

## Legal

This repository does not distribute or include any ISO, DOL, asset, or extracted game file. All
content under `orig/` is excluded via `.gitignore` and must never be committed. Building requires
a legitimate copy of the game, supplied by the user.

## Supported version

| Game ID | Region |
|---|---|
| `RNEPDA` | Europe/PAL |

## Why decompilation instead of a binary patch

A real PC port (free resolution, control remapping, mods, native performance) requires
recompilable original C/C++ code, not a patched binary. The approach used here is the standard
method in the GC/Wii decompilation community (Zelda: Wind Waker, Pikmin, Melee, Kirby's Return
to Dream Land): C/C++ code is written that, compiled with the game's original compiler
(Metrowerks CodeWarrior), produces a byte-identical binary. A function that matches this way is
confirmed as the real implementation and can be modified or ported safely.

## Dependencies

- **Python 3**
- **[ninja](https://github.com/ninja-build/ninja)**

Everything else in the toolchain (decomp-toolkit, objdiff-cli, PPC/gc-wii binutils, wibo, and the
Metrowerks CodeWarrior compilers themselves) is downloaded automatically on the first run of
`configure.py`. Per-OS details in [`docs/dependencies.md`](docs/dependencies.md).

## Usage

```sh
python3 configure.py          # generates build.ninja + objdiff.json
ninja                          # builds; first run generates symbols.txt/splits.txt
python3 configure.py progress  # prints % progress (code/data matched vs. total)
```

Additional flags (`--non-matching`, `--debug`, tool path overrides) via
`python3 configure.py --help`.

There is no test suite: verification is that `ninja` builds and that
`config/RNEPDA/build.sha1` matches. Functional progress is tracked with
[objdiff](https://github.com/encounter/objdiff), opening the repo root as the *project
directory* once `objdiff.json` exists.

## Project structure

See [CLAUDE.md](CLAUDE.md) for the full toolchain architecture, current configuration state, and
details on the ongoing reverse-engineering/decompilation work.

## Credits

Initial scaffold based on [dtk-template](https://github.com/encounter/dtk-template) by Luke
Street (encounter). Ecosystem tooling:
[decomp-toolkit](https://github.com/encounter/decomp-toolkit),
[objdiff](https://github.com/encounter/objdiff), [decomp.me](https://decomp.me),
[decomp.dev](https://decomp.dev), [wibo](https://github.com/decompals/wibo).
