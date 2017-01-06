template<class T>
class NodoLista {
public:
  NodoLista (T datos);
  T & getDatos ();
  NodoLista * siguiente ();
  
private:
  T _datos;
};

template<class T>
class Lista {
public:
  NodoLista<T> getCabeza ();
  void insertarFinal (T datos);
  // Resto funcionalidad...
private:
  NodoLista<T> *_cabeza;
};
/*
  está
  compuesta por dos clases generales. La primera de ellas se utilizará para los nodos de la
  lista y la segunda para especificar la funcionalidad de la propia lista
*/
