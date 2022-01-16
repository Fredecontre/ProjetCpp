#include "ecosysteme.h"
#include "terre.h"
#include "etrevivant.h"
#include <typeinfo>

size_t EcosystemeMarin::santeEcosystemeMarin = 0;
size_t EcosystemeTerrestre::santeEcosystemeTerre =0;
//int EcosystemeTerrestre::santeEcosysteme(0);

Ecosysteme::Ecosysteme(Terre* t)
{
    //t->ajoutEcosysteme(this);
}


EcosystemeMarin::EcosystemeMarin(Terre* t):Ecosysteme(t){//EcosystemeMarin* ecoMarin = new EcosystemeMarin(t);

                                                         t->ajoutEcosysteme(this);}
EcosystemeTerrestre::EcosystemeTerrestre(Terre* t):Ecosysteme(t){
    //EcosystemeTerrestre* ecoTerre = new EcosystemeTerrestre(t);
                                                                 t->ajoutEcosysteme(this);}

//impactEcolo max = 20 (terre), à diviser par X pour être sur l'échelle

//10000 humains max/2000  (à mettre coeff 0.5 pour impact)

//1000 vaches max/200 (à mettre coeff 0.5 pour impact

void EcosystemeTerrestre::changerSante(Terre* terre){


    int santeHumain;
    int santeVache;
    int santeConifere;


    //On traite ici que l'impact sur l'écologie de l'ecosystème terrestre des humains, vaches, et conifères
    for(auto iter = terre->getEtresVivants().begin() ; iter != terre->getEtresVivants().end(); iter++){


        if(typeid(*iter)==typeid(Humain*)){
            santeHumain = dynamic_cast<Humain*>(*iter)->getImpactEcologique() * Humain::getNbHumains();
            break;
        }
    }

    for(auto iter = terre->getEtresVivants().begin() ; iter != terre->getEtresVivants().end(); iter++){


        if(typeid(*iter)==typeid(Vache*)){
            santeVache = dynamic_cast<Vache*>(*iter)->getImpactEcologique() * Vache::getNbVaches();
            break;
        }
    }

    for(auto iter = terre->getEtresVivants().begin() ; iter != terre->getEtresVivants().end(); iter++){


        if(typeid(*iter)==typeid(Conifere*)){
            santeConifere = dynamic_cast<Conifere*>(*iter)->getImpactEcologique() * Conifere::getNbConiferes();
            break;
        }
    }



    //On remet à l'échelle santeConifere
    setSanteEcosystemeTerre(santeVache + santeConifere/1000 - santeHumain) ;
}

void EcosystemeMarin::changerSante(Terre* terre){

    //int santeHumain = Humain::getNbHumains()* Humain::getImpactEcologique();
    int santeHumain;
    int santeAlgue;


    /*

    for(auto iter = terre->getEtresVivants().begin() ; iter != terre->getEtresVivants().end(); iter++){


        if(typeid(*iter)==typeid(Conifere*)){
            santeConifere = dynamic_cast<Conifere*>(*iter)->getImpactEcologique() * Conifere::getNbConiferes();
            break;
        }
    }

    for(size_t i =0 ; i < EtreVivant::getNbEtresVivants(); i++){
        //On traite ici que l'impact sur l'écologie de l'ecosystème marin des algues et des humains

        if(dynamic_cast<Algue*>((terre->getEtresVivants())[i])){
            santeAlgue = dynamic_cast<Algue*>((terre->getEtresVivants())[i])->getO2() * Algue::getNbAlgues()/100000;
            break;
        }
    }
    for(size_t i =0 ; i < EtreVivant::getNbEtresVivants(); i++){
        if(dynamic_cast<Humain*>((terre->getEtresVivants())[i])){
            //REVOIR VALEUR DIVISER PAR 20000
            santeHumain=-1*(dynamic_cast<Humain*>((terre->getEtresVivants())[i])->getConsommationEau() +
                         dynamic_cast<Humain*>((terre->getEtresVivants())[i])->getNiveauTechnologique()) * Humain::getNbHumains()/20000;
            break;
        }
    }*/

    for(auto iter = terre->getEtresVivants().begin() ; iter != terre->getEtresVivants().end(); iter++){


        if(typeid(*iter)==typeid(Humain*)){
            santeHumain = dynamic_cast<Humain*>(*iter)->getImpactEcologique() * Humain::getNbHumains();
            break;
        }
    }

    for(auto iter = terre->getEtresVivants().begin() ; iter != terre->getEtresVivants().end(); iter++){


        if(typeid(*iter)==typeid(Algue*)){
            santeAlgue = dynamic_cast<Algue*>(*iter)->getImpactEcologique() * Algue::getNbAlgues();
            break;
        }
    }
    //On remet à l'échelle santeAlgue
     setSanteEcosystemeMarin(santeAlgue/10000 - santeHumain);
    //setSanteEcosystemeMarin(santeHumain + santeAlgue);
}

void EcosystemeTerrestre::setSanteEcosystemeTerre(size_t sante){santeEcosystemeTerre=sante;}

void EcosystemeMarin::setSanteEcosystemeMarin(size_t sante){santeEcosystemeMarin=sante;}

