#ifndef ECOSYSTEME_H
#define ECOSYSTEME_H

#pragma once

#include <iostream>


class Terre;

using namespace std;


class Ecosysteme
{
protected:
    size_t santeEcosysteme;
public:
    Ecosysteme(Terre* t);
    virtual void changerSante(Terre* terre)=0;

    size_t getSante(){return santeEcosysteme;}
};



class EcosystemeMarin: public Ecosysteme
{
protected:

public:
    EcosystemeMarin(Terre* t);
    void changerSante(Terre* terre);
};



class EcosystemeTerrestre: public Ecosysteme
{
protected:

public:
    EcosystemeTerrestre(Terre* t);
    void changerSante(Terre* terre);
};


#endif // ECOSYSTEME_H
