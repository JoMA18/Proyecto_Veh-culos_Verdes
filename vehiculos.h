// Proyecto de Vehiculos Verdes.
// Clase Vehiculos donde se encapsula la herencia, polimorfismo
// y clases abstractas


#ifndef VEHICULOS_H_
#define VEHICULOS_H_

#include <iostream>

#include <string>

using namespace std;

// Clase Padre - VEHICULO
// Esta clase es abstracta y define los vehículos
class Vehiculo {
protected:
    string matricula;
    string tipo;

public:
    // Se implementa el método de sobrecarga
    Vehiculo() : matricula(""), tipo("") {} // Constructor por defecto
    Vehiculo(string m, string t) : matricula(m), tipo(t) {} // Constructor 
    //con parámetros

    virtual string Info() = 0; // Método virtual puro, hace de Vehiculo 
    //una clase abstracta
    string get_matricula() {return matricula;}
    string get_tipo() {return tipo;}
};



// Clase Hija - BICI
// Esta clase hereda de Vehiculo 
class Bicicleta : public Vehiculo {
private:
    string color;
    string tamaño;

public:
    Bicicleta(): color(""), tamaño("") {}
    Bicicleta(string m, string t, string c, string tz)
        : Vehiculo(m, t), color(c), tamaño(tz) {}

    string Info(); // Método que devuelve información de la bicicleta, brinda 
};  //Se usa la sobreescritura para cambiar el comportamiento del método Info 
    //de la clase padre

/*Metodo Bicicleta*/
string Bicicleta::Info() {
    return "Bicicleta - Matricula: " + matricula + ", Tipo: " + tipo +
           ", Color: " + color + ", Tamaño: " + tamaño + "\n";
}

// Clase Hija - PATIN
// Esta clase hereda de Vehiculo 
class Patin : public Vehiculo {
private:
    string marca;

public:
    Patin() : marca("") {}
    Patin(string m, string t, string mar)
        : Vehiculo(m, t), marca(mar) {}

    string Info();
};

string Patin::Info() {
    return "Patin - Matricula: " + matricula + ", Tipo: " + tipo +
           ", Marca: " + marca + "\n";
}

// Clase patineta - Patineta
// Esta clase hereda de Vehiculo
class Patineta : public Vehiculo {
private:
    string tamaño;

public:
    Patineta() : tamaño("") {}
    Patineta(string m, string t, string tz)
        : Vehiculo(m, t), tamaño(tz) {}

    string Info();
};

string Patineta::Info() {
    return "Patineta - Matricula: " + matricula + ", Tipo: " + tipo +
           ", Tamaño: " + tamaño + "\n";
}

#endif // VEHICULOS_H_
