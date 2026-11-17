# Cabeceras SS adaptadas a RNEPDA

Copias CC0 de zeldaret/ss, separadas de `libs/` y de la familia Xenoblade. Se
incluyen explícitamente antes de los headers de referencia porque estos utilizan
includes entre comillas. No usar `-include`: CodeWarrior restaura opciones IPA
tras el prefijo y rechaza declaraciones ya procesadas.

- `SoundParam` no tiene la palabra adicional de offset 0x24 de esta referencia.
  También se ajustan los cuatro offsets de nodos intrusivos de BasicSound.
- BasicPlayer y Channel conservan los buses remoteSend/remoteFxSend del juego.
- SeqTrack conserva pitchBend escalar: la referencia SS suaviza también ese
  parámetro, mientras que esta versión solo suaviza volumen y posiciones.
- SeqSound, StrmSound y WaveSound declaran RTTI fuera de línea para que el
  compilador conserve esos cuerpos incluso cuando el constructor queda en ASM.
  Sus listas de prioridad usan el nodo de BasicSound en 0xEC.

Fuentes SS consultados en el commit `96f2dd5497c4ceb595de76fd897fbb1542b27323`
(https://github.com/zeldaret/ss). Los originales y LICENSE están en
`scratch/goal50/references/ss`; la licencia CC0 también está en `libs/ss/LICENSE`.
La validación es por función, instrucciones y llamadas, más la build completa.
Estas cabeceras no implican que las clases o vtables estén completas para un port.
