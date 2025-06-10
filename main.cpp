#include <iostream>   

#include "vehiculos.h" 
#include "empresa.h"

using namespace std;

int main() {

  
  Empresa em1;
  em1.creaVehiculo();
  em1.muestraVehiculo();
  cout << "---------------------------------------------------\n\n\n" << endl;

  em1.agregaBici("07", "bicicleta", "Rojo", "Chica");
  em1.muestraVehiculo("bicicleta");
  em1.agregaPatin("09", "patin", "Fila");
  em1.muestraVehiculo("patin");
  em1.agregaPatineta("12", "patineta", "Chica");
  em1.muestraVehiculo("patineta");

  return 0;
}
