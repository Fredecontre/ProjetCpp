#ifndef ECOSYSTEME_H
#define ECOSYSTEME_H

#pragma once

#include <iostream>

using namespace std;

class Terre;
class EcosystemeMarin;
class EcosystemeTerrestre;




class Ecosysteme
{

protected:
  int santeEcosysteme;

public:
    Ecosysteme(Terre* t);
    virtual void changerSante(Terre* terre)=0;

   int getSanteEcosysteme(){return santeEcosysteme;}
   void setSanteEcosysteme(int sante){santeEcosysteme=sante; }
};



class EcosystemeMarin: public Ecosysteme
{


public:
    EcosystemeMarin(Terre* t);
    void changerSante(Terre* terre);



};



class EcosystemeTerrestre: public Ecosysteme
{

public:
    EcosystemeTerrestre(Terre* t);
    void changerSante(Terre* terre);
};


#endif // ECOSYSTEME_H
