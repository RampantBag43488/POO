# Proyecto POO (inventario)
### Iñaki Mancera Llano

## Descripcion
Este proyecto trata de un inventario de juego que tendra distintos tipos de items (herramientas, bloques, consumibles y armaduras) dependiendo de lo que el usuario quiera que este en el inventario. Todos estos ítems heredan propiedades comunes de una clase base Item, mientras que la clase Inventario se encarga de organizarlos, agregarlos o eliminarlos..El concepto para el espacio en el inventario y los tipos de items que pueden haber en el inventario esta basado en Minecraft.

## Relaciones
Item es clase madre de Herramienta, Bloque, Consumible, Armadura (Herencia).
Inventario contiene una colección de Items (Agregación).

## Consideraciones (casos que pueden romper el proyecto)
- Agregar más ítems de los que caben en el inventario (espaciosTotales).
- Insertar un objeto que no extienda de Item.
- En valores booleanos poner un valor distinto a 1 o 0.
- Poner valores distintos a los pedidos en el menu.

El código despliega un menú donde agregar, eliminar y ver todos los items en el inventario o solo uno por busqueda de nombre, se puede crear un nuevo item a la hora de agregarlo.
El programa corre tanto en la consola como en visual studio code(con las extensiones necesarias instaladas y MinGW) y está hecho con c++ standard por lo que corre en todos los sistemas operativos.

compilar en consola con: "g++ inventario.cpp" (esto teniendo todos los archivos .h y el .cpp en el escritorio y habriendo desde alli la consola).

correr en windows: "./a.exe"

### Correcciones
1. Se agrego todo el codigo faltante para estar completo y que corra, esto incluyendo clases faltantes y el archivo .cpp.
2. Se separaron las clases en distintos archivos .h para que se vea mas limpio.
3. Algunos "#include" se aplican solo una vez, ya que estos llegan a los otros archivos con la agregacion del archivo anterior.
