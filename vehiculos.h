#include <iostream>
#include <string>

using namespace std;

/*Clase madre*/ 
class Vehiculo {
protected:
    string matricula;
    string tipo;

public:
    Vehiculo(string matricula, string tipo) : matricula(matricula), tipo(tipo) {}
    virtual string Info() const = 0; // Método abstracto
};

/* Clases hijas 
Clase Bicicleta*/
class Bicicleta : public Vehiculo {
private:
    string color;
    string tamaño;

public:
    Bicicleta(string matricula, string tipo, string color, string tamaño) : Vehiculo(matricula, tipo), color(color), tamaño(tamaño) {}
    string Info() const override { /*sobreescritura para el metodo Info()*/
        return "Vehículo: Bicicleta - Matricula: " + matricula + ", Tipo: " + tipo + ", Color: " + color + ", Tamaño: " + tamaño;
    }
};

/* Clase Patin */
class Patin : public Vehiculo {
private:
    string marca;

public:
    Patin(string matricula, string tipo, string marca) : Vehiculo(matricula, tipo), marca(marca) {}
    string Info() const override { /*sobreescritura para el metodo Info()*/
        return "Vehículo: Patín - Matricula: " + matricula + ", Tipo: " + tipo + ", Marca: " + marca;
    }
};

/* Clase Patineta*/
class Patineta : public Vehiculo {
private:
    string tamaño;

public:
    Patineta(string matricula, string tipo, string tamaño) : Vehiculo(matricula, tipo), tamaño(tamaño) {}
    string Info() const override { /*sobreescritura para el metodo Info()*/
        return "Vehículo: Patineta - Matricula: " + matricula + ", Tipo: " + tipo + ", Tamaño: " + tamaño;
    }
};

