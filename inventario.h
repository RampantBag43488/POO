/*
 *
 * Proyecto inventario clase Inventario
 * Inaki Mancera Llano
 * A01708827
 * 12/06/2025
 * version: 1
 * Esta clase define al inventario, el cual mediante agregacion
 * y polimorfismo va guardando la informacion de cada item que 
 * el usuario mete al mismo.
 */

#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "item.h"

//Declaracion del objeto inventario con polimorfismo de objetos Item
class Inventario {

//Variables de instancia del objeto
private:
    int espaciosTotales;
    vector<Item*> Items;

//Metodos del objeto
public:
    Inventario(int espacios = 10);

    void agregarItem(Item* item);
    void eliminarItem(string nombre);
    void verItems();
    Item* buscarItem(string nombre);
};

Inventario::Inventario(int espacios) : espaciosTotales(espacios) {}

/**
 * agregarItem agrega un nuevo objeto de tipo Item el vector dentro de Inventario.
 *
 * Se usan punteros a objetos que heredan de Item para poder agregar distintos tipos de 
 * item al inventario, estos se agregan mediante vectores y sus funciones para a la
 * hora de eliminar alguno no dejar espacios.
 *
 * @param recibe un puntero de tipo Item
 * @return
 */
void Inventario::agregarItem(Item* item) {
    if ((int)Items.size() < espaciosTotales) {
        Items.push_back(item);
    } else {
        cout << "Inventario lleno." << endl;
    }
}

/**
 * eliminarItem elimina un objeto de tipo Item del vector dentro de Inventario.
 *
 * Se usa el nombre del item que dio el usuario para pasar por todos los objetos
 * de tipo Item y usar la funcion getNombre para comparar si el nombre es igual
 * al del usuario, y si lo es primero se elimina el Item en si en "delete *i"
 * y luego se borra el puntero guardado en el vector para no generar errores,
 * esto funciona gracias a la funcion declarada antes en la clase Item de
 * destructor.
 *
 * @param recibe un string que es el nombre del item
 * @return
 */
void Inventario::eliminarItem(string nombre) {
    for (auto i = Items.begin(); i != Items.end(); ++i) {
        if ((*i)->getNombre() == nombre) {
            delete *i;
            Items.erase(i);
            break;
        }
    }
}

/**
 * verItems muetra en cadenas de string la informacion de los items en el inventario.
 *
 * Va recoriendo el vector de items uno a uno y en cada item se usa la funcion verItem
 * que previamente fue personalizada para cada distinto tipo de item y muestra toda la
 * informacion de ese item.
 *
 * @param 
 * @return
 */
void Inventario::verItems() {
    for (Item* item : Items) {
        item->verItem();
    }
}

/**
 * buscarItem muetra en cadenas de string la informacion de un item especifico.
 *
 * Va recoriendo el vector de items uno a uno y compara con cual concuerda el 
 * nombre dado por el usuario, cuando alguno concuerde se despliega toda la
 * informacion de ese item mediante la funcion verItem declarada en su tipo de 
 * item.
 *
 * @param recibe un string que es el nombre del item a buscar
 * @return regresa el objeto derivado de item que concuerde en el nombre.
 */
Item* Inventario::buscarItem(string nombre) {
    for (Item* item : Items) {
        if (item->getNombre() == nombre) {
            return item;
        }
    }
    cout << "No ingreso el nombre bien." << endl;
    return nullptr;
}

#endif


