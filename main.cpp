#include <iostream>   

#include "vehiculos.h" 

#include "empresa.h"

using namespace std;

int main() {


  Empresa empresa;
  empresa.creaVehiculo();
  empresa.muestraVehiculo();

  cout << "test \n\n";
  empresa.muestraVehiculo("bicicleta");

  empresa.agregaBici("07", "bicicleta", "Rojo", "Chica");
  empresa.muestraVehiculo("bicicleta");
  empresa.agregaPatin("09", "patin", "Fila");
  empresa.muestraVehiculo("patin");
  empresa.agregaPatineta("12", "patineta", "Chica");
  empresa.muestraVehiculo("patineta");
  
  cout << "test \n\n";
}
