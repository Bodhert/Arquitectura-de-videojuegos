int main () {
  int s[10];
  int t[10];
  int *p, *q;
  p = s;
  q = t;
  if (p < q) {
    // ...
  }
  return 0;
  
  /* No obstante, si dos punteros
     apuntan a miembros del mismo arreglo, entonces es posible compararlos.
   
  */
}
