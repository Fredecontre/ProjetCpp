#ifndef ETREVIVANT_H
#define ETREVIVANT_H
#include <iostream>

using namespace std;

class EtreVivant
{
protected:
    size_t age;
    size_t id;
    size_t longevite;

public:
    EtreVivant();

    virtual int impactEcologique()=0;


    static size_t nbEtresVivants;
};

class Faune: public EtreVivant
{
protected:
    size_t CO2;

public:
    Faune();

   // virtual int impactEcologique()=0;


    static size_t nbFaune;
};



class Flore: public EtreVivant
{
protected:
    size_t O2;

public:
    Flore();

   // virtual int impactEcologique()=0;


    static size_t nbFlore;
};

class Humain: public Faune
{
private:
    size_t niveauTechnologique;

public:
   Humain();

   // virtual int impactEcologique()=0;


    static size_t nbHumains;
};




class Vache: public Faune
{
private:
    size_t empreinteMethane;

public:
   Vache();

   // virtual int impactEcologique()=0;


    static size_t nbVaches;
};



class Conifere: public Flore
{
private:


public:
   Conifere();

   // virtual int impactEcologique()=0;


    static size_t nbConiferes;
};




class Algue: public Flore
{
private:


public:
   Algue();

   // virtual int impactEcologique()=0;


    static size_t nbAlgues;
};


#endif // ETREVIVANT_H
