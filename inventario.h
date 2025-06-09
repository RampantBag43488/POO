#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "item.h"


class Inventario {
private:
    int espaciosTotales;
    vector<Item*> Items;

public:
    Inventario(int espacios = 10);

    void agregarItem(Item* item);
    void eliminarItem(string nombre);
    void verItems();
    Item* buscarItem(string nombre);
};

Inventario::Inventario(int espacios) : espaciosTotales(espacios) {}

void Inventario::agregarItem(Item* item) {
    if ((int)Items.size() < espaciosTotales) {
        Items.push_back(item);
    } else {
        cout << "Inventario lleno." << endl;
    }
}

void Inventario::eliminarItem(string nombre) {
    for (auto i = Items.begin(); i != Items.end(); ++i) {
        if ((*i)->getNombre() == nombre) {
            delete *i;
            Items.erase(i);
            break;
        }
    }
}

void Inventario::verItems() {
    for (Item* item : Items) {
        item->verItem();
    }
}

Item* Inventario::buscarItem(string nombre) {
    for (Item* item : Items) {
        if (item->getNombre() == nombre) {
            return item;
        }
    }
    cout << "No ingreso el nombre bien." << endl;
    return nullptr;
}

#endif


