#ifndef ETREVIVANT_H
#define ETREVIVANT_H


//Contient toutes les déclarations des classes des différents types d'êtres vivants

#pragma once

class Terre;
#include <iostream>
//#include "terre.h"


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
    size_t consommationEau;
    static size_t nbFaune;

public:
    Faune(Terre* terre):EtreVivant(terre){}
    Faune(size_t consommationEau, Terre* terre):EtreVivant(terre),consommationEau(consommationEau){}
     static size_t getNbFaune(){return nbFaune;}



};






class Flore: public EtreVivant
{
protected:
    size_t O2;
    static size_t nbFlore;


public:
    Flore(Terre* terre):EtreVivant(terre){}
    static size_t getNbFlore(){return nbFlore;}


};







class Humain: public Faune
{
protected:
    static size_t niveauTechnologique;
    static size_t nbHumains;


public:


    Humain(Terre* terre):Faune(100,terre){}
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
    Vache(Terre* terre):Faune(75,terre),empreinteMethane(100){}
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
     Conifere(Terre* terre):Flore(terre){}

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
