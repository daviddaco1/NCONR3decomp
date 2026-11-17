# Guía práctica para continuar la descompilación

Fecha de revisión: 2026-11-14. Guía de referencia para colaboradores que retoman este repositorio.
Leer primero el estado más reciente de la [bitácora](decompilation_log.md). Esta guía explica cómo elegir y ejecutar trabajo.
Los comandos se ejecutan desde la raíz. Los ejemplos de entorno son PowerShell.

## 1. Qué resultado se busca

Convertir ASM a C/C++ real que produzca las instrucciones originales con CodeWarrior,
sin perder ninguna función C anterior ni ninguna coincidencia exacta anterior.
El port a PC es un objetivo posterior: hoy los objetos `NonMatching` siguen enlazando
el objeto original porque faltan los splits de datos.

Una tanda se acepta cuando aumenta los bytes de C real, conserva las funciones
anteriores, pasa la reconstrucción y documenta el alcance de las auditorías.
No basta con que el DOL conserve su hash: ese enlace puede no usar el C nuevo.

| Evidencia | Qué permite afirmar | Qué no demuestra por sí sola |
|---|---|---|
| `configure.py progress` | C real excluyendo ASM marcado | Corrección de todos los destinos de relocation |
| `report.json` crudo | Coincidencia que incluye ASM | Cantidad de C real |
| Escaneo nativo enmascarado | Candidato con instrucciones compatibles | Identidad de llamadas, datos o vtables |
| SHA-1 del DOL | Reconstrucción del binario original | Que se haya enlazado el C propio |
| Comparación por dirección virtual | Conservación de funciones pese a renombres | Semántica de una relocation enmascarada |

No presentar títulos antiguos de «100%» como C real actual: varias etapas de la
bitácora preceden a la separación entre C y ASM. Usar las verificaciones recientes.

## 2. Retomar sin interferir con trabajo existente

1. Leer `git status --short`, `git stash list` y el final de la
   bitácora. No restaurar archivos desde HEAD para limpiar: hay avances sin commit
   y cabeceras nuevas sin seguimiento que forman parte de la build.
2. Averiguar si hay una campaña activa antes de ejecutar configure, ninja o herramientas
   que escriban fuentes, contexto, configuración o reportes. Una sesión anotada es una
   pista, no prueba de que el proceso siga vivo; revisar su handle si está disponible,
   proceso, log y resultado. No reiniciar por silencio ni matar procesos por nombre.
3. Si está activa, continuar su seguimiento o limitarse a lectura independiente.
   Un contexto separado mediante `M2C_CTX`/`M2C_WORK_DIR` no aísla las escrituras
   de configuración y fuentes de una adopción: evitar dos escritores en el checkout.
4. Cuando el checkout esté estable, ejecutar configure/ninja, comprobar workspace y
   medir progreso. Si falla ninja, no usar el reporte que haya quedado como resultado nuevo.
5. Guardar una base en `scratch/<campaña>/`: reporte, estado por función, progreso,
   configuración, fuentes activas y cabeceras que se vayan a tocar. Restaurar desde
   esta copia de trabajo, byte a byte, conservando CRLF cuando corresponda.

**Punto de relevo al redactar esta guía:** M28 es la última base documentada como
verificada: 1,271,736 / 3,299,164 bytes de C real (38.55%), 7,467 funciones.
M29 figura en curso con sesión 17770, log `scratch/goal50/m29_game_active_ctx.log`
y backup `build/m2c_cpp_backup/20261114_100400`. Esta revisión documental no certifica
su estado vivo ni su resultado. Resolverlo antes de iniciar otra pasada.
Al finalizar M29, usar `scratch/goal50/compare_m28_va.py` y luego la comparación
contra hito 7; inspeccionar esos scripts antes de correrlos, porque escriben snapshots.
Los archivos de scratch son locales y pueden no existir en otro checkout.

## 3. Elegir trabajo con mayor rendimiento

Orden recomendado según los resultados registrados, ajustándolo a la evidencia nueva:

1. **Referencias SDK con candidatos grandes y compilador aún no probado.** El escaneo
   sistemático de noviembre recuperó 121,312 bytes; DVD pasó de 2,460 a 17,484 bytes
   al cambiar de perfil. Probar versión de compilador antes de permutar cientos de cuerpos.
2. **Diferencias repetidas de layout en una familia.** Sonido identificó 107 funciones /
   14,172 bytes con desplazamientos incompatibles. Corregir el modelo compartido puede
   desbloquear más que ajustar instrucciones una por una.
