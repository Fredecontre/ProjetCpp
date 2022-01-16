// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "etrevivant.h"
#include "terre.h"
#include "ecosysteme.h"


#include <iostream>
#include <string>


TEST_CASE("Test humains")
{
  Terre terre;
  EcosystemeTerrestre EcoTerrestre(&terre);
  EcosystemeMarin EcoMarin(&terre);

  Humain hum1(&terre);
  Humain hum2(&terre);

  
  
  REQUIRE(hum1==hum2);

  terre.gestionTemps(&EcoMarin,&EcoTerrestre);

  cout<<hum2;

  REQUIRE(hum2.getAge()==10);
  
}

TEST_CASE("Test vaches")
{
  Terre terre;
  EcosystemeTerrestre EcoTerrestre(&terre);
  EcosystemeMarin EcoMarin(&terre);

  Vache vache1(&terre);
  Vache vache2(&terre);
  Conifere conif(&terre);

  
  
  REQUIRE(vache1==vache2);

  terre.gestionTemps(&EcoMarin,&EcoTerrestre);
  //terre.gestionTemps(&EcoMarin,&EcoTerrestre);

  cout<<to_string(EcoMarin.getSanteEcosysteme())<<endl;;

  cout<<vache2;
  

  REQUIRE(vache2.getAge()==10);
  
}


