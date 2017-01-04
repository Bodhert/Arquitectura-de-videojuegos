#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class A {
  char *_valor;
public:
  A() {_valor = 0;}
  A(const A &obj); // Constructor de copia.
  ~A() {if(_valor) delete [] _valor;
    cout << "Liberando..." << endl;}

  void mostrar () const {cout << _valor << endl;}
  void set (char *valor);
};

A::A(const A &obj) {
  _valor = new char[strlen(obj._valor) + 1];
  strcpy(_valor, obj._valor);
}

void A::set (char *valor) {
  delete [] _valor;
  _valor = new char[strlen(valor) + 1];
  strcpy(_valor, valor);
}

A& A::operator= (const A &obj) {
  if (strlen(obj._valor) > strlen(_valor)) {
    delete [] _valor;
    _valor = new char[strlen(obj._valor) + 1];
  }
  strcpy(_valor, obj._valor);
  return * this;
}


/*
  El constructor de copia se define entre las líneas  18  y  21  , reservando una nueva región
  de memoria para el contenido
  de _valor y copiando el mismo en la variable miembro. Por
  otra parte, las líneas  23-26 muestran la implementación de la función set, que modifica el
  -contenido de dicha variable miembro.

  lineas 29 - 36 
  En la función anterior se comprueba si la variable ✄ miembro tiene suficiente memoria
  para albergar el objeto pasado como parámetro (línea ✂ 2 ✁ ). Si no es así, libera memoria y
  reserva la que sea necesaria para, posteriormente, devolver la copia de manera adecuada.
*/


