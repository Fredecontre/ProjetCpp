#include "ecosysteme.h"
#include "terre.h"

Ecosysteme::Ecosysteme()
{

}

//impactEcolo max = 20 (terre), à diviser par X pour être sur l'échelle

//10000 humains max/2000  (à mettre coeff 0.5 pour impact)

//1000 vaches max/200 (à mettre coeff 0.5 pour impact

void EcosystemeTerrestre::changerSante(Terre* terre){


    int santeFaune;
    int santeConifere;

    //penser à rajouter les ecosystèmes dans le vector de Terre

    for(size_t i =0 ; i < EtreVivant::getNbEtresVivants(); i++){

        //On traite ici que l'impact sur l'écologie de l'ecosystème marin des algues et des humains

        if(dynamic_cast<Conifere*>((terre->getEtresVivants())[i]))
            santeConifere +=terre->getEtresVivants()[i]->getImpactEcologique();

        else if(dynamic_cast<Faune*>((terre->getEtresVivants())[i]))
            santeFaune += terre->getEtresVivants()[i]->getImpactEcologique();


    }

    //On remet à l'échelle santeConifere
    santeEcosysteme = santeFaune + santeConifere/1000;
}

void EcosystemeMarin::changerSante(Terre* terre){

    int santeHumain;
    int santeAlgue;

    //penser à rajouter les ecosystèmes dans le vector de Terre

    for(size_t i =0 ; i < EtreVivant::getNbEtresVivants(); i++){
        //On traite ici que l'impact sur l'écologie de l'ecosystème marin des algues et des humains

        if(dynamic_cast<Algue*>((terre->getEtresVivants())[i]))
            santeAlgue +=terre->getEtresVivants()[i]->getImpactEcologique();

        else if(dynamic_cast<Humain*>((terre->getEtresVivants())[i]))
            santeHumain += terre->getEtresVivants()[i]->getImpactEcologique();


    }
    //On remet à l'échelle santeAlgue
    santeEcosysteme = santeHumain + santeAlgue/10000;
}
