/*
 *
 * Proyecto inventario clase Herramienta
 * Inaki Mancera Llano
 * A01708827
 * 12/06/2025
 * version: 1
 * Esta clase defina objeto de tipo Item que contiene la clase heredada
 * Armadura.
 */


#ifndef ARMADURA_H
#define ARMADURA_H

#include "item.h"

//Declaracion del objeto armadura que hereda de Item
class Armadura : public Item {

//Variables de instancia del objeto
private:
    string Tipo;
    int Defensa;

//Metodos del objeto
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

/**
 * verItem muestra la informacion general de la armadura en cadena de string.
 *
 * concatena todos los valores de los atributos en un string para ser impreso
 *
 * @param
 * @return imprime un string con los valores y texto concatenado.
 */
void Armadura::verItem(){
    cout << "\nLa armadura " << Nombre << " tiene las siguintes caracteristicas: " << endl;
    cout << "No es stackeable." << endl;
    cout << "Tiene durabilidad." << endl;
    cout << "Otorga " << Defensa << " de defensa." << endl;
}

#endif
