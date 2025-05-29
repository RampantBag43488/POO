#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <iostream>
using namespace std;


class Item{
    private:
        string Nombre;
        bool Stack;
        bool Durabilidad;

    public:
        Item();
        Item(string nom, bool st, bool Dura);
        void setNombre(string n);
        //virtual void setStack(bool s);
        void setDurabilidad(bool d);
        string getNombre();
        virtual int getStack();
        int getDurabilidad();
}

Item::Item(){
    Nombre = "Item random";
    Stack = 0;
    Durabilidad = 0;
}

Item::Item(string nom, bool st, bool Dura){
    Nombre = nom;
    Stack = st;
    Durabilidad = Dura;
}

void Item::setNombre(string n){
    Nombre = n;
}

/*void Item::setStack(bool s){
    Stack = s;
}*/

void Item::setDurabilidad(bool d){
    Durabilidad = d;
}

string Item::getNombre(){
    return Nombre;
}

virtual int Item::getStack(){
    return Stack;
}

int Item::getDurabilidad(){
    return Durabilidad;
}



class Herramienta : public Item{
    private:
        int Dano;

    public:
        Herramienta();
        Herramienta(int da);
        void setDano(int d);
        int getDano();
}

Herramienta::Herramienta(){
    Dano = 1;
}

Herramienta::Herramienta(int da){
    Dano = da;
}

class Armadura : public Item{
    private:
        string Tipo;
        int Defensa;

    public:
        Armadura();
        Armadura(string t,int de);
        void setTipo(string t);
        string getTipo();
        void setDefensa(int d);
        int getDefensa();
}

Armadura::Armadura(){
    Tipo = "Peto";
    Defensa = 30;
}

Armadura::Armadura(string t,int de){
    Tipo = t;
    Defensa = de;
}

void Armadura::setTipo(string t){
    Tipo = t;
}

string Armadura::getTipo(){
    return 
}



