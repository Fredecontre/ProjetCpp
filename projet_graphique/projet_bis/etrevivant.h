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
        int getImpactEcologique() const{ return impactEcolo;}
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

      //Entre 1 et 10
    static size_t nbFaune;

public:
    size_t pollution;
    int consommationEau;

    Faune(size_t consommationEau, Terre* terre):EtreVivant(terre),consommationEau(consommationEau){Faune::nbFaune++;}
     static size_t getNbFaune(){return nbFaune;}
     size_t getConsommationEau() const{return consommationEau;}

     void setPollution(size_t pol){pollution=pol;}
     void setConsommationEau(size_t consoEau){consommationEau=consoEau;}



};






class Flore: public EtreVivant
{
protected:

    static size_t nbFlore;


public:
    float O2; //O2 qui produit cette flore
    Flore(Terre* terre, float O2):EtreVivant(terre),O2(O2){Flore::nbFlore++;}
    static size_t getNbFlore(){return nbFlore;}

    void setO2(float O2){O2=O2;}

    size_t getO2(){return O2;}


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
    size_t empreinteMethane;  //Entre 1 et 10
    static size_t nbVaches;

public:
    Vache(Terre* terre):Faune(10,terre),empreinteMethane(10){Vache::nbVaches++; setLongevite(20);}

  void impactEcologique();

   static size_t getNbVaches(){return nbVaches;}
   size_t getMethane() const {return empreinteMethane;}

   bool operator== (const Vache& v) const;
   friend std::ostream& operator<<(std::ostream& o,const Vache & v);
   void setEmpreinteMethane(size_t emp){empreinteMethane=emp;}


};








class Conifere: public Flore
{
protected:
     static size_t nbConiferes;


public:
     Conifere(Terre* terre):Flore(terre,0.004){Conifere::nbConiferes++; setLongevite(50);}

   void impactEcologique();

    static size_t getNbConiferes(){return nbConiferes;}

    bool operator== (const Conifere& c) const;
    friend std::ostream& operator<<(std::ostream& o,const Conifere & c);



};








class Algue: public Flore
{
protected:
     static size_t nbAlgues;


public:
     Algue(Terre* terre):Flore(terre,0.0008){Algue::nbAlgues++; setLongevite(10);}

   void impactEcologique();
   static size_t getNbAlgues(){return nbAlgues;}

   bool operator== (const Algue& a) const;
   friend std::ostream& operator<<(std::ostream& o,const Algue & a);



};


#endif // ETREVIVANT_H
