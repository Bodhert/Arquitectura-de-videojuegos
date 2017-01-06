#include "Coche.cpp"

int main () {
  Vehiculo *v; // Puntero a objeto de tipo vehículo.
  Coche c; // Objeto de tipo coche.

  c.setRuedas(4);   // Se establece el estado de c.
  c.setPasajeros(7);
  c.setPMA(1885);


  v = &c;  // v apunta a un objeto de tipo coche.

  cout << v->getPMA() << endl; // ERROR en tiempo de compilación.

  cout << ((Coche*)v)->getPMA() << endl; // NO recomendable.

  cout << static_cast<Coche*>(v)->getPMA() << endl; // Estilo C++.

  return 0;

}
