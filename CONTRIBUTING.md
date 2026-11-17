# Contributing to Naruto Shippuden: Clash of Ninja Revolution 3 Decompilation

Thank you for your interest in contributing! Whether you are an experienced reverse engineer or someone interested in learning GameCube/Wii decompilation, your help is welcome.

This project is a community effort to preserve **Naruto Shippuden: Clash of Ninja Revolution 3** (Wii) and document Eighting's game engine.

---

## Project Philosophy: Code Quality Over Raw Numbers

In decompilation, getting code to match byte-for-byte is only the first step. The true objective is to reconstruct **clean, readable, and idiomatic C/C++** with proper data types, meaningful names, and well-structured classes.

### The Two Stages of Decompilation in This Repo
1. **Stage 1 (Raw Matching Scratch):** Getting CodeWarrior to produce matching instructions. Automated tooling (such as `m2c` or LLMs) is often used here to generate quick drafts. However, this code frequently contains synthetic vtables (`struct M2C_VC_*`), hardcoded pointer offsets (`*(u32*)((u8*)this + 0x40)`), and arbitrary variable names (`sp8`, `temp_r3`).
2. **Stage 2 (Type Recovery & Clean C++):** Replacing synthetic hacks with actual C++ structs and classes, identifying inheritance hierarchies, assigning proper enum/typedef names, and writing idiomatic code.

**Contributions that improve Stage 2 (code readability and proper typing) are the highest priority of this project.** A function that is well-typed and 100% matched is infinitely more valuable than a function that matches using artificial casts.

---

## Where We Need the Most Help

Here are concrete ways you can contribute, even with small PRs:

### 1. Type Recovery & Struct Deductions (Great for Beginners!)
Look through files in `src/` (e.g., `src/glib_model.cpp`, `src/c_eye_ctrl.cpp`, `src/gauge.cpp`). You will find:
* Raw memory dereferences:
  ```cpp
  // Before (Raw offset arithmetic):
  *(f32*)((u8*)this + 0x24) = speed;
  *(u32*)((u8*)this + 0x28) = flags;
  ```
* **What you can do:** Deduce the struct layout, define it in a header in `include/`, and update the function to use clean member access:
  ```cpp
  // After (Proper struct layout):
  this->speed = speed;
  this->flags = flags;
  ```
* Synthetic vtables (`struct M2C_VC_...`): If you see dummy virtual methods (`v0()`, `v1()`), determine the actual class and interface being called and replace the dummy type.

### 2. Decompiling Remaining Assembly Functions
A significant portion of the game code still awaits translation into C++.
* Look in `src/` for functions marked with `// asm_to_cpp: fn_XXXXXXXX`.
* Translate the assembly into C++, compile with `ninja`, and verify in `objdiff`.
* When a function matches, replace the assembly block with the matching C++ implementation.

### 3. Data Splitting & Header Organization
* Help carve out `.rodata`, `.data`, and `.bss` slices in `config/RNEPDA/splits.txt`.
* Move reusable struct definitions and function prototypes into appropriate headers in `include/`.

### 4. Middleware & SDK Identification
* The game uses Nintendo's RVL SDK, NW4R (Northwest for Wii), MSL (Metrowerks Standard Library), and Nintendo Wi-Fi Connection (DWC / GameSpy).
* Many unidentified functions (`fn_...`) in the SDK range belong to known open-source decompilation targets (such as *Mario Kart Wii*, *Xenoblade Chronicles*, *The Legend of Zelda: Twilight Princess / Skyward Sword*). Matching them saves hours of manual work.

---

## Development Setup

### 1. Prerequisites
- **Python 3.8+**
- **[ninja](https://ninja-build.org/)**
- A copy of the European/PAL game executable (`main.dol`, ID `RNEPDA`), placed under:
  ```
  orig/RNEPDA/sys/main.dol
  ```
  *(Or an extracted disc dump placed inside `orig/RNEPDA/`)*

### 2. First-Time Setup
Run the configure script. It will automatically download the required toolchain binaries (compilers, binutils, decomp-toolkit, objdiff-cli) into the `build/` folder:

```sh
python configure.py
```

### 3. Compiling
To compile the entire project:
```sh
ninja
```

To compile only the translation unit you are actively working on (much faster):
```sh
ninja build/RNEPDA/src/glib_model.o
```

To check current decompilation progress:
```sh
python configure.py progress
```

### 4. Using objdiff (Interactive Diffing)
[objdiff](https://github.com/encounter/objdiff) is the standard GUI tool for matching decompilation:
1. Download and run the `objdiff` GUI application.
2. In objdiff, open this repository's root folder as the **Project Directory**.
3. Select your target object file (e.g., `src/glib_model.o`).
4. Click on any function to view a side-by-side assembly diff (Original vs. Your Compiled C++).
5. As you edit source code, re-run `ninja build/RNEPDA/src/<file>.o` (or let objdiff run the build command automatically).

---

## Coding Guidelines

1. **Target Dialect:** The codebase is compiled as C++ with Metrowerks CodeWarrior for Wii (`-lang=c++`). Even files with `.c` extensions in the original game tree were compiled as C++.
2. **Include Headers:** Place common data structures in `include/`. Use forward declarations where possible to keep build times fast.
3. **Avoid Fake Macros:** Do not use macros that hide real logic just to suppress warnings or force register allocations, unless strictly necessary for CodeWarrior quirks.
4. **Clean Commits:**
   - Verify that your changes compile without warnings/errors: `ninja build/RNEPDA/src/<your_file>.o`.
   - Ensure the function matches in `objdiff` (or note in your PR description if it's an WIP non-matching attempt that improves types/readability).

---

## Submitting a Pull Request

1. Fork the repository and create a feature branch (`git checkout -b refactor/glib-model-types`).
2. Make your changes and test them locally.
3. Open a Pull Request on GitHub with a clear description:
   - Which file or functions were modified.
   - What was improved (e.g., "Identified ModelData struct layout", "Decompiled 3 camera helper functions", "Removed synthetic vtable in glib").
   - A screenshot or summary from `objdiff` confirming match status.

Thank you for contributing to the preservation of Clash of Ninja Revolution 3!
