#include "terre.h"


Terre::Terre():santeTerre(100), temps(0){

}

//Fonction générale pour gérer l'ensemble des attributs du jeu lors de l'appui du bouton "passer temps"
void Terre::gestionTemps(EcosystemeMarin* EcosystMarin, EcosystemeTerrestre* EcosysTerrestre){
   santeTerre -=5;

    temps+=10;




    viellissementEtresVivants(); //Augmenter l'âge de 10 de chaque être vivant car le temps augmente de 10 ans

    for(auto iter = getEtresVivants().begin() ; iter != getEtresVivants().end(); iter++){
        cout<<"Age : "+to_string((*iter)->getAge())<<endl;
        cout<<"Longevite : "+to_string((*iter)->getLongevite())<<endl;


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
    // santeTerre = (santeMarin + santeTerrestre)/2;
}
