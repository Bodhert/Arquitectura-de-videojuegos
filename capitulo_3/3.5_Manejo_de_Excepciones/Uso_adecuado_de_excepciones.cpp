
Textura * cargarTextura (const char *ruta) {
  FILE *entrada = NULL;
  Textura *pTextura = NULL;


  try {
    entrada = fopen(ruta, "rb");
    // Instanciar recursos locales...
    pTextura = new Textura(/*..., ...*/);
    leerTextura(entrada, pTextura);

  }
  catch (...) { // Liberar memoria ante un error.
    delete pTextura;
    pTexture = NULL;
  }


fclose(entrada);
return pTextura;

}

/*
  Como se puede apreciar, en la función cargarTextura se reserva memoria para el ma-
  nejador del archivo y para el propio objeto de tipo textura. Si se generase una excepción
  dentro del bloque try, entonces se ejecutaría el bloque catch genérico que se encarga de
  liberar los dos recursos previamente mencionados. Así mismo, todos los recursos locales
  de la propia función se destruirán tras salir de la misma.
*/
