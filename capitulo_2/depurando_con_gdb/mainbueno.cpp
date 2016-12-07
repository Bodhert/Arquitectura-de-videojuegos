#include <iostream>
using namespace std;
class Test {
  int _value;
public:
  void setValue(int a) { _value = a; }
  int getValue() { return _value; }
};
float functionB(string str1, Test* t) {
  cout << "Function B: " << str1 << ", " << t->getValue() << endl;
  return 3.14;
}
int functionA(int a) {
  cout << "Function A: " << a << endl;
  Test* test = new Test(); 
  test->setValue(15);
  cout << "Return B: " << functionB("Hi", test) << endl;
  return 5;
}
int main() {
  cout << "Main start" << endl;
  cout << "Return A: " << functionA(24) << endl;
  return 0;
}