3. **Funciones C++ ya emitidas pero sin emparejar.** Constructores, destructores e
   inicializadores globales pueden existir en el objeto y conservar nombre `fn_*` en
   el destino. M28 recuperó tres funciones G3D así, con auditoría de llamadas y punteros.
4. **m2c tras una mejora concreta del contexto o transformaciones.** Corregir firmas,
   pila o representación de campos y probar primero una muestra. Repetir `--game`
   sin cambiar la hipótesis suele converger sin avance.
5. **Ajustes manuales de casi coincidencias con causa identificable.** Priorizar
   familias que compartan iteradores, retorno de estructuras, pool de constantes o ABI.
6. **Permutación acotada.** Medir ganancia neta tras aplicar: una campaña resolvió
   54 candidatos pero solo añadió 15 funciones; otra resolvió 47 y añadió dos.

Los tamaños potenciales de un escaneo no son progreso. Descontar C ya existente,
duplicados y falsos positivos; ordenar por bytes nuevos plausibles y coste de adaptación.
Tras varios ensayos negativos, registrar variantes y pasar a otro candidato salvo
que haya una hipótesis distinta y comprobable.

## 4. Ciclo de trabajo por candidato

1. Identificar split, función, VA, tamaño y estado C/ASM en el reporte estable.
2. Consultar `metadata.source_path`, entrada de configure y regla de ninja. Editar
   la fuente activa: una copia en `src/` puede quedar ignorada por `src_dir="libs"`.
3. Leer ASM original, funciones vecinas, llamadas y datos. Buscar referencia de
   versión cercana y registrar origen, commit y licencia antes de adoptar contenido.
4. Formular una hipótesis concreta: «este offset difiere por el tamaño de la base»,
   «este iterador se pasa por valor» o «el retorno usa buffer oculto».
5. Guardar los archivos afectados y probar una modificación pequeña. Los ensayos y
   scripts desechables van en scratch; no editar `libs/` ni añadir probes a tools.
6. Compilar el objeto real. Borrar su `.o` antes de verificar si existe duda de
   timestamps o nombre base; regenerar configure al cambiar fuentes o configuración.
7. Regenerar el reporte y verificar funciones presentes, nuevas y conservadas.
   Un compilador puede devolver éxito para una fuente vacía: comprobar contenido.
8. Auditar destinos de llamadas y datos nuevos. Aceptar solo lo demostrado;
   restaurar el candidato fallido desde el backup, no desde una regeneración de ASM.
9. Anotar ganancia neta, causa resuelta, negativos y siguiente experimento.

## 5. Ruta SDK: referencias, perfiles y mixtos

Leer los docstrings de `import_scan.py`, `adopt_import.py` y `mix_asm.py` antes de
usarlos. El escaneo compila referencias aisladas y busca por contenido incluso
cuando el DOL conserva `fn_*`:

```text
python tools/import_scan.py <salida.tsv> <mw_version[,mw2...]> "<cflags>" <fuentes...>
python tools/adopt_import.py --rename <candidatos.tsv> <escaneo.tsv>
python tools/adopt_import.py <candidatos.tsv> <escaneo.tsv>
```

Son plantillas: obtener flags de la familia en configure.py y revisar ambos TSV.
Antes del renombre en lote, confirmar identidad y destinos; un match enmascarado
de un wrapper de ocho bytes no basta. Regenerar ASM con ninja tras renombrar.
No usar `--allow-loss` en la continuidad actual: aunque existe por razones históricas,
el criterio vigente es conservar cada función C previa.

Probar los perfiles pertinentes `Wii/1.0`, `GC/3.0a5.2` y `GC/3.0a5`; no cambiar
globalmente el SDK por el resultado de una TU. En NW4R partir del perfil de su
referencia, y verificar cualquier excepción sobre todas las funciones de la unidad.

Adoptar como mixto: C para coincidencias verificadas y ASM marcado para el resto.
Cada función generada dentro de `Object` lleva `// asm_to_cpp: <fn>`.
No quitar marcas para subir progreso. No trasladar automáticamente TUs `source="x.s"`
a ASM inline: hay instrucciones/relocations que mwcc no representa igual.

Para diferencias de versión, crear adaptadores locales en include y activar una
copia local cuando haga falta. Confirmar tamaños, offsets, slots virtuales, stride
de arrays y offsets de nodos intrusivos con el DOL. Reducir un struct sin corregir
los offsets constantes de sus listas deja un modelo incorrecto. Limitar el adaptador
a las TUs verificadas; una referencia moderna no define el layout de RNEPDA.

## 6. Ruta juego: C++ y contexto de m2c

