int main () {
int edad, *p;
edad = 23;
*p = edad; // p?
return 0;
}
/*
En el listado que se muestra , p contiene una
dirección desconocida debido a que nunca fue definida. En otras palabras, no es posible
conocer dónde se ha escrito el valor contenido en edad.
*/
