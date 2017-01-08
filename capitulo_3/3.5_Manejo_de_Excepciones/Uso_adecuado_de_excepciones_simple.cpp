unique_ptr<Textura> cargarTextura (const char *ruta) {
  FilePtr entrada(ruta, "rb");
  // Instanciar recursos locales...
  unique_ptr<Textura> pTextura(new Textura(/*..., ...*/));
  leerTextura(entrada, pTextura);
  return pTextura;
}

/*
  En el caso del puntero a la textura, es posible aplicar una solución más sencilla para
  todos los punteros: el uso de la plantilla unique_ptr. Dicha clase forma parte del estándar
  de 2011 de C++ y permite plantear un enfoque similar al del anterior manejador pero
  con punteros en lugar de con ficheros. Básicamente, cuando un objeto de dicha clase se
  destruye, entonces el puntero asociado también se libera correctamente.
 */
