/*
 *
 * Proyecto inventario clase Herramienta
 * Inaki Mancera Llano
 * A01708827
 * 12/06/2025
 * version: 1
 * Esta clase defina objeto de tipo Item que contiene la clase heredada
 * Herramienta.
 */

#ifndef HERRAMIENTA_H
#define HERRAMIENTA_H

#include "item.h"

//Declaracion del objeto herramienta que hereda de Item
class Herramienta : public Item {

//Variables de instancia del objeto
private:
    int Dano;

//Metodos del objeto
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

/**
 * verItem muestra la informacion general de la herramienta en cadena de string.
 *
 * concatena todos los valores de los atributos en un string para ser impreso
 *
 * @param
 * @return imprime un string con los valores y texto concatenado.
 */
void Herramienta::verItem(){
    cout << "\nLa herramienta " << Nombre << " tiene las siguintes caracteristicas: " << endl;
    cout << "No es stackeable." << endl;
    cout << "Tiene durabilidad." << endl;
    cout << "Inflinje " << Dano << " dano." << endl;
}

#endif
