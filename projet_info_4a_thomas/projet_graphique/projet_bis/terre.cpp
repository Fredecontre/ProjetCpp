#include "terre.h"

Terre::Terre():santeTerre(100), temps(0){

}

//Fonction générale pour gérer l'ensemble des attributs du jeu
void Terre::gestionTemps(){
    santeTerre -=5;

    temps+=10;

    /*for(size_t i ; i < EtreVivant::getNbEtresVivants(); i++){
        santeTerre += EtresVivants[i]->getImpactEcologique();

    }*/
}

//Getteur de la santé de la terre
std::size_t Terre::getSante(){
    return santeTerre;
}

void Terre::calculSante(int santeMarin, int santeTerrestre){

    santeTerre = (santeMarin + santeTerrestre)/2;
}
