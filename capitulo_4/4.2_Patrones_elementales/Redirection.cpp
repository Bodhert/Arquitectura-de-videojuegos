class Printer {
  void print(Document d) {
    //...
  }
}
  class PrinterManager {
    Printer p;
    void print(Document d) {
      p.print(d);
      //...
    }
  }
    main() {
      Document d;
      PrinterManager m;
      m.print(d);
    }

/*
  El método print() es el mismo en términos del trabajo que hay que realizar de ca-
  ra al cliente, es decir, al usuario de PrinterManager . Ambos imprimen un documento y
  aunque están definidos en diferentes tipos, el diseño nos apunta a que el resultado es un
  documento impreso. Por ello, cuando un objeto invoca el «mismo» método de otro está
  redirigiendo su trabajo a otra instancia para que lo haga por él.
 */
