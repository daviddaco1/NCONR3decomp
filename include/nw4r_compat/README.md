# Cabeceras de sonido para RNEPDA

Adaptaciones CC0 de `libs/xenoblade/nw4r/include/nw4r/snd` y de las estructuras
contrastadas con `libs/ss/include/nw4r/snd`. Las referencias originales no se editan.
Solo los objetos con `cflags_rnepda_snd` usan esta familia de cabeceras.

- `PlayerParamSet` ocupa 0xCC bytes: conserva los tres buses remotos y añade los
  cuatro `VoiceOutParam`. `BasicPlayer` ocupa 0xD4. La inicialización, los setters,
  el constructor y los getters de su unidad coinciden íntegramente con el DOL.
- `SeqPlayer` incorpora los dos punteros del callback de usuario en 0x118/0x11C;
  los tracks comienzan en 0x120. El setter y la llamada del callback de la
  referencia SS coinciden por instrucciones con las funciones del DOL.
- `EnvGenerator` incorpora HOLD y sus contadores de 16 bits; su tamaño es 0x1C.
  Esto sitúa los flags de Channel en los offsets utilizados por los reproductores.

Son adaptaciones de ABI para el binario Wii. La presencia de una declaración no
significa que toda la clase o sus datos/vtables estén reconstruidos. Solo las
funciones aceptadas por objdiff al 100% se cuentan como C; el resto conserva ASM.
