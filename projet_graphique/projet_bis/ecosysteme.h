#ifndef ECOSYSTEME_H
#define ECOSYSTEME_H

#pragma once

#include <iostream>


class Terre;

using namespace std;


class Ecosysteme
{
protected:
   //static size_t santeEcosysteme;
public:
    Ecosysteme(Terre* t);
    virtual void changerSante(Terre* terre)=0;

    //size_t getSante(){return santeEcosysteme;}
  //  static size_t getSanteEcosysteme(){return santeEcosysteme;}
    //void setSanteEcosysteme(size_t sante){this->santeEcosysteme=sante;}
};



class EcosystemeMarin: public Ecosysteme
{
protected:
    static size_t santeEcosystemeMarin;
public:
    EcosystemeMarin(Terre* t);
    void changerSante(Terre* terre);
    static size_t getSanteEcosysteme(){return santeEcosystemeMarin;}
    void setSanteEcosysteme(size_t sante);

};



class EcosystemeTerrestre: public Ecosysteme
{
protected:
    static size_t santeEcosystemeTerre;
public:
    EcosystemeTerrestre(Terre* t);
    void changerSante(Terre* terre);
    static size_t getSanteEcosysteme(){return santeEcosystemeTerre;}
    static void setSanteEcosysteme(size_t sante);
};


#endif // ECOSYSTEME_H
