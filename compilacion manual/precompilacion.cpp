#include <iostream>
#define SAY_HELLO "Hi, world!"
#ifdef DEFINED_IT
#warning "If you see this message, you DEFINED_IT"
#endif
using namespace std;
Code here??
int main() {
  cout << SAY_HELLO << endl;
  return 0;
  //opcion g++ -E
}
