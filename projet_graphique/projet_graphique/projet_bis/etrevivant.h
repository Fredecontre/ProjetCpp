#ifndef ETREVIVANT_H
#define ETREVIVANT_H

#pragma once
#include <iostream>


//Contient toutes les déclarations des classes des différents types d'êtres vivants


class Terre;




using namespace std;

class EtreVivant
{
protected:
        int age;
        size_t id;
        size_t longevite;
        bool vivant;  //Indique si cet être est vivant (true) ou pas (false). Utile pour fonction gestionTemps de Terre
        int impactEcolo;
        static size_t nbEtresVivants;
        size_t type; // 0 = humain, 1 = vache, 2 = conifère, 3 = algue

public:
        EtreVivant(Terre* t, size_t type);

        virtual void impactEcologique()=0;


        bool operator== (const EtreVivant& e) const;


        static size_t getNbEtresVivants() {return nbEtresVivants;}
        int getImpactEcologique() const{return impactEcolo;}
        size_t getAge() const{ return age;}
        size_t getID() const{ return id;}
        size_t getLongevite() const{ return longevite;}
        void setAge(size_t age){age=age;}
        void setLongevite(size_t longev){longevite=longev;}
        size_t getType(){return type;}

        /*Augmente l'âge de l'être vivant à chaque tour de décisions. Appelée dans gestionTemps() de la terre*/
        void augmenterAge(){age+=10;}
        void kill(){vivant=false;}  //Tuer cet être vivant en mettant son attribut vivant à false
        bool estVivant(){return vivant;}
        static void decrementerNbEtresVivants(size_t n){nbEtresVivants-=n;}

};





class Faune: public EtreVivant
{
protected:
    size_t pollution;
    int consommationEau;
    static size_t nbFaune;

public:

    Faune(size_t consommationEau, Terre* terre, size_t type):EtreVivant(terre,type),consommationEau(consommationEau){Faune::nbFaune++;}
     static size_t getNbFaune(){return nbFaune;}
     size_t getConsommationEau() const{return consommationEau;}

     void setPollution(size_t pol){pollution=pol;}
     void setConsommationEau(size_t consoEau){consommationEau=consoEau;}



};






class Flore: public EtreVivant
{
protected:
    float O2; //O2 qui produit cette flore
    static size_t nbFlore;


public:
    Flore(Terre* terre, size_t type, float O2):EtreVivant(terre,type),O2(O2){Flore::nbFlore++;}
    static size_t getNbFlore(){return nbFlore;}

    void setO2(float O2){O2=O2;}

    float getO2(){return O2;}


};







class Humain: public Faune
{
protected:
    static size_t niveauTechnologique;
    static size_t nbHumains;


public:


    Humain(Terre* terre);

    bool operator== (const Humain& e) const;

   void impactEcologique();

   static size_t getNbHumains(){return nbHumains;}
   static size_t getNiveauTechnologique(){return niveauTechnologique;}
   friend std::ostream&  operator<<(std::ostream& o,const Humain & e);
   void setNiveauTechnologique(size_t niv){niveauTechnologique=niv;}
   static void decrementerHumains(size_t n){nbHumains-=n;}




};







class Vache: public Faune
{
protected:
    static size_t empreinteMethane;  //Entre 1 et 10
    static size_t nbVaches;

public:
    Vache(Terre* terre);

  void impactEcologique();

   static size_t getNbVaches(){return nbVaches;}
   bool operator== (const Vache& v) const;
   friend std::ostream& operator<<(std::ostream& o,const Vache & v);
   void setEmpreinteMethane(size_t emp){empreinteMethane=emp;}
   static size_t getMethane(){return empreinteMethane;}
   static void decrementerVaches(size_t n){nbVaches-=n;}


};








class Conifere: public Flore
{
protected:
     static size_t nbConiferes;


public:
     Conifere(Terre* terre);

   void impactEcologique();

    static size_t getNbConiferes(){return nbConiferes;}

    bool operator== (const Conifere& c) const;
    friend std::ostream& operator<<(std::ostream& o,const Conifere & c);
    static void decrementerConiferes(size_t n){nbConiferes-=n;}
};








class Algue: public Flore
{
protected:
     static size_t nbAlgues;

public:
     Algue(Terre* terre);

   void impactEcologique();
   static size_t getNbAlgues(){return nbAlgues;}

   bool operator== (const Algue& a) const;
   friend std::ostream& operator<<(std::ostream& o,const Algue & a);
   static void decrementerAlgues(size_t n){nbAlgues-=n;}

};


#endif // ETREVIVANT_H
