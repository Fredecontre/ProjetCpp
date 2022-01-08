#include "terre.h"

Terre::Terre():santeTerre(100){

}
void Terre::gestionTemps(){
    santeTerre -=5;
}

std::size_t Terre::getSante(){
    return santeTerre;
}

void Terre::calculSante(int santeMarin, int santeTerrestre){

    santeTerre = (santeMarin + santeTerrestre)/2;
}
