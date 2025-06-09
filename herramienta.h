#ifndef HERRAMIENTA_H
#define HERRAMIENTA_H

#include "item.h"

class Herramienta : public Item {
private:
    int Dano;

public:
    Herramienta();
    Herramienta(string nombre, int dano);
    void setDano(int d);
    int getDano();
    void verItem();
};

Herramienta::Herramienta() : Dano(1) {}
Herramienta::Herramienta(string nombre, int dano) : Item(nombre, false, true), Dano(dano) {}

void Herramienta::setDano(int d) {
    Dano = d;
}

int Herramienta::getDano() {
    return Dano;
}

void Herramienta::verItem(){
    cout << "\nLa herramienta " << Nombre << " tiene las siguintes caracteristicas: " << endl;
    cout << "No es stackeable." << endl;
    cout << "Tiene durabilidad." << endl;
    cout << "Inflinje " << Dano << " dano." << endl;
}

#endif