void Mesh::cargar (const char *archivo) {
  try {
    Stream stream(archivo); // Puede generar un error de I/O.
    cargar(stream);
  }
  catch (MiExcepcionIO &e) {
    if (e.datosCorruptos()) {
      // Tratar error I/O.
    }
    else {
      throw; // Se re-lanza la excepción.
    }
  }
}

/*
  re-lanzar una excepción, con el objetivo de delegar
  en una capa superior el tratamiento de la misma. El siguiente listado de código muestra
  un ejemplo en el que se delega el tratamiento del error de entrada/salida
*/
