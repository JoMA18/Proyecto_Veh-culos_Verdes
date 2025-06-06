#ifndef VEHICULOS_H_
#define VEHICULOS_H_

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Clase Madre
class Vehiculo {
protected:
    string matricula;
    string tipo;

public:
    Vehiculo() {}
    Vehiculo(string m, string t) : matricula(m), tipo(t) {}

    virtual string Info() {
        return "Vehiculo - Matricula: " + matricula + ", Tipo: " + tipo;
    }
    string get_tipo() {return tipo;}
};



// Clase Hija - BICI
class Bicicleta : public Vehiculo {
private:
    string color;
    string tamaño;

public:
    Bicicleta() {}
    Bicicleta(string m, string t, string c, string tz)
        : Vehiculo(m, t), color(c), tamaño(tz) {}

    string Info() {
        return "Bicicleta - Matricula: " + matricula + ", Tipo: " + tipo +
               ", Color: " + color + ", Tamaño: " + tamaño;
    }
};

// Clase Hija - PATIN
class Patin : public Vehiculo {
private:
    string marca;

public:
    Patin() {}
    Patin(string m, string t, string mar)
        : Vehiculo(m, t), marca(mar) {}

    string Info() {
        return "Patin - Matricula: " + matricula + ", Tipo: " + tipo + ", Marca: " + marca;
    }
};

// Clase patineta - Patineta
class Patineta : public Vehiculo {
private:
    string tamaño;

public:
    Patineta() {}
    Patineta(string m, string t, string tz)
        : Vehiculo(m, t), tamaño(tz) {}

    string Info() {
        return "Patineta - Matricula: " + matricula + ", Tipo: " + tipo + ", Tamaño: " + tamaño;
    }
};

#endif
