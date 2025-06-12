/*
 *
 * Proyecto inventario clase Bloque
 * Inaki Mancera Llano
 * A01708827
 * 12/06/2025
 * version: 1
 * Esta clase defina objeto de tipo Item que contiene la clase heredada
 * Bloque.
 */

#ifndef BLOQUE_H
#define BLOQUE_H

#include "item.h"

//Declaracion del objeto bloque que hereda de Item
class Bloque : public Item {

//Variables de instancia del objeto
private:
    bool Tipo; // true = Construccion, false = naturaleza 

//Metodos del objeto
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

/**
 * verItem muestra la informacion general del bloque en cadena de string.
 *
 * concatena todos los valores de los atributos en un string para ser impreso
 *
 * @param
 * @return imprime un string con los valores y texto concatenado.
 */
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
