#include "terre.h"

Terre::Terre():santeTerre(100){

}
void Terre::gestionTemps(){
    santeTerre -=5;
}

int Terre::getSante(){
    return santeTerre;
}
