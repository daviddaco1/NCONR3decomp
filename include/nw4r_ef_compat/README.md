# Cabeceras de efectos adaptadas a RNEPDA

Estas copias mantienen las APIs usadas por los mixtos de Forecast y los campos
contrastados con el DOL y con kiwi515/ogws (CC0), commit
`27fa94a593096eed7442efc4e70981fd52025b9c`. La licencia está en
`scratch/goal50/references/ogws/LICENSE`; la copia Forecast procede de la revisión
`1283668`, cuya licencia está en `libs/forecast/LICENSE`.

Effect tiene callbacks en 0x44, flags en 0x50, matriz en 0x54 y velocidad en
0x84. La velocidad se inicializa a cero, comprobado en los literales del DOL.
EffectSystem tiene el orden de dibujo en 0x4 y dos builders antes de la cola.
EmitterParameter incorpora mEmitIntervalRandom en 0x14; ParticleParameter tiene
offsets de rotación y estado de colisión antes de la velocidad de 0x80.

Los includes explícitos anteriores a la cabecera global impiden que se cargue
primero una definición de otra versión. Las llamadas virtuales solo están
reconstruidas en la medida necesaria para el C aceptado. Estas cabeceras no
demuestran por sí solas que toda la ABI o las vtables estén listas para un port.
