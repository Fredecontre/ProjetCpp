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

    size_t getSante(){return santeTerre;}
    size_t getTemps(){ return temps;}
    void calculSante();
    void gestionTemps(EcosystemeMarin* EcosystMarin, EcosystemeTerrestre* EcosysTerrestre);
    void ajoutEtreVivant(EtreVivant* etre){EtresVivants.push_back(etre);}
    void ajoutEcosysteme(Ecosysteme* eco){Ecosystemes.push_back(eco);}
    vector<EtreVivant*> getEtresVivants(){return EtresVivants;}
    void viellissementEtresVivants();
    void tuerNEtresVivants(size_t n, size_t type);
    void ajouterNEtresVivants(size_t n, size_t type);


    private:


    int santeTerre;
    vector<Ecosysteme*> Ecosystemes;
    vector<EtreVivant*> EtresVivants;

    size_t temps;

};




#endif // TERRE_H
