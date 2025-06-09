#ifndef BLOQUE_H
#define BLOQUE_H

#include "item.h"

class Bloque : public Item {
private:
    bool Tipo; // true = Construccion, false = naturaleza 

public:
    Bloque();
    Bloque(string nombre, bool t, bool s);
    void setTipo(bool t);
    string getTipo();
    void verItem();
};

Bloque::Bloque() : Tipo(true) {}
Bloque::Bloque(string nombre, bool t, bool s) : Item(nombre, s, true), Tipo(t) {}

void Bloque::setTipo(bool t) { 
    Tipo = t; 
}
string Bloque::getTipo() { 
    return Tipo ? "Construccion" : "Naturaleza"; 
}

void Bloque::verItem(){
    cout << "\nEl bloque " << Nombre << " tiene las siguintes caracteristicas: " << endl;
    if (Stack == 1){
        cout << "Es stackeable." << endl;
    }
    else{
        cout << "No es stackeable." << endl;
    }
    cout << "No tiene durabilidad." << endl;
    if (Tipo == 1){
        cout << "Es de la categoria construccion." << endl;
    }
    else{
        cout << "Es de la categoria naturaleza." << endl;
    }
}

#endif