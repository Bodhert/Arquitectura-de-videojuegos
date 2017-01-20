class B {
  void y() {
    // ...
  }
}
  class C {
    B b;
    void z() {
      b.y();
    }
  }
    class A {
      C c;
      void x() {
	c.z();
	// ...
      }
    }
      
      main () {
	A a;
	a.x();
      }
