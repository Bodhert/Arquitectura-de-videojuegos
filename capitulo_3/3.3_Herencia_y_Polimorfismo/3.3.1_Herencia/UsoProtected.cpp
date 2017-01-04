#include <iostream>
using namespace std;
class Vehiculo {
protected:
  int _ruedas;
  // Accesibles en Coche.
  int _pasajeros;
  // ...
};
class Coche : protected Vehiculo {
  int _PMA;
public:
  // ...
  void mostrar () const {
    cout << "Ruedas: " << _ruedas << endl;
    cout << "Pasajeros: " << _pasajeros << endl;
    cout << "PMA: " << _PMA << endl;
  }
};

/*
  Si un miembrose declara como protegido, dicho miembro no es accesible por elementos que no sean
  miembros de la clase salvo en una excepción. Dicha excepción consiste en heredar un
  miembro protegido, hecho que marca la diferencia entre private y protected. En esencia,
  los miembros protegidos de la clase base se convierten en miembros protegidos de la clase
  derivada. Desde otro punto de vista, los miembros protegidos son miembros privados de
  una clase base pero con la posibilidad de heredarlos y acceder a ellos por parte de una
  clase derivada

  Otro caso particular que resulta relevante comentar se da cuando una clase base se
  hereda como privada. En este caso, los miembros protegidos se heredan como miembros
  privados en la clase protegida.
  Si una clase base se hereda como protegida mediante el modificador de acceso protec-
  ted, entonces todos los miembros públicos y protegidos de dicha clase se heredan como
  miembros protegidos en la clase derivada.
*/
