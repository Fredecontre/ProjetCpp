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
  Terre terre; //Initialisation Terre
  EcosystemeTerrestre EcoTerrestre(&terre); //Initialisation Ecosystemes
  EcosystemeMarin EcoMarin(&terre);

  for(int i =0 ; i< 8 ; i++){
    Humain hum(&terre);
   
  }
  Humain hum1(&terre);
  Humain hum2(&terre);

  
  
  REQUIRE(hum1==hum2);
  REQUIRE(hum1.getNbHumains()==10);
  REQUIRE((terre.getEtresVivants()).size()==10); //Vérifier qu'on a bien 10 etres vivants dans le vector EtresVivants de la Terre.

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

  REQUIRE(Vache::getNbVaches()==2);

  terre.gestionTemps(&EcoMarin,&EcoTerrestre);
  terre.gestionTemps(&EcoMarin,&EcoTerrestre);

  cout<<vache2;
  

  REQUIRE(vache2.getAge()==20);
  
}

TEST_CASE("Test coniferes")
{

  Terre terre; //Initialisation Terre
  EcosystemeTerrestre EcoTerrestre(&terre); //Initialisation Ecosystemes
  EcosystemeMarin EcoMarin(&terre);

  for(int i = 0 ; i< 5 ; i++){
    Conifere conif(&terre);
   
  }
  Conifere conif1(&terre);
  Conifere conif2(&terre);

  REQUIRE((terre.getEtresVivants()).size()==7); //Vérifier qu'on a bien 7 etres vivants dans le vector EtresVivants de la Terre.

  
  
  REQUIRE(conif1==conif2);

  terre.gestionTemps(&EcoMarin,&EcoTerrestre);
  terre.gestionTemps(&EcoMarin,&EcoTerrestre);
  terre.gestionTemps(&EcoMarin,&EcoTerrestre);

  cout<<conif1;


  REQUIRE(conif1.getAge()==30);
  
}

TEST_CASE("Test algues")
{
  Terre terre; //Initialisation Terre
  EcosystemeTerrestre EcoTerrestre(&terre); //Initialisation Ecosystemes
  EcosystemeMarin EcoMarin(&terre);

  for(int i = 0 ; i< 10 ; i++){
    Algue algue(&terre);
   
  }
  Algue algue1(&terre);
  Algue algue2(&terre);

  REQUIRE((terre.getEtresVivants()).size()==12); //Vérifier qu'on a bien 12 etres vivants dans le vector EtresVivants de la Terre.

  
  
  REQUIRE(algue1==algue2);


  cout<<algue1;


  REQUIRE(algue1.getAge()==0);
  
}

TEST_CASE("Test écosystèmes")
{
  Terre terre; //Initialisation Terre
  EcosystemeTerrestre EcoTerrestre(&terre); //Initialisation Ecosystemes
  EcosystemeMarin EcoMarin(&terre);

  /* Création des êtres vivants pour l'écosystème*/
   //for(int i = 0 ; i< 10 ; i++){
    //Algue algue(&terre);
    
   
   
   
  //}
  Algue algue(&terre);
  Conifere conif(&terre);
  Humain hum(&terre);
  Vache vache(&terre);

  terre.gestionTemps(&EcoMarin,&EcoTerrestre);

  //cout << EcoTerrestre.getSanteEcosysteme() << endl;


}

