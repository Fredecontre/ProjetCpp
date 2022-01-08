#include "etrevivant.h"

size_t EtreVivant::nbEtresVivants = 100;
size_t Faune::nbFaune = 50;
size_t Humain::nbHumains = 25;
size_t Flore::nbFlore = 50;

size_t Vache::nbVaches = 25;
size_t Conifere::nbConiferes = 25;
size_t Algue::nbAlgues = 25;


void Humain::impactEcologique(){

   pollution = niveauTechnologique*2;  //La technologie pollue beacoup -> d'où le *2

   impactEcolo =  nbHumains * (pollution + consommationEau);
}

void Vache::impactEcologique(){

   pollution = empreinteMethane;

   impactEcolo = nbVaches* (pollution  + consommationEau);
}

void Conifere::impactEcologique(){

   impactEcolo = O2*nbConiferes;
}

void Algue::impactEcologique(){


   impactEcolo = O2*nbAlgues;
}