El juego es C++ incluso donde el nombre termina en `.c`. Mantener `extern "C"`
para símbolos sin mangling conocido. Partir de los flags activos de configure:
Wii/1.0, `-lang=c++ -O4,s -schedule off -func_align 4 -opt nopeephole`
y `-fp_contract off`, con excepciones por TU comprobadas.

Con el checkout estable y `M2C_DIR` apuntando al clon externo de m2c:

```powershell
python tools/m2c_context.py
# Continuar solo si el comando anterior terminó correctamente.
python tools/m2c_ctx_fargs.py
$env:M2C_TX = '1'
python tools/m2c_cpp.py <split>
# Ampliar a --game solo tras validar la hipótesis sobre una muestra.
```

El contexto usa exclusivamente ASM activo de objdiff.json: no volver al glob de
todo build/asm, que incluye miles de splits históricos. Ante ASM activo ausente,
reparar configure/ninja; no ocultarlo con un fallback. No usar `--protos` por rutina:
`include/m2c_protos.h` está versionado y puede entrar en conflicto con headers reales.
Tras renombres o cambios de firmas, revisar contexto y estabilización de fargs;
no considerar una inferencia automática como prueba del ABI.

Transformaciones productivas que conviene entender antes de editar el generador:

- Campos tipados como miembros permiten el CSE original mejor que casts de offsets.
- Tablas f32 en su sección real y accesos indexados evitan alias artificiales.
- Llamadas y lecturas inline reproducen el orden de evaluación original; temporales
  introducidos por m2c pueden cambiarlo.
- Locales vectoriales alineados a 16, declarados según offsets descendentes,
  reproducen ciertos marcos dinámicamente alineados.
- Los árboles de comparación requieren recuperar todos los casos del switch,
  incluidos rangos que m2c omite.
- Firmas deben respetar posición ABI, registros float y retorno; `f32*` usa registro
  entero. Retornos de estructuras y métodos virtuales requieren su ABI real.
- Conservar orden del C existente, tipos, pragmas y firmas usadas por ese C.
  Usar `dont_inline` donde la llamada real debe sobrevivir.

`m2c_cpp.py` acepta incrementalmente y restaura unidades sin ganancia o con regresión;
esa protección no sustituye la comparación global posterior. No usar
`apply_template.py` con cuerpos TX que dependan de structs `S_<fn>`/`SK_<fn>`:
el trasplante histórico omitió tipos y dejó una build rota con reporte viejo.

## 7. Ajuste manual: diagnosticar antes de permutar

| Diferencia observada | Hipótesis prioritaria |
|---|---|
| Muchos offsets desplazados igual | Versión de clase/base y campos añadidos |
| Menos registros guardados en función libre | Método C++ y uso de `this` |
| Copias o recargas distintas en iteradores | Paso por valor, temporal ABI, operadores libres/miembros |
| Retorno de Size/Color/Rect incompatible | Constructor de copia y buffer oculto; no asumir POD |
| Tamaño igual pero orden FP distinto | Getters inline y orden de evaluación de argumentos |
| SDA frente a lis/addi o lis/lfs | Sección, declaración del símbolo y flags locales de small data |
| Pool con offsets desplazados | Constantes emitidas también por helpers de la TU |
| Instrucciones iguales pero 0% | Nombre, fuente activa, objeto obsoleto o relocation faltante |
| Marco de pila mayor | Tipos/locales, alineación, vida de temporales y bucles |

Ejemplos comprobados M26–M28: Erase recibe iterador **por valor**; tomar su dirección
no reproduce la copia temporal. GetTextureSize usa ocho palabras de GXTexObj y
retorno Size con copia. DrawContent necesitó getters inline de coordenadas, además
del cuerpo correcto. Pane requirió layout antiguo y pool completo de 24 bytes.
Son diagnósticos de esas versiones, no reglas para imponer a toda la biblioteca.

`extern u8 lbl_X[]` y arrays incompletos tipados pueden forzar la materialización
de dirección necesaria; comprobar también que el símbolo exista en symbols.txt y
no se solape. Usar `-sdata2 0`, peephole o control de flujo solo con evidencia y
alcance acotado. No introducir escrituras ficticias ni ASM nuevo para aparentar C.

`fn_diff.py <split> <fn> <archivo.cpp>` sirve de diagnóstico rápido, pero usa flags
propios, agrega `-opt nocse` para C++ y normaliza destinos de ramas. Su resultado
no sustituye compilar la TU activa ni auditar relocations. El docstring antiguo
que ejemplifica `.c` no cambia la obligación de escribir el juego en C++.

