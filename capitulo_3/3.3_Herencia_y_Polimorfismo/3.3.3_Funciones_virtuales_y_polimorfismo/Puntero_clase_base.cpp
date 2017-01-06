
#include "Coche.cpp"

int main () {
  Vehiculo *v; // Puntero a objeto de tipo vehículo.
  Coche c;
  // Objeto de tipo coche.
  c.setRuedas(4);
  c.setPasajeros(7);
  c.setPMA(1885);
  // Se establece el estado de c.
  v = &c;
  cout << "Pasajeros: " << v->getPasajeros() << endl;
  // v apunta a un objeto de tipo coche.
  return 0;
}
