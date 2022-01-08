#ifndef TERRE_H
#define TERRE_H

#pragma once
//using namespace std;
#include <vector>
#include "ecosysteme.h"
#include "etrevivant.h"
#include <iostream>

class Terre{

    public:
    Terre();

    std::size_t getSante();
    //int calculSante(int santeMarin, int santeTerrestre);
    void gestionTemps();
    //void gestionSante(int O2, int CO2);


    private:

    //int temps;
    int santeTerre;
    //list<Ecosysteme*> Ecosystemes;
    //list<EtreVivant*> EtresVivants;





};




#endif // TERRE_H
