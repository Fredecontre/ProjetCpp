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


        bool operator== (const EtreVivant& e) const;


        static size_t getNbEtresVivants(){return nbEtresVivants;}
        int getImpactEcologique(){return impactEcolo;}
        size_t getAge() const{ return age;}
        size_t getID() const{ return id;}
        size_t getLongevite() const{ return longevite;}
        void setAge(size_t age){age=age;}
        void setLongevite(size_t longev){longevite=longev;}

        /*Augmente l'âge de l'être vivant à chaque tour de décisions. Appelée dans gestionTemps() de la terre*/
        size_t augmenterAge(){age+=10; return age;}

};





class Faune: public EtreVivant
{
protected:
    size_t pollution;
    int consommationEau;  //Entre 1 et 10
    static size_t nbFaune;

public:

    Faune(size_t consommationEau, Terre* terre):EtreVivant(terre),consommationEau(consommationEau){Faune::nbFaune++;}
     static size_t getNbFaune(){return nbFaune;}
     size_t getConsommationEau() const{return consommationEau;}

     void setPollution(size_t pol){pollution=pol;}
     void setConsommationEau(size_t consoEau){consommationEau=consoEau;}



};






class Flore: public EtreVivant
{
protected:
    //static float O2; //O2 qui produit cette flore
    static size_t nbFlore;


public:
    Flore(Terre* terre):EtreVivant(terre){Flore::nbFlore++;}
    static size_t getNbFlore(){return nbFlore;}

    //void setO2(float O2){O2=O2;}

   //static float getO2(){return O2;}


};







class Humain: public Faune
{
protected:
    static size_t niveauTechnologique;
    static size_t nbHumains;


public:


    Humain(Terre* terre):Faune(6,terre){ Humain::nbHumains++; setLongevite(80);}

    bool operator== (const Humain& e) const;

   void impactEcologique();

   static size_t getNbHumains(){return nbHumains;}
   static size_t getNiveauTechnologique(){return niveauTechnologique;}
   friend std::ostream&  operator<<(std::ostream& o,const Humain & e);
   void setNiveauTechnologique(size_t niv){niveauTechnologique=niv;}




};







class Vache: public Faune
{
protected:
    static size_t empreinteMethane;  //Entre 1 et 10
    static size_t nbVaches;

public:
    Vache(Terre* terre):Faune(10,terre){Vache::nbVaches++; setLongevite(20);}

  void impactEcologique();

   static size_t getNbVaches(){return nbVaches;}
   //size_t getMethane() const {return empreinteMethane;}

   bool operator== (const Vache& v) const;
   friend std::ostream& operator<<(std::ostream& o,const Vache & v);
   void setEmpreinteMethane(size_t emp){empreinteMethane=emp;}
   static size_t getMethane(){return empreinteMethane;}


};








class Conifere: public Flore
{
protected:
     static size_t nbConiferes;
     static float O2Conifere;


public:
     Conifere(Terre* terre):Flore(terre){Conifere::nbConiferes++; setLongevite(50);}

   void impactEcologique();

    static size_t getNbConiferes(){return nbConiferes;}

    bool operator== (const Conifere& c) const;
    friend std::ostream& operator<<(std::ostream& o,const Conifere & c);
    static float getO2(){return O2Conifere;}



};








class Algue: public Flore
{
protected:
     static size_t nbAlgues;
     static float O2Algue;


public:
     Algue(Terre* terre):Flore(terre){Algue::nbAlgues++; setLongevite(10);}

   void impactEcologique();
   static size_t getNbAlgues(){return nbAlgues;}

   bool operator== (const Algue& a) const;
   friend std::ostream& operator<<(std::ostream& o,const Algue & a);
    static float getO2(){return O2Algue;}


};


#endif // ETREVIVANT_H
