#include <iostream>
using namespace std;

class A {
  int _valor;
public:

  A(int valor): _valor(valor) {
    cout << "Construyendo..." << endl;
  }

  ~A() {
    cout << "Destruyendo..." << endl;
  }


  int getValor () const {
    return _valor;
  }

};

void mostrar (A a) {
  cout << a.getValor() << endl;
}

int main () {
  A a(7);
  mostrar(a);
  return 0;
}
