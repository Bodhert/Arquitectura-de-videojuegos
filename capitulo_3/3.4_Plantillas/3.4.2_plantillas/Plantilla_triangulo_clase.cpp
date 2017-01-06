#include <iostream>
using namespace std;

template<class T> // Tipo general T.
class Triangle {
public:
  Triangle (const T &v1, const T &v2, const T &v3):
    _v1(v1), _v2(v2), _v3(v3) {}
  ~Triangle () {}
  T getV1 () const { return _v1; }
  T getV2 () const { return _v2; }
  T getV3 () const { return _v3; }
  
private:
  T _v1, _v2, _v3;
};

class Vec2 {
public:
  Vec2 (int x, int y): _x(x), _y(y) {}
  ~Vec2 () {}
  int getX () const { return _x; }
  int getY () const { return _y; }
private:
  int _x, _y;
};

int main () {
  Vec2 p1(2, 7), p2(3, 4), p3(7, 10);
  Triangle<Vec2> t(p1, p2, p3); // Instancia de la plantilla.
  cout << "V1: [" << t.getV1().getX() << ", "
       << t.getV1().getY() << "]" << endl;
  return 0;
}
/*
  Como se puede apreciar, se ha definido una clase Triángulo que se puede utilizar
  para almacenar cualquier tipo de datos. En este ejemplo, se ha instanciado un triángulo
  con elementos del tipo Vec2, que representan valores en el espacio bidimensional. Para
  ello, se ha utilizado la palabra clave template para completar la definición de la clase
  Triángulo, permitiendo el manejo de tipos genéricos T.
*/
