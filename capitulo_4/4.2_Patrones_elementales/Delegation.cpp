class WheelMaker {
  Wheel makeWheel() {
    // do the wheel and return it
  }
}
  class CarMaker {
    WheelMaker w;
    Car makeCar() {
      Wheel wheel1 = w.makeWheel();
      // ... do more stuff
    }
  }
    main() {
      WheelMaker w;
      w.makeCar();
    }
/*
  En este caso, claramente fabricar una rueda no es lo mismo que fabricar un coche.
  Por ello, los métodos makeWheel() y makeCar() son completamente diferentes, por lo que
  no se puede hablar de una redirección de CarMaker en WheelMaker sino más bien de una
  delegación. El fabricante de un coche no puede tener todo el conocimiento necesario
  para crear cada componente del mismo. Sabe crear coches a partir de unas piezas básicas
  (ruedas, tornillos, etc.) pero no sabe fabricar las piezas. Por ello, delega funcionalidad en
  otros.
 */
