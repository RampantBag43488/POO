#ifndef CONSUMIBLE_H
#define CONSUMIBLE_H

#include "item.h"

class Consumible : public Item {
private:
    int Vida;
    int Comida;

public:
    Consumible();
    Consumible(string nombre, int v, int c, bool s);
    void setVida(int v);
    int getVida();
    void setComida(int c);
    int getComida();
    void verItem();
};

Consumible::Consumible() : Vida(0), Comida(0) {}
Consumible::Consumible(string nombre, int v, int c, bool s) : Item(nombre, s, false), Vida(v), Comida(c) {}

void Consumible::setVida(int v) { 
    Vida = v; 
}
int Consumible::getVida() { 
    return Vida; 
}
void Consumible::setComida(int c) { 
    Comida = c; 
}
int Consumible::getComida() { 
    return Comida; 
}

void Consumible::verItem(){
    cout << "\nEl consumible " << Nombre << " tiene las siguintes caracteristicas: " << endl;
    if (Stack == 1){
        cout << "Es stackeable." << endl;
    }
    else{
        cout << "No es stackeable." << endl;
    }
    cout << "No tiene durabilidad." << endl;
    cout << "Otorga " << Vida << " puntos de vida." << endl;
    cout << "Otorga " << Comida << " puntos de comida." << endl;
}

#endif