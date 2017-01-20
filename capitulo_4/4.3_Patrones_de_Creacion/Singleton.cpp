/* Header */
class Ball {
protected:
  
  float _x, _y;
  static Ball* theBall_;
  
  Ball(float x, float y) : _x(x), _y(y) { };
  Ball(const Ball& ball);
  void operator=(const Ball& ball ) ;
  
public:
  static Ball& getTheBall();
  
  void move(float _x, float _y) { /*...*/ };
};

Ball& Ball::getTheBall()
{
  static Ball theBall_;
  return theBall_;
}

/*
  Singleton: se nececita que sólo exista una instancia de una clase determinada
  por diferentes motivos (prevención de errores, seguridad, etc.).
  El balón en un juego de fútbol o la entidad que representa al mundo 3D son
  ejemplos donde podría ser conveniente mantener una única instancia de este 
  tipo de objetos. Para garantizar que sólo existe una instancia de una clase
  es necesario que los clientes no puedan acceder directamente al constructor. 
  Por ello, en un singleton el constructor es, por lo menos, protected .

  se garantiza que no hay memory leak? ¿Qué sería necesario para que la implementación
  fuera thread-safe?
  R// no se garantiza que no haya memory leak debido a que no se utilizan punteros inte-
      ligenetes,
*/
