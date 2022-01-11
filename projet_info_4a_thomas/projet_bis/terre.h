#ifndef TERRE_H
#define TERRE_H

#pragma once
using namespace std;
#include <vector>
#include "ecosysteme.h"
#include "etrevivant.h"
#include <iostream>

class Terre{

    public:
    Terre();

    size_t getSante();
    size_t getTemps(){ return temps;}
    void calculSante(int santeMarin, int santeTerrestre);
    void gestionTemps();
    void ajoutEtreVivant(EtreVivant* etre){EtresVivants.push_back(etre);}
    //void gestionSante(int O2, int CO2);
    vector<EtreVivant*> getEtresVivants(){return EtresVivants;}


    private:


    int santeTerre;
    vector<Ecosysteme*> Ecosystemes;
    vector<EtreVivant*> EtresVivants;

    size_t temps;





};




#endif // TERRE_H
