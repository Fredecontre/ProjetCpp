#include "ecosysteme.h"
#include "terre.h"
#include "etrevivant.h"
#include <typeinfo>

//size_t EcosystemeMarin::santeEcosystemeMarin = 0;
//size_t EcosystemeTerrestre::santeEcosystemeTerre =0;
//int EcosystemeTerrestre::santeEcosysteme(0);

Ecosysteme::Ecosysteme(Terre* t)
{

}


EcosystemeMarin::EcosystemeMarin(Terre* t):Ecosysteme(t){
                                                         t->ajoutEcosysteme(this);}
EcosystemeTerrestre::EcosystemeTerrestre(Terre* t):Ecosysteme(t){
                                                                 t->ajoutEcosysteme(this);}

//impactEcolo max = 20 (terre), à diviser par X pour être sur l'échelle

//10000 humains max/2000  (à mettre coeff 0.5 pour impact)

//1000 vaches max/200 (à mettre coeff 0.5 pour impact

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
    setSanteEcosysteme(impactVache/1000 + (int)impactConifere/1000 + (int)impactHumain/400) ;
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


     setSanteEcosysteme((int)impactAlgue/10000 + (int)impactHumain/400);

}

//void EcosystemeTerrestre::setSanteEcosystemeTerre(size_t sante){santeEcosystemeTerre=sante;}

//void EcosystemeMarin::setSanteEcosystemeMarin(size_t sante){santeEcosystemeMarin=sante;}

