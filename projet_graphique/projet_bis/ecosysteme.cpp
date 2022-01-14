#include "ecosysteme.h"
#include "terre.h"
#include "etrevivant.h"

size_t EcosystemeMarin::santeEcosystemeMarin = 0;
size_t EcosystemeTerrestre::santeEcosystemeTerre =0;

Ecosysteme::Ecosysteme(Terre* t)
{
    t->ajoutEcosysteme(this);
}

EcosystemeTerrestre::EcosystemeTerrestre(Terre* t):Ecosysteme(t){}
EcosystemeMarin::EcosystemeMarin(Terre* t):Ecosysteme(t){}

//impactEcolo max = 20 (terre), à diviser par X pour être sur l'échelle

//10000 humains max/2000  (à mettre coeff 0.5 pour impact)

//1000 vaches max/200 (à mettre coeff 0.5 pour impact

/*void EcosystemeTerrestre::changerSante(Terre* terre){


    int santeFaune;
    int santeConifere;


    for(size_t i =0 ; i < EtreVivant::getNbEtresVivants(); i++){

        //On ne traite ici que l'impact sur l'écologie de l'ecosystème marin des algues et des humains

        if(dynamic_cast<Conifere*>((terre->getEtresVivants())[i]))
            santeConifere +=terre->getEtresVivants()[i]->getImpactEcologique();

        else if(dynamic_cast<Faune*>((terre->getEtresVivants())[i]))
            santeFaune += terre->getEtresVivants()[i]->getImpactEcologique();


    }

    //On remet à l'échelle santeConifere
    setSanteEcosysteme(santeFaune + santeConifere/1000) ;
}*/

void EcosystemeMarin::changerSante(Terre* terre){

    //int santeHumain = Humain::getNbHumains()* Humain::getImpactEcologique();
    int santeHumain;
    int santeAlgue;

    //penser à rajouter les ecosystèmes dans le vector de Terre



    for(size_t i =0 ; i < EtreVivant::getNbEtresVivants(); i++){
        //On traite ici que l'impact sur l'écologie de l'ecosystème marin des algues et des humains

        if(dynamic_cast<Algue*>((terre->getEtresVivants())[i])){
            santeAlgue = dynamic_cast<Algue*>((terre->getEtresVivants())[i])->getImpactEcologique() * Algue::getNbAlgues();
            break;
        }
    }
    for(size_t i =0 ; i < EtreVivant::getNbEtresVivants(); i++){
        if(dynamic_cast<Humain*>((terre->getEtresVivants())[i])){
            santeHumain=dynamic_cast<Humain*>((terre->getEtresVivants())[i])->getImpactEcologique() * Humain::getNbHumains();
            //santeHumain += terre->getEtresVivants()[i]->getImpactEcologique();
            break;
        }
    }


    //On remet à l'échelle santeAlgue
     setSanteEcosysteme(santeHumain + santeAlgue/10000);
}

void EcosystemeTerrestre::setSanteEcosysteme(size_t sante){santeEcosystemeTerre=sante;}

void EcosystemeMarin::setSanteEcosysteme(size_t sante){santeEcosystemeMarin=sante;}

