#include <iostream>
using namespace std;
struct persona {
  string nombre;
  int edad;
};

void modificar_nombre (persona *p, const string& nuevo_nombre);

int main () {
  persona p;
  persona *q;
  p.nombre = "Luis";
  p.edad = 23;
  q = &p;
  cout << q->nombre << endl;
  modificar_nombre(q, "Sergio");
  cout << q->nombre << endl;
  return 0;
}

void modificar_nombre (persona *p, const string& nuevo_nombre) {
  p->nombre = nuevo_nombre;
}

/*
  el acceso a los campos
  de una estructura se realiza mediante el operador flecha -> en caso de acceder a ellos
  mediante un puntero, mientras que el operador punto . se utiliza cuando se accede de
  manera directa.
*/
