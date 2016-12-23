#include <iostream>
using namespace std;

double &f ();

double valor = 10.0;

int main () {
  double nuevo_valor;

  cout << f() << endl;
  nuevo_valor = f();
  cout << nuevo_valor << endl;

  f() = 7.5;
  cout << f() << endl;
  cout << valor << endl;

  return 0;

}

double &f () { return valor; }
