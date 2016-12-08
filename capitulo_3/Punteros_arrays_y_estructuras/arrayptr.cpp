#include <iostream>
using namespace std;
int main () {
  char s[20] = "hola mundo";
  char *p;
  int i;

  p = s;
  cout << p << endl;
  cout << s << endl;
  // for (p = s, i = 0; p[i]; i++)
  //   p[i] = toupper(p[i]);
  
  cout << s << endl;
  return 0;
}
