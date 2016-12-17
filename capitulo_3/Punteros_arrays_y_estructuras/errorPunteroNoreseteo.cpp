#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main () {
  char s[100];
  char *p;
  p = s; // mover esta linea dentro del bucle para que se siempre apunte al principio de s
  do {
    cout << "Introduzca una cadena... ";
    fgets(p, 100, stdin);
    while (*p)
      cout << *p++ << " ";
    
    cout << endl;
  }while (strcmp(s, "fin"));
  return 0;
}
