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
    int impactEcolo;
    static size_t nbEtresVivants;


public:
    EtreVivant():age(0),id(nbEtresVivants++){}

    virtual void impactEcologique()=0;

    static size_t getNbEtresVivants(){return nbEtresVivants;}



};







class Faune: public EtreVivant
{
protected:
    size_t pollution;
    size_t consommationEau;
    static size_t nbFaune;

public:
    Faune():EtreVivant(){}
    Faune(size_t consommationEau):consommationEau(consommationEau){}
     static size_t getNbFaune(){return nbFaune;}



};






class Flore: public EtreVivant
{
protected:
    size_t O2;
    static size_t nbFlore;


public:
    Flore():EtreVivant(){}
    static size_t getNbFlore(){return nbFlore;}


};







class Humain: public Faune
{
protected:
    size_t niveauTechnologique;
    static size_t nbHumains;


public:


    Humain():Faune(100),niveauTechnologique(0){}   //On peut faire commencer à niveau technologique nul et faire avancer l'humanité genre depuis hommes des cavernes
    //Humain(size_t niveauTechnologique, size_t consommationEau):Faune(),niveauTechnologique(niveauTechnologique),consommationEau(consommationEau){}
   void impactEcologique();

   static size_t getNbHumains(){return nbHumains;}




};






class Vache: public Faune
{
protected:
    size_t empreinteMethane;
    static size_t nbVaches;

public:
    Vache():Faune(75),empreinteMethane(100){}
   //Vache(size_t consommationEau, size_t empreinteMethane):Faune(),consommationEau(consommationEau),empreinteMethane(empreinteMethane){}

  void impactEcologique();

   static size_t getNbVaches(){return nbVaches;}
   size_t getMethane(){return empreinteMethane;}



};








class Conifere: public Flore
{
protected:
     static size_t nbConiferes;


public:
   Conifere();

   void impactEcologique();

    static size_t getNbConiferes(){return nbConiferes;}



};








class Algue: public Flore
{
protected:
     static size_t nbAlgues;


public:
   Algue();

   void impactEcologique();
   static size_t getNbAlgues(){return nbAlgues;}



};


#endif // ETREVIVANT_H
