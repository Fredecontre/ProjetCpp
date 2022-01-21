#include "ecosysteme.h"
#include "terre.h"
#include "etrevivant.h"
#include <typeinfo>



Ecosysteme::Ecosysteme(Terre* t){}


EcosystemeMarin::EcosystemeMarin(Terre* t):Ecosysteme(t){
                                                                 t->ajoutEcosysteme(this);}
EcosystemeTerrestre::EcosystemeTerrestre(Terre* t):Ecosysteme(t){
                                                                 t->ajoutEcosysteme(this);}


void EcosystemeTerrestre::changerSante(Terre* terre){

    int impactHumain;
    int impactVache;
    int impactConifere;


    //On traite ici que l'impact sur l'écologie de l'ecosystème terrestre des humains, vaches, et conifères
    for(auto iter = terre->getEtresVivants().begin() ; iter != terre->getEtresVivants().end(); iter++){


        if((*iter)->getType()==0){


            (*iter)->impactEcologique();

            impactHumain=((*iter)->getImpactEcologique() )* Humain::getNbHumains();

             break;
          }

    }


    for(auto iter = terre->getEtresVivants().begin() ; iter != terre->getEtresVivants().end(); iter++){


        if((*iter)->getType()==1){


            (*iter)->impactEcologique();

            impactVache=((*iter)->getImpactEcologique() )* Vache::getNbVaches();

             break;
         }

    }

    for(auto iter = terre->getEtresVivants().begin() ; iter != terre->getEtresVivants().end(); iter++){


        if((*iter)->getType()==2 && (*iter)->estVivant()){


            (*iter)->impactEcologique();

            impactConifere=((*iter)->getImpactEcologique() )* Conifere::getNbConiferes();

             break;
         }

     }


    //On remet à l'échelle santeConifere
    setSanteEcosysteme(impactVache/900 + impactConifere/500 + impactHumain/10000) ;
}

void EcosystemeMarin::changerSante(Terre* terre){

    int impactHumain;
    int impactAlgue;


    /*On parcourt le vecteurs des êtres vivants de la classe terre afin de trouver l'impact écologique d'un humain
     (qui est le même pour tous) et on sort de la bouble dès qu'on a rencontré un être vivant de type humain.  */

    for(auto iter = terre->getEtresVivants().begin() ; iter != terre->getEtresVivants().end(); iter++){


        if((*iter)->getType()==0){


            (*iter)->impactEcologique();

            impactHumain=((*iter)->getImpactEcologique() )* Humain::getNbHumains();

             break;
        }

      }

/*On parcourt le vecteurs des êtres vivants de la classe terre afin de trouver l'impact écologique d'une algue
(qui est le même pour toutes) et on sort de la bouble dès qu'on a rencontré un être vivant de type algue.  */
      for(auto iter = terre->getEtresVivants().begin() ; iter != terre->getEtresVivants().end(); iter++){

              if((*iter)->getType()==3){

                     (*iter)->impactEcologique();
                     impactAlgue=((*iter)->getImpactEcologique() )* Algue::getNbAlgues();

                     break;

                 }
      }


     setSanteEcosysteme(impactAlgue/10000 + impactHumain/5000);

}

