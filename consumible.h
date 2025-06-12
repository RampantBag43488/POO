/*
 *
 * Proyecto inventario clase Consumible
 * Inaki Mancera Llano
 * A01708827
 * 12/06/2025
 * version: 1
 * Esta clase defina objeto de tipo Item que contiene la clase heredada
 * Consumible.
 */

#ifndef CONSUMIBLE_H
#define CONSUMIBLE_H

#include "item.h"

//Declaracion del objeto consumible que hereda de Item
class Consumible : public Item {

//Variables de instancia del objeto
private:
    int Vida;
    int Comida;

//Metodos del objeto
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

/**
 * verItem muestra la informacion general del consumible en cadena de string.
 *
 * concatena todos los valores de los atributos en un string para ser impreso
 *
 * @param
 * @return imprime un string con los valores y texto concatenado.
 */
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
