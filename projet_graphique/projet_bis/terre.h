#ifndef TERRE_H
#define TERRE_H

#pragma once
using namespace std;
#include <vector>
#include "ecosysteme.h"
#include "etrevivant.h"
#include <iostream> // fred ne l'a pas mit

class Terre{

    public:
    Terre();

    size_t getSante();
    void calculSante(int santeMarin, int santeTerrestre);
    void gestionTemps();
    //void gestionSante(int O2, int CO2);


    private:

    //int temps;
    int santeTerre;
    //list <Ecostysteme>; // ATTENTION COMPLETER AVEC LE NOM
    //list <EtreVivant>;





};




#endif // TERRE_H
