#ifndef EMPRESA_H_
#define EMPRESA_H_

#include <string>
#include <iostream>
#include "vehiculos.h" //
using namespace std;


// Empresa

const int MAX = 1000;

class Empresa {
private:
    Vehiculo * emp[MAX];
    int lista;
    string nombre;

public:
    Empresa(string n) : nombre(n), lista(0) {}
    
    void creaVehiculo() {
        agregaBici("01", "bicicleta", "Rojo", "Chica");
        agregaPatin("02", "patin", "Fila");
        agregaPatineta("03", "patineta", "Grande");
    }

    void muestraVehiculo() {
        for (int i = 0; i < lista; i++) {
            cout << emp[i]->Info() << endl;
        }
    }

    void muestraVehiculo(string tipoBuscado) {
        for (int i = 0; i < lista; i++) {
            if (emp[i]->Info().find(tipoBuscado) != string::npos)
                cout << emp[i]->Info() << endl;
        }
    }

    void agregaBici(string matricula, string tipo, string color, string tamaño) {
        emp[lista] = new Bicicleta(matricula, tipo, color, tamaño);
        lista++; 
    }

    void agregaPatin(string matricula, string tipo, string marca) {
        emp[lista] = new Patin(matricula, tipo, marca);
        lista++; 
    }

    void agregaPatineta(string matricula, string tipo, string tamaño) {
        emp[lista] = new Patineta(matricula, tipo, tamaño);
        lista++; 
    }
};

#endif
