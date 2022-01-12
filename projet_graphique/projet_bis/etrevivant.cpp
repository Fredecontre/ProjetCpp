#include "etrevivant.h"
#include "terre.h"

size_t EtreVivant::nbEtresVivants = 100;
size_t Faune::nbFaune = 50;

size_t Humain::nbHumains = 25;
size_t Humain::niveauTechnologique = 2;  //On est entre 1 et 5


size_t Flore::nbFlore = 50;

size_t Vache::nbVaches = 25;
size_t Conifere::nbConiferes = 25;
size_t Algue::nbAlgues = 25;




EtreVivant::EtreVivant(Terre* t):age(),id(nbEtresVivants++){ 
   t->ajoutEtreVivant(this);
}

void Humain::impactEcologique(){

   pollution = niveauTechnologique*2;  //La technologie pollue beacoup -> d'où le *2

   impactEcolo =  - (pollution + consommationEau);
}

void Vache::impactEcologique(){

   pollution = empreinteMethane;

   impactEcolo = - (pollution  + consommationEau);
}

void Conifere::impactEcologique(){

   impactEcolo = 1000*O2;
}

void Algue::impactEcologique(){


   impactEcolo =10000*O2;
}

std::ostream& operator<<(std::ostream& o,const Humain & e){


    o<< "Age: " + to_string(e.getAge())<<endl;
    o<< "Espérance de vie: " + to_string(e.getLongevite())<<endl;
    o<< "Impact écologique: " + to_string(e.getImpactEcologique())<<endl;

    return o;

}

bool Humain::operator== (const Humain& e) const{

    return(this->getAge() == e.getAge() && this->getLongevite() == e.getLongevite() && this->getImpactEcologique() ==
           e.getImpactEcologique());

}

std::ostream& operator<<(std::ostream& o,const Vache & v){


    o<< "Age: " + to_string(v.getAge())<<endl;
    o<< "Espérance de vie: " + to_string(v.getLongevite())<<endl;
    o<< "Impact écologique: " + to_string(v.getImpactEcologique())<<endl;

    return o;

}

bool Vache::operator== (const Vache& v) const{

    return(this->getAge() == v.getAge() && this->getLongevite() == v.getLongevite() && this->getImpactEcologique() ==
           v.getImpactEcologique());

}

/*std::ostream& operator<<(std::ostream& o,const Conifere & c){


    o<< "Age: " + to_string(v.getAge())<<endl;
    o<< "Espérance de vie: " + to_string(v.getLongevite())<<endl;
    o<< "Impact écologique: " + to_string(v.getImpactEcologique())<<endl;

    return o;

}

bool Vache::operator== (const Vache& v) const{

    return(this->getAge() == v.getAge() && this->getLongevite() == v.getLongevite() && this->getImpactEcologique() ==
           v.getImpactEcologique());

}*/
