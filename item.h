#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Item {
protected:
    string Nombre;
    bool Stack;
    bool Durabilidad;

public:
    Item();
    Item(string nom, bool st, bool Dura);
    void setNombre(string n);
    void setStack(bool s);
    void setDurabilidad(bool d);
    string getNombre();
    virtual int getStack();
    string getDurabilidad();
    virtual ~Item() {}
    virtual void verItem() {}
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