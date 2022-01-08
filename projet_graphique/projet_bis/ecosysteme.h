#ifndef ECOSYSTEME_H
#define ECOSYSTEME_H
#include <iostream>

using namespace std;
class Ecosysteme
{
protected:
    size_t santeEcosysteme;
public:
    Ecosysteme();
    void changerSante(int impactEcologique);
};



class EcosystemeMarin: public Ecosysteme
{
protected:

public:
    EcosystemeMarin();
    void changerSante(int impact);
};



class EcosystemeTerrestre: public Ecosysteme
{
protected:

public:
    EcosystemeTerrestre();
    void changerSante(int impact);
};


#endif // ECOSYSTEME_H
