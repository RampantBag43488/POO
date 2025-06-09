#ifndef ARMADURA_H
#define ARMADURA_H

#include "item.h"

class Armadura : public Item {
private:
    string Tipo;
    int Defensa;

public:
    Armadura();
    Armadura(string nombre,string t, int de);
    void setTipo(string t);
    string getTipo();
    void setDefensa(int d);
    int getDefensa();
    void verItem();
};

Armadura::Armadura() : Tipo("Peto"), Defensa(30) {}
Armadura::Armadura(string nombre,string t, int de) : Item(nombre, false, true), Tipo(t), Defensa(de) {}

void Armadura::setTipo(string t) {
    Tipo = t;
}

string Armadura::getTipo() {
    return Tipo;
}

void Armadura::setDefensa(int d) {
    Defensa = d;
}

int Armadura::getDefensa() {
    return Defensa;
}

void Armadura::verItem(){
    cout << "\nLa armadura " << Nombre << " tiene las siguintes caracteristicas: " << endl;
    cout << "No es stackeable." << endl;
    cout << "Tiene durabilidad." << endl;
    cout << "Otorga " << Defensa << " de defensa." << endl;
}

#endif