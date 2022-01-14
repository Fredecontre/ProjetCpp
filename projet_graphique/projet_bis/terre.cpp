#include "terre.h"

Terre::Terre():santeTerre(100), temps(0){

}

//Fonction générale pour gérer l'ensemble des attributs du jeu
void Terre::gestionTemps(EcosystemeMarin* EcosystMarin, EcosystemeTerrestre* EcosysTerrestre){
   santeTerre -=5;

    temps+=10;


    int compt =0;
    for(auto iter = getEtresVivants().begin() ; iter != getEtresVivants().end(); iter++){
        (*iter)->augmenterAge();
        cout<<to_string(++compt)<<endl;
         (*iter)->impactEcologique(); //FAIT BUG LE PROGRAMME !!!!!!

        /*Vérifier si l'être vivant a atteint l'âge moyen et le tuer (retirer de la liste des êtres
          vivants de la terre) si c'est le cas*/

        //FAIT BUG LE PROGRAMME !!!!!!
        /*if((*iter)->getAge() >  (*iter)->getLongevite()){
           eliminerEtreVivant(iter);

        }*/
    }


}

void Terre::calculSante(int santeMarin, int santeTerrestre){

    santeTerre = (santeMarin + santeTerrestre)/2;
}
