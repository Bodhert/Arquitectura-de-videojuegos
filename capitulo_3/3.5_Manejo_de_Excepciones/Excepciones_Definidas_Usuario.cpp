#include <iostream>
using namespace std;

class MiExcepcion {
  const string &_razon;
  
public:
  MiExcepcion (const string &razon): _razon(razon) {}
  const string &getRazon () const {return _razon;}
};

int main () {
  int valor;
  const string &r = "Valor introducido incorrecto.";
  
  try {
    cout << "Introduzca valor entre 1 y 10...";
    cin >> valor;
    
    if ((valor < 1) || (valor > 10)) {
      throw MiExcepcion(r);
    }
  }
  catch (MiExcepcion &e) {
    cerr << e.getRazon() << endl;
  }
  
  return 0;
}

/*
  En particular, el código define una excepción general en las líneas  4-10  mediante la
  definición de la clase MiExcepcion, que tiene como variable miembro una cadena de texto
  que se utilizará para indicar la razón de la excepción.
  En la función main, se lanza una
 
  instancia de dicha excepción, definida en la línea 21  , cuando el usuario introduce un valor
  numérico  que no esté en el rango [1, 10]. Posteriormente, dicha excepción se captura en
  las líneas  24-26  .
 */
