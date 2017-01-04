#include <iostream>
#include "Vehiculo.cpp"
using namespace std;

class Coche : public Vehiculo {
  int _PMA;

public:
  void setPMA (int PMA) {_PMA = PMA;}
  int getPMA () const {return _PMA;}

  void mostrar () const {
    cout << "Ruedas: " << getRuedas() << endl;
    cout << "Pasajeros: " << getPasajeros() << endl;
    cout << "PMA: " << _PMA << endl;

  }
};

/*
  La palabra reservada public delante de Vehículo determina el tipo de acceso. 
  En este caso concreto, el uso de public implica que todos los miembros públicos
  de la clase base serán también miembros públicos de la clase derivada. En otras 
  palabras, el efecto que se produce equivale a que los miembros públicos de 
  Vehículo se hubieran declarado dentro de Coche. Sin embargo, desde Coche
  no es posible acceder a los miembros privados de Vehículo, como por ejemplo
  a la variable _ruedas.
  El caso contrario a la herencia pública es la herencia privada. En este caso,
  cuando la clase base se hereda con private, entonces todos los miembros 
  públicos de la clase base se convierten en privados en la clase derivada
*/
