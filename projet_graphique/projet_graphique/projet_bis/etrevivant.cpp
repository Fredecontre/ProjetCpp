#include "etrevivant.h"
#include "terre.h"
#include <time.h>

size_t EtreVivant::nbEtresVivants = 0;
size_t Faune::nbFaune = 0;

size_t Humain::nbHumains = 0;
size_t Humain::niveauTechnologique = 2;  //On est entre 1 et 5


size_t Flore::nbFlore = 0;

size_t Vache::nbVaches = 0;
size_t Conifere::nbConiferes = 0;
size_t Algue::nbAlgues = 0;


//float Algue::O2Algue = 0.0008;
//float Conifere::O2Conifere = 0.004;
size_t Vache::empreinteMethane = 10;





/* Constructeurs */
                                              //On donne un âge aléatoire au début
EtreVivant::EtreVivant(Terre* t, size_t type):age(rand()%20),id(nbEtresVivants++),vivant(true),type(type){

}

Vache::Vache(Terre* terre):Faune(10,terre,1){ Vache::nbVaches++; setLongevite(20);

                                           terre->ajoutEtreVivant(this);}


Humain::Humain(Terre* terre):Faune(6,terre,0){ Humain::nbHumains++; setLongevite(80);

                                           terre->ajoutEtreVivant(this);}

Conifere::Conifere(Terre* terre):Flore(terre,2,0.004){ Conifere::nbConiferes++; setLongevite(50);

                                           terre->ajoutEtreVivant(this);}

Algue::Algue(Terre* terre):Flore(terre,3,0.0008){ Algue::nbAlgues++; setLongevite(10);

                                           terre->ajoutEtreVivant(this);}

void Humain::impactEcologique(){


   impactEcolo =  - (niveauTechnologique*2 + consommationEau);
}

void Vache::impactEcologique(){

   impactEcolo = - (empreinteMethane  + consommationEau);
}

void Conifere::impactEcologique(){

   impactEcolo = 1000*getO2();
}

void Algue::impactEcologique(){


   impactEcolo =10000*getO2();
}

std::ostream& operator<<(std::ostream& o,const Humain & e){


    o<< "Age: " + to_string(e.getAge())<<endl;
    o<< "Espérance de vie: " + to_string(e.getLongevite())<<endl;
    o<< "Niveau technologique: " + to_string(e.getNiveauTechnologique())<<endl;
     o<< "Consommation Eau: " +to_string(e.getConsommationEau()) <<endl;

    return o;

}

bool Humain::operator== (const Humain& e) const{

    return(getAge() == e.getAge() && getLongevite() == e.getLongevite() && getConsommationEau() == e.getConsommationEau());

}

std::ostream& operator<<(std::ostream& o,const Vache & v){


    o<< "Age: " + to_string(v.getAge())<<endl;
    o<< "Espérance de vie: " + to_string(v.getLongevite())<<endl;
    o<< "Impact méthane: " + to_string(v.getMethane())<<endl;
    o<< "Consommation Eau: " +to_string(v.getConsommationEau()) <<endl;

    return o;

}

bool Vache::operator== (const Vache& v) const{

    return(getAge() == v.getAge() && getLongevite() == v.getLongevite() && getConsommationEau() == v.getConsommationEau());

}

std::ostream& operator<<(std::ostream& o,const Conifere & c){


    o<< "Age: " + to_string(c.getAge())<<endl;
    o<< "Espérance de vie: " + to_string(c.getLongevite())<<endl;
    o<< "Impact écologique: " + to_string(c.getImpactEcologique())<<endl;

    return o;

}

bool Conifere::operator== (const Conifere& c) const{

    return(getAge() == c.getAge() && getLongevite() == c.getLongevite());

}

std::ostream& operator<<(std::ostream& o,const Algue & c){


    o<< "Age: " + to_string(c.getAge())<<endl;
    o<< "Espérance de vie: " + to_string(c.getLongevite())<<endl;
    o<< "Impact écologique: " + to_string(c.getImpactEcologique())<<endl;

    return o;

}

bool Algue::operator== (const Algue& a) const{

    return(getAge() == a.getAge() && getLongevite() == a.getLongevite());

}
