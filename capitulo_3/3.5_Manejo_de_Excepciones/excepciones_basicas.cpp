#include <iostream>
#include <exception>
using namespace std;
int main () {
  try {
    int *array = new int[1000000];
  }
  catch (bad_alloc &e) {
    cerr << "Error al reservar memoria." << endl;
  }
  return 0;
}
