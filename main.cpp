#include <iostream>   

#include "vehiculos.h"  // uso de la biblioteca 
#include "empresa.h"

using namespace std;

int main() {
  // Definición de variables
  string nom;
  int contador= 0;


  // Ejemplo de uso de las clases Vehiculo y Empresa
  cout << "Ejemplo de empresa y registro:\n\n\n" << endl;
  cout << "Bienvenido a la Empresa de Vehiculos Verdes\n\n" << endl;
  Empresa em1;
  em1.creaVehiculo();
  em1.muestraVehiculo();

  em1.agregaBici("07", "bicicleta", "Rojo", "Chica");
  em1.muestraVehiculoTipo("bicicleta");
  em1.agregaPatin("09", "patin", "Fila");
  em1.muestraVehiculoTipo("patin");
  em1.agregaPatineta("12", "patineta", "Chica");
  em1.muestraVehiculoTipo("patineta");
  em1.muestraVehiculoMatricula("01");

  // Solicitar al usuario el nombre de la empresa y registrar 
  //vehículos verdes
  Empresa em2;
  cout << "\n\n\n Ingresa el nombre de tu empresa:";
  cin >> nom;
  em2 = Empresa(nom);
  cout << "¿Cuantos vehiculos verdes ingresaras?" << endl;
  cin >> contador;
  for (int i = 0; i < contador; i++) {
    string matricula, tipo, color, tamaño, marca;
    cout << "Ingresa la matricula del vehiculo: ";
    cin >> matricula;
    cout << "Ingresa el tipo de vehiculo: ";
    cin >> tipo;
    // Usar el tipo de vehiculo para determinar que objeto es y a cual
    // pertenece.
    if (tipo == "bicicleta") {
      cout << "Ingresa el color de la bicicleta: ";
      cin >> color;
      cout << "Ingresa el tamaño de la bicicleta: ";
      cin >> tamaño;
      em2.agregaBici(matricula, tipo, color, tamaño);
    } else if (tipo == "patin") {
      cout << "Ingresa la marca del patin: ";
      cin >> marca;
      em2.agregaPatin(matricula, tipo, marca);
    } else if (tipo == "patineta") {
      cout << "Ingresa el tamaño de la patineta: ";
      cin >> tamaño;
      em2.agregaPatineta(matricula, tipo, tamaño);
    } else {
      cout << "Tipo de vehiculo no reconocido." << endl;
    }
  }

  cout << "\n\nVehiculos registrados en la empresa " << em2.get_empresa() 
  << ":\n";
  em2.muestraVehiculo();

  return 0;
}
