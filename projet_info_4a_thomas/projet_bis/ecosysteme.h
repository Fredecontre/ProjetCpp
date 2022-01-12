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
    Ecosysteme();
    virtual void changerSante(Terre* terre)=0;
};



class EcosystemeMarin: public Ecosysteme
{
protected:

public:
    EcosystemeMarin();
    void changerSante(Terre* terre);
};



class EcosystemeTerrestre: public Ecosysteme
{
protected:

public:
    EcosystemeTerrestre();
    void changerSante(Terre* terre);
};


#endif // ECOSYSTEME_H
