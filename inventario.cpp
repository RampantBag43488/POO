#include "inventario.h" 
#include "armadura.h"
#include "herramienta.h"
#include "consumible.h"
#include "bloque.h"

void menu() {
    cout << "\n--- MENU DEL INVENTARIO ---\n";
    cout << "1. Agregar Herramienta\n";
    cout << "2. Agregar Armadura\n";
    cout << "3. Agregar Consumible\n";
    cout << "4. Agregar Bloque\n";
    cout << "5. Ver todos los items\n";
    cout << "6. Buscar item por nombre\n";
    cout << "7. Eliminar item por nombre\n";
    cout << "8. Salir\n";
    cout << "Elige una opcion: ";
}

int main() {
    Inventario inv(20);  // Inventario con 20 espacios
    int opcion = 0;

    while (opcion != 8) {
        menu();
        cin >> opcion;

        string nombre;
        int valor1, valor2;
        bool boolTp;
        bool stack;

        switch (opcion) {
            case 1: {
                cin.ignore();
                cout << "Nombre de la herramienta: ";
                getline(cin,nombre);
                cout << "Dano (numero entero): ";
                cin >> valor1;
                Item* h = new Herramienta(nombre, valor1);
                inv.agregarItem(h);
                break;
            }
            case 2: {
                cin.ignore();
                cout << "Nombre de la armadura: ";
                getline(cin,nombre);
                cout << "Tipo ('Casco', 'Peto', 'Botas' o 'Pantalones'): ";
                string tipo;
                cin >> tipo;
                cout << "Defensa (numero entero): ";
                cin >> valor1;
                Item* a = new Armadura(nombre, tipo, valor1);
                inv.agregarItem(a);
                break;
            }
            case 3: {
                cin.ignore();
                cout << "Nombre del consumible: ";
                getline(cin,nombre);
                cout << "Vida (numero entero): ";
                cin >> valor1;
                cout << "Comida (numero entero): ";
                cin >> valor2;
                cout << "Es stackeable? (1 = si, 0 = no): ";
                cin >> stack;
                Item* c = new Consumible(nombre, valor1, valor2, stack);
                inv.agregarItem(c);
                break;
            }
            case 4: {
                cin.ignore();
                cout << "Nombre del bloque: ";
                getline(cin,nombre);
                cout << "Tipo (1 = Construccion, 0 = Naturaleza): ";
                cin >> boolTp;
                cout << "Es stackeable? (1 = si, 0 = no): ";
                cin >> stack;
                Item* b = new Bloque(nombre, boolTp, stack);
                inv.agregarItem(b);
                break;
            }
            case 5: {
                cout << "\n--- INVENTARIO ---\n";
                inv.verItems();
                break;
            }
            case 6: {
                cin.ignore();
                cout << "Nombre del item a buscar: ";
                getline(cin,nombre);
                Item* encontrado = inv.buscarItem(nombre);
                if (encontrado) {
                    cout << "Item encontrado: \n";
                    encontrado->verItem();
                } else {
                    cout << "Item no encontrado.\n";
                }
                break;
            }
            case 7: {
                cin.ignore();
                cout << "Nombre del item a eliminar: ";
                getline(cin,nombre);
                inv.eliminarItem(nombre);
                break;
            }
            case 8:
                cout << "Saliendo del sistema...\n";
                break;
            default:
                cout << "Opción inválida.\n";
        }
    }

    return 0;
}