Para permutar, leer primero `m2c_permute.py`; producir triage bajo el contexto
elegido, limitar tamaño/iteraciones y aplicar con su rollback. Revisar resultados
de `--apply` contra la base: soluciones aisladas no equivalen a ganancia integrada.

## 8. Auditoría que completa el matching

Comparar por **(dirección virtual, tamaño)**, con fallback explícito solo para
funciones sin VA. Exigir claves únicas, mismo conjunto y denominador; comprobar
por separado pérdidas de C y pérdidas de matching exacto. Un total ascendente
puede esconder regresiones. Si cambia un split intencionadamente, documentar
movimientos sin alterar direcciones ni contabilizar dos veces sus funciones.

Para cada función C nueva, verificar según corresponda:

- Llamadas `bl` y saltos finales `b` externos, destino y posición; excluir etiquetas
  locales. No modificar un fuente correcto para satisfacer un auditor incompleto.
- Relocations de punteros a funciones, constructores, destructores y vtables.
- Dirección efectiva y bytes de constantes/datos, incluidos addends y pool completo
  cuando cambie su composición. Nombres distintos o nombres iguales no bastan.

No renombrar por igualdad enmascarada de stubs: un salto o una carga puede contener
toda su semántica en la relocation. Usar `rename_symbols.py`, nunca editar solo
symbols.txt. Los `__sinit_` con caracteres no válidos en C requieren retirar antes
referencias artificiales y adoptar la función que realmente emite C++.
Registrar cuántos casos se auditaron y qué quedó pendiente: una muestra de literales
no certifica todos los datos del juego ni que el port ya pueda enlazarse.

## 9. Verificación y cierre reproducible

Sin otra campaña escribiendo, ejecutar secuencialmente y detenerse ante errores:

```powershell
python configure.py
ninja
python tools/check_workspace.py
python configure.py progress
```

Comparar funciones con la base estable de la tanda y con el último hito. Para
cierre de etapa, reconstruir los objetos desde cero sin borrar herramientas:

```powershell
# Desde la raíz: verificar que ambas rutas resuelvan dentro de este checkout.
Resolve-Path build/RNEPDA/src
Resolve-Path build/RNEPDA/main.dol
# Solo después de comprobar las rutas, y sin procesos de build activos:
Remove-Item -LiteralPath build/RNEPDA/src -Recurse -Force
ninja
Remove-Item -LiteralPath build/RNEPDA/main.dol -Force
ninja
sha1sum -c config/RNEPDA/build.sha1
python tools/check_workspace.py
python configure.py progress
```

Exigir SHA-1 OK, cero problemas y reporte fresco; repetir comparación por VA sobre
ese reporte final. Si sha1sum no está disponible, usar una verificación SHA-1
equivalente contra el valor y archivo de build.sha1. No borrar build entero,
herramientas, fuentes, ASM versionado ni orig; nunca `git clean -x`.

Actualizar bitácora al cerrar una etapa de decompilación:
base, bytes/funciones C, delta neto, porcentajes juego/SDK, matching crudo,
denominador, pérdidas, auditorías, comandos, backups, negativos y siguiente hipótesis.
Incluir procesos pendientes con sus handles y logs.
Revisar diff antes de cualquier commit y excluir dumps,
binarios, assets y temporales sin debilitar .gitignore.

## 10. Mensaje de relevo sugerido

```text
Continúa desde docs/guia_continuacion_decompilacion.md y la bitácora.
Primero resuelve el estado de procesos anotados; conserva todo el trabajo previo.
Base verificada: <reporte/snapshot>, <bytes C>/<total>, <funciones>, <commit>.
Tanda pendiente: <hipótesis>, <fuentes activas>, <backups>, <log/handle>.
Prioriza <familia/candidatos> por <evidencia>; evita repetir <negativos>.
Acepta solo C nuevo exacto sin pérdidas por VA y audita llamadas/datos nuevos.
Cierra con reconstrucción, relink, SHA, workspace, comparación y bitácora.
```

## Fuentes de esta metodología

- Bitácora, 2026-11-04: auditoría de métricas, fuentes activas y objetos obsoletos.
- 2026-11-05, fase 2: importación sistemática y perfiles de compilador.
- 2026-11-05, fase 3 y variante M2C_TX: preservación incremental, ABI y transformaciones.
- Hitos 4–7: layouts de sonido, referencias CC0 y conservación por función.
- M26–M28: iteradores, pools, getters inline, símbolos nativos y contexto activo.
- Docstrings e implementación revisados de import_scan, adopt_import, m2c_cpp,
  m2c_permute, fn_diff, try_import y apply_template. Ante cambios posteriores,
  revisar su implementación y resultados antes de reutilizar una receta.
