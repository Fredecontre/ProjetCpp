#ifndef ECOSYSTEME_H
#define ECOSYSTEME_H

#pragma once

#include <iostream>


class Terre;
class EcosystemeMarin;
class EcosystemeTerrestre;

using namespace std;


class Ecosysteme
{
    //friend class EcosystemeMarin;
    //friend class EcosystemeTerrestre;
protected:
  // static int santeEcosysteme;
public:
    Ecosysteme(Terre* t);
    virtual void changerSante(Terre* terre)=0;

    //size_t getSante(){return santeEcosysteme;}
   //static size_t getSanteEcosysteme(){return santeEcosysteme;}
   //static int setSanteEcosysteme(int sante){santeEcosysteme=sante; return sante;}
};



class EcosystemeMarin: public Ecosysteme
{
protected:
    static size_t santeEcosystemeMarin;
public:
    EcosystemeMarin(Terre* t);
    void changerSante(Terre* terre);
    static size_t getSanteEcosysteme(){return santeEcosystemeMarin;}
    static void setSanteEcosystemeMarin(size_t sante);



};



class EcosystemeTerrestre: public Ecosysteme
{
protected:
    static size_t santeEcosystemeTerre;
public:
    EcosystemeTerrestre(Terre* t);
    void changerSante(Terre* terre);
    static size_t getSanteEcosysteme(){return santeEcosystemeTerre;}
    static void setSanteEcosystemeTerre(size_t sante);
};


#endif // ECOSYSTEME_H
