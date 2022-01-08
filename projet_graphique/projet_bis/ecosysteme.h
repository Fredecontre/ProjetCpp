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
};



class EcosystemeMarin: public Ecosysteme
{
protected:

public:
    EcosystemeMarin();
    void changerSante();
};



class EcosystemeTerrestre: public Ecosysteme
{
protected:

public:
    EcosystemeTerrestre();
    void changerSante();
};


#endif // ECOSYSTEME_H
