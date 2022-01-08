#include "terre.h"

Terre::Terre():santeTerre(100){

}
void Terre::gestionTemps(){
    santeTerre -=5;
}

std::size_t Terre::getSante(){
    return santeTerre;
}
