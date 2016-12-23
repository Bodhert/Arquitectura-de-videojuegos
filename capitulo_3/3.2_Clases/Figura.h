class Figura
{
public:
  Figura (double i, double j);
  ~Figura ();
  void setDim (double i, double j);
  double getX () const;
  double getY () const;


protected:
  double _x, _y;
};

/*
  const para minimizar el número
  de copias de los mismos. El rendimien-
  to mejorará considerablemente.
  Note el uso del modificador const
  renciaen las funciones de acceso getX() y getY() para in-
  formar de manera explícita al compilador de que
  dichas funciones no modifican el estado de los ob-
  jetos.
 */
