#include "etrevivant.h"
#include "terre.h"

size_t EtreVivant::nbEtresVivants = 100;
size_t Faune::nbFaune = 50;

size_t Humain::nbHumains = 25;
size_t Humain::niveauTechnologique = 2;  //On est entre 1 et 5


size_t Flore::nbFlore = 50;

size_t Vache::nbVaches = 25;
size_t Conifere::nbConiferes = 25;
size_t Algue::nbAlgues = 25;


EtreVivant::EtreVivant(Terre* t):age(0),id(nbEtresVivants++){ //terre.EtresVivants.push_back(this);
   t->ajoutEtreVivant(this);
}

void Humain::impactEcologique(){

   pollution = niveauTechnologique*2;  //La technologie pollue beacoup -> d'où le *2

   impactEcolo =  - (pollution + consommationEau);
}

void Vache::impactEcologique(){

   pollution = empreinteMethane;

   impactEcolo = - (pollution  + consommationEau);
}

void Conifere::impactEcologique(){

   impactEcolo = 1000*O2;
}

void Algue::impactEcologique(){


   impactEcolo =10000*O2;
}
