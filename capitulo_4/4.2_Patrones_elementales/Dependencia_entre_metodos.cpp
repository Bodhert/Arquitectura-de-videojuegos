class B {
  void y() {
    // ...
  }
}
  class A {
    B b;
    void x() {
      b.y();
      // ...
    }
  }
    
    main () {
      A a;
      a.x();
    }

/*
  method-method, es decir, «cuando un método A llama desde su implemen-
  tación a un método B». Esta relación es transitiva, es decir, no importa lo largo que sea la
  cadena de invocaciones entre un método y otro para decir que el método A depende de B.
  Por ejemplo, en el siguiente fragmento de código a.x() depende de b.y() :
 */
