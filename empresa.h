
#ifndef EMPRESA_H_
#define EMPRESA_H_

#include <string>
#include <iostream>
#include "vehiculos.h" // uso de la biblioteca de vehiculos.h
using namespace std;


// Clase Empresa

const int MAX = 1000; // Definición del tamaño máximo de la lista de vehículos

class Empresa {
private:
    Vehiculo * emp[MAX];
    int lista;
    string nombre;

public: //Definición de los métodos de la clase Empresa
    Empresa()  : nombre("Empresa de Vehiculos Verdes"), lista(0){}
    Empresa(string n) : nombre(n), lista(0) {}

    void creaVehiculo() { // new se usa para crear objeto en tiempo de ejeución
        emp[lista] = new Bicicleta("01", "bicicleta", "Rojo", "Chica");
        lista++;
        emp[lista] = new Patin("02", "patin", "Fila");
        lista++;
        emp[lista] = new Patineta("03", "patineta", "Grande");
        lista++;
    }
    string get_empresa() {return nombre;}
    void muestraVehiculo();
    void muestraVehiculoTipo(string tipoBuscado);
    void muestraVehiculoMatricula(string matriculaBuscada);
    void agregaBici(string matricula, string tipo, string color, string tamaño);
    void agregaPatin(string matricula, string tipo, string marca);
    void agregaPatineta(string matricula, string tipo, string tamaño); 
};

//Uso de polimorfismo en los metodos de la clase Empresa
void Empresa::muestraVehiculo() {
    //Se recorre la lista para llamar la función Info() de cada objeto.
    for (int i = 0; i < lista; i++) {
        cout << emp[i]->Info() << endl;
    }
}

void Empresa::muestraVehiculoTipo(string tipoBuscado) {
    //Se recorre la lista para buscar el tipo de vehiculo y mostrar su información.
    //Se usa el método get_tipo() de la clase Vehiculo para comparar el tipo buscado.
    for (int i = 0; i < lista; i++) {
        if (emp[i]->get_tipo() == tipoBuscado)
            cout << emp[i]->Info();
    }
}

void Empresa::muestraVehiculoMatricula(string matriculaBuscada) {
    //Se recorre la lista para buscar la matrícula del vehiculo y mostrar su información.
    for (int i = 0; i < lista; i++) {
        if (emp[i]->get_matricula() == matriculaBuscada)
            cout << emp[i]->Info();
    }
}

void Empresa::agregaBici(string matricula, string tipo, string color, string tamaño) {
    //Se crea un nuevo objeto Bicicleta y se agrega a la lista.
    emp[lista] = new Bicicleta(matricula, tipo, color, tamaño);
    lista++;
}

void Empresa::agregaPatin(string matricula, string tipo, string marca) {
    //Se crea un nuevo objeto Patin y se agrega a la lista.
    emp[lista] = new Patin(matricula, tipo, marca);
    lista++;
}

void Empresa::agregaPatineta(string matricula, string tipo, string tamaño) {
    //Se crea un nuevo objeto Patineta y se agrega a la lista.
    emp[lista] = new Patineta(matricula, tipo, tamaño);
    lista++;
}


#endif // EMPRESA_H_
