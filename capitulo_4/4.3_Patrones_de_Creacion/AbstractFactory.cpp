Game game;
SoldierFactory* factory;

if (isSelectedMan) {
  factory = new ManFactory();
 } else {
  factory = new OrcFactory();
 }

game->createSoldiers(factory);
/* ... */


/* Game implementation */
vector<Soldier*> Game::createSoldiers(SoldierFactory* factory)
{
  vector<Solider*> soldiers; // error deberia se Soldier y no Solider
  for (int i=0; i<5; i++) {
    soldiers.push_back(factory->makeArcher());
    soldiers.push_back(factory->makeRider());
  }
  return soldiers;
}

/*
  El patrón Abstract Factory puede ser de ayuda en este tipo de situaciones en las que es
  necesario crear diferentes tipos de objetos utilizando una jerarquía de componentes. Dada
  la complejidad que puede llegar a tener la creación de una instancia es deseable aislar la
  forma en que se construye cada clase de objeto.

  recomienda crear las siguientes entidades:
  Factoría abstracta que defina una interfaz para que los clientes puedan crear los
  distintos tipos de objetos.
  Factorías concretas que realmente crean las instancias finales.

  Como puede observarse, la clase Game simplemente invoca los métodos de la factoría
  abstracta. Por ello, createSoldier() funciona exactamente igual para cualquier tipo de
  factoría concreta (de hombres o de orcos).
  
  El patrón Abstract Factory puede ser aplicable cuando:
  el sistema de creación de instancias debe aislarse.
  es necesaria la creación de varias instancias de objetos para tener el sistema confi-
  gurado.
  la creación de las instancias implican la imposición de restricciones y otras particu-
  laridades propias de los objetos que se construyen.
  los productos que se deben fabricar en las factorías no cambian excesivamente en
  el tiempo. Añadir nuevos productos implica añadir métodos a todas las factorías
  ya creadas, por lo que no es un patrón escalable y que se adapte bien al cambio.
  En nuestro ejemplo, si quisiéramos añadir un nuevo tipo de soldado deberíamos
  modificar la factoría abstracta y las concretas. Por ello, es recomendable que se
  aplique este patrón sobre diseños con un cierto grado de estabilidad.

*/
