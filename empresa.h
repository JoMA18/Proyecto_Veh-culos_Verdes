#ifndef EMPRESA_H_
#define EMPRESA_H_

#include <string>
#include <iostream>
#include "vehiculo.h" 
using namespace std;


// Empresa
class Empresa {
private:
    vector<Vehiculo*> agencia;
    string nombre;

public:
    Empresa(string n) : nombre(n) {}

    void creaVehiculo() {
        agregaBici("01", "Ruta", "Rojo", "Chica");
        agregaPatin("02", "Inline", "Fila");
        agregaPatineta("03", "Clásica", "Grande");
    }

    void muestraVehiculo() {
        for (int i = 0; i < agencia.size(); i++) {
            cout << agencia[i]->Info() << endl;
        }
    }

    void muestraVehiculo(string tipoBuscado) {
        for (int i = 0; i < agencia.size(); i++) {
            if (agencia[i]->Info().find(tipoBuscado) != string::npos)
                cout << agencia[i]->Info() << endl;
        }
    }

    void agregaBici(string matricula, string tipo, string color, string tamaño) {
        agencia.push_back(new Bicicleta(matricula, tipo, color, tamaño));
    }

    void agregaPatin(string matricula, string tipo, string marca) {
        agencia.push_back(new Patin(matricula, tipo, marca));
    }

    void agregaPatineta(string matricula, string tipo, string tamaño) {
        agencia.push_back(new Patineta(matricula, tipo, tamaño));
    }
};
