#include <iostream>
using namespace std;


void swap (int &a, int &b);


int main () {
  int x = 7, y = 13;
  cout << "[" << x << ", " << y << "]" << endl; // Imprime [7, 13].
  swap(x, y);
  cout << "[" << x << ", " << y << "]" << endl; // Imprime [13, 7].
  return 0;
}


void swap (int &a, int &b) {
  int aux;
  aux = a; // Guarda el valor al que referencia a.
  a = b;   // Asigna el valor de b a a.
  b = aux; // Asigna el valor de aux a b.
}
