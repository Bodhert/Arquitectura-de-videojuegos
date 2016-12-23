
const int USADO = 1;
const int NO_USADO = 0;


class B;

class A {
  int _estado;

public:
  A() {_estado = NO_USADO;}
  void setEstado (int estado) {_estado = estado;}

  friend int usado (A a, B b);

};

class B {
  int _estado;

public:
  B() {_estado = NO_USADO;}
  void setEstado (int estado) {_estado = estado;}

  friend int usado (A a, B b);

};

int usado (A a, B b) {
  return (a._estado || b._estado);
}


/*
En el ejemplo, línea 30, se puede apreciar cómo la función recibe dos objetos como
parámetros. Al contrario de lo que ocurre en otros lenguajes como Java, en C++ los ob-
jetos, por defecto, se pasan por valor. Esto implica que en realidad la función recibe una
copia del objeto, en lugar del propio objeto con el que se realizó la llamada inicial. Por
tanto, los cambios realizados dentro de la función no afectan a los argumentos. Aunque el
paso de objetos es un procedimiento sencillo, en realidad se generan ciertos eventos que
pueden sorprender inicialmente
 */
