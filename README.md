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
- Borrar un objeto que no existe.
- No validar los atributos (como durabilidad < 0).


