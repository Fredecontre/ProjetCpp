#include "terre.h"


Terre::Terre():santeTerre(100), temps(0){

}

//Fonction générale pour gérer l'ensemble des attributs du jeu lors de l'appui du bouton "passer temps"
void Terre::gestionTemps(EcosystemeMarin* EcosystMarin, EcosystemeTerrestre* EcosysTerrestre){
   santeTerre -=5;

    temps+=10;


    tuerNEtresVivants(5,0);
    //ajouterNEtresVivants(5,1);

    viellissementEtresVivants(); //Augmenter l'âge de 10 de chaque être vivant car le temps augmente de 10 ans

    for(auto iter = getEtresVivants().begin() ; iter != getEtresVivants().end(); iter++){


        /*Vérifier si l'être vivant a atteint l'âge moyen et le tuer (retirer de la liste des êtres
          vivants de la terre) si c'est le cas*/
        if((*iter)->getAge() >  (*iter)->getLongevite() && (*iter)->estVivant()){

            if((*iter)->getType()== 0){ //Humain

                dynamic_cast<Humain*>(*iter)->decrementerHumains();
                 (*iter)->kill();
             }

             else if((*iter)->getType()== 1){ //Vache


               dynamic_cast<Vache*>(*iter)->decrementerVaches();
               (*iter)->kill();
             }

             else if((*iter)->getType()== 2){ //Conifere
               dynamic_cast<Conifere*>(*iter)->decrementerConiferes();
               (*iter)->kill();
             }

             else if((*iter)->getType()== 3){ //Algue

               dynamic_cast<Algue*>(*iter)->decrementerAlgues();
               (*iter)->kill();
             }
    }


    }
    EcosystMarin->changerSante(this);
    EcosysTerrestre->changerSante(this);



}

void Terre::calculSante(){
    santeTerre = (Ecosystemes[0]->getSanteEcosysteme()+ Ecosystemes[1]->getSanteEcosysteme())/2;

}

void Terre::viellissementEtresVivants(){
    for(auto iter = getEtresVivants().begin() ; iter != getEtresVivants().end(); iter++){
        (*iter)->augmenterAge();
    }

}

void Terre::tuerNEtresVivants(size_t n, size_t type){
    /* Cette fonction tue n êtres vivants du type "type" spécifié*/

    size_t j = 0; //Sert à compter combien d'êtres on a tués

    for(auto iter = getEtresVivants().begin() ; iter != getEtresVivants().end() && j < n; iter++){
        if((*iter)->getType() == type){
            switch (type){
                case 0:  //Humain
                    dynamic_cast<Humain*>(*iter)->decrementerHumains();
                   // (*iter)->kill();
                    break;

                case 1:  //Vache
                    dynamic_cast<Vache*>(*iter)->decrementerVaches();
                   // (*iter)->kill();
                    break;

                case 2:  //Conifere
                    dynamic_cast<Conifere*>(*iter)->decrementerConiferes();
                   // (*iter)->kill();
                    break;

                case 3:  //Algue
                    dynamic_cast<Algue*>(*iter)->decrementerAlgues();
                    //(*iter)->kill();
                    break;
            }
           j++;
        }
    }

}

void Terre::ajouterNEtresVivants(size_t n, size_t type){
    /* Cette fonction tue n êtres vivants du type "type" spécifié*/

    for(size_t i = 0 ; i < n ; i++){


                if(type== 0){  //Humain
                    Humain hum(this);
                  }

                if(type== 1){  //Vache
                    Vache vache(this);
                  }

                if(type== 2){  //Conifere
                    Conifere conif(this);
                   }

                if(type== 3){  //Algue
                    Algue algue(this);
                  }

        }


}


