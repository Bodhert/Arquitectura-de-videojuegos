void Mesh::cargar (const char *archivo) {
  try {
    Stream stream(archivo); // Puede generar un error de I/O.
    cargar(stream);
  }
  catch (MiExcepcionIO &e) {
    // Gestionar error I/O.
  }
  catch (MiExcepcionMatematica & e) {
    // Gestionar error matemático.
  }
  catch (MiExcepcion &e) {
    // Gestionar otro error...
  }
  catch (...) {
    // Cualquier otro tipo de error...
  }
}
