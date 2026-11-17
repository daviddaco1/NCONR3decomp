# Parches a herramientas de terceros

## decomp-toolkit-v1.8.3-frameless-thunks.patch

`decomp-toolkit` v1.8.3 (el `dtk.exe` que `configure.py` descarga automaticamente) falla
el analisis inicial de `main.dol` para este juego con dos errores relacionados:

1. `Unpaired epilogue 0x...` — MWCC genera thunks pequenos de limpieza de excepciones
   C++ (llaman a un helper de runtime tipo `__destroy` durante el unwind) que reusan
   el stack frame del llamador en vez de crear el suyo con `stwu`. El heuristico de
   dtk asume que toda funcion con epilogo tiene prologo (o carga r1), y aborta.
   Aparece **~1925 veces** en el `.text` principal — no es un caso aislado.
2. `Overlapping functions A-B -> C` — como consecuencia de (1), algunas funciones tipo
   switch/dispatch con muchos casos (jump table via `bctr`) quedan mal delimitadas, y
   codigo de un caso que ademas es alcanzado como "tail call" desde otra funcion no
   relacionada (folding del optimizador de MWCC) se registra como una funcion nueva
   que se solapa con la que ya lo contiene.

Este patch (contra el tag `v1.8.3`, commit `e4219e7644fb7b96d920d5bc3d1d950f5569dcaf`)
ajusta `src/analysis/slices.rs` y `src/analysis/cfa.rs` para tolerar ambos casos. Con
esto, el analisis inicial completa: 11296 funciones encontradas, 2605 objetos
generados, y el build final matchea el `build.sha1` (100% asm puro, 0% matcheado en C,
como corresponde a este punto del proyecto).

**Este parche vive fuera de `build/` (que esta gitignoreado) para que sobreviva a un
`git clone` limpio o a borrar `build/`.** `configure.py` no lo aplica automaticamente
todavia — hay que reconstruir `dtk.exe` a mano cuando haga falta:

```sh
git clone --branch v1.8.3 --depth 1 https://github.com/encounter/decomp-toolkit
cd decomp-toolkit
git apply ../patches/decomp-toolkit-v1.8.3-frameless-thunks.patch
cargo build --release
cp target/release/dtk.exe ../build/tools/dtk.exe   # o target/release/dtk en Linux/macOS
```

Requiere un toolchain de Rust (`rustup`) y, en Windows, el MSVC Build Tools (o
correr `cargo build` dentro de un "Developer Command Prompt for VS").

TODO: si esto se vuelve friccion recurrente, considerar abrir un issue/PR upstream en
`encounter/decomp-toolkit` con este caso reproducible, o automatizar el build del
parche como paso de `configure.py`.
