
/*
 *
 * Proyecto inventario clase Item
 * Inaki Mancera Llano
 * A01708827
 * 12/06/2025
 * version: 1
 * Esta clase defina objeto de tipo Item que contiene las clase madre para herencia.
 */



#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Declaracion de clase Item que es abstracta
class Item {

//Declaracion de variables de instancia
protected:
    string Nombre;
    bool Stack;
    bool Durabilidad;

//Declaracion de los métodos que va a tener el objeto
public:
    Item();
    Item(string nom, bool st, bool Dura);
    void setNombre(string n);
    void setStack(bool s);
    void setDurabilidad(bool d);
    string getNombre();
    virtual int getStack(); //método abstracto será sobreescrito
    string getDurabilidad();
    virtual ~Item() {} //método abstracto será sobreescrito
    virtual void verItem() {} //método abstracto será sobreescrito
};

Item::Item() : Nombre("Item random"), Stack(false), Durabilidad(false) {}

Item::Item(string nom, bool st, bool Dura) : Nombre(nom), Stack(st), Durabilidad(Dura) {}

void Item::setNombre(string n) {
    Nombre = n;
}

void Item::setStack(bool s) {
    Stack = s;
}

void Item::setDurabilidad(bool d) {
    Durabilidad = d;
}

string Item::getNombre() {
    return Nombre;
}

int Item::getStack() {
    return Stack;
}

string Item::getDurabilidad() {
    if (Durabilidad == 1){
        return "El item tiene durabilidad";
    }
    else{
        return "El item no tiene durabilidad";
    }
}

#endif
