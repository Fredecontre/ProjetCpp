#ifndef ETREVIVANT_H
#define ETREVIVANT_H


//Contient toutes les déclarations des classes des différents types d'êtres vivants

#pragma once

class Terre;
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
        EtreVivant();
        EtreVivant(Terre* t);

        virtual void impactEcologique()=0;

        static size_t getNbEtresVivants(){return nbEtresVivants;}
        int getImpactEcologique(){ return impactEcolo;}

};





class Faune: public EtreVivant
{
protected:
    size_t pollution;
    size_t consommationEau;  //Entre 1 et 10
    static size_t nbFaune;

public:
    Faune(Terre* terre):EtreVivant(terre){}
    Faune(size_t consommationEau, Terre* terre):EtreVivant(terre),consommationEau(consommationEau){}
     static size_t getNbFaune(){return nbFaune;}



};






class Flore: public EtreVivant
{
protected:
    float O2;
    static size_t nbFlore;


public:
    Flore(Terre* terre, float O2):EtreVivant(terre),O2(O2){}
    static size_t getNbFlore(){return nbFlore;}


};







class Humain: public Faune
{
protected:
    static size_t niveauTechnologique;
    static size_t nbHumains;


public:


    Humain(Terre* terre):Faune(6,terre){}

   void impactEcologique();

   static size_t getNbHumains(){return nbHumains;}




};






class Vache: public Faune
{
protected:
    size_t empreinteMethane;  //Entre 1 et 10
    static size_t nbVaches;

public:
    Vache(Terre* terre):Faune(10,terre),empreinteMethane(10){}

  void impactEcologique();

   static size_t getNbVaches(){return nbVaches;}
   size_t getMethane(){return empreinteMethane;}



};








class Conifere: public Flore
{
protected:
     static size_t nbConiferes;


public:
     Conifere(Terre* terre):Flore(terre,0.004){}

   void impactEcologique();

    static size_t getNbConiferes(){return nbConiferes;}



};








class Algue: public Flore
{
protected:
     static size_t nbAlgues;


public:
     Algue(Terre* terre):Flore(terre,0.0008){}

   void impactEcologique();
   static size_t getNbAlgues(){return nbAlgues;}



};


#endif // ETREVIVANT_H
