#ifndef VEHICULOS_H_
#define VEHICULOS_H_

#include <iostream>

#include <string>

using namespace std;

// Clase Madre
class Vehiculo {
protected:
    string matricula;
    string tipo;

public:
    Vehiculo() : matricula(""), tipo("") {}
    Vehiculo(string m, string t) : matricula(m), tipo(t) {}

    virtual string Info() {
        return "Vehiculo - Matricula: " + matricula + ", Tipo: " + tipo + "\n";
    }
    string get_tipo() {return tipo;}
};



// Clase Hija - BICI
class Bicicleta : public Vehiculo {
private:
    string color;
    string tamaño;

public:
    Bicicleta(): color(""), tamaño("") {}
    Bicicleta(string m, string t, string c, string tz)
        : Vehiculo(m, t), color(c), tamaño(tz) {}

    string Info() {
        return "Bicicleta - Matricula: " + matricula + ", Tipo: " + tipo +
               ", Color: " + color + ", Tamaño: " + tamaño + "\n";
    }
};

// Clase Hija - PATIN
class Patin : public Vehiculo {
private:
    string marca;

public:
    Patin() : marca("") {}
    Patin(string m, string t, string mar)
        : Vehiculo(m, t), marca(mar) {}

    string Info() {
        return "Patin - Matricula: " + matricula + ", Tipo: " + 
        tipo + ", Marca: " + marca + "\n";
    }
};

// Clase patineta - Patineta
class Patineta : public Vehiculo {
private:
    string tamaño;

public:
    Patineta() : tamaño("") {}
    Patineta(string m, string t, string tz)
        : Vehiculo(m, t), tamaño(tz) {}

    string Info() {
        return "Patineta - Matricula: " + matricula + ", Tipo: " + 
        tipo + ", Tamaño: " + tamaño + "\n";
    }
};

#endif
