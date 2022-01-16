#include "terre.h"

#include <typeinfo>

Terre::Terre():santeTerre(100), temps(0){

}

//Fonction générale pour gérer l'ensemble des attributs du jeu
void Terre::gestionTemps(EcosystemeMarin* EcosystMarin, EcosystemeTerrestre* EcosysTerrestre){
   santeTerre -=5;

    temps+=10;



    int compt =0;
    viellissementEtresVivants(); //Augmenter l'âge de 10 de chaque être vivant car le temps augmente de 10 ans
    for(auto iter = getEtresVivants().begin() ; iter != getEtresVivants().end(); iter++){
        //(*iter)->augmenterAge();
        // (*iter)->impactEcologique(); //FAIT BUG LE PROGRAMME !!!!!!

         if(typeid(*iter)==typeid(Humain*) && (*iter)->estVivant()){
        //if(dynamic_cast<Humain*>(*iter) && (*iter)->estVivant()){
            cout<<endl;
            cout<<typeid(*iter).name()<<endl;
            //eliminerEtreVivant(iter);

         }

         else if(typeid(*iter)==typeid(Vache*) && (*iter)->estVivant()){
            cout<<endl;
            cout<<to_string(++compt)<<endl;
         }
         else if(typeid(*iter)==typeid(Conifere*) && (*iter)->estVivant()){
            cout<<endl;
            cout<<to_string(++compt)<<endl;
         }
        /*Vérifier si l'être vivant a atteint l'âge moyen et le tuer (retirer de la liste des êtres
          vivants de la terre) si c'est le cas*/

        //FAIT BUG LE PROGRAMME !!!!!!
        /*if((*iter)->getAge() >  (*iter)->getLongevite() && (*iter)->estVivant()){

            //if(dynamic_cast<Humain*>(*iter)){
            //if(instanceof<Humain>(*iter) && (*iter)->estVivant()){
            //if(dynamic_cast<Humain*>(*iter) && (*iter)->estVivant()){
                cout<<to_string(++compt)<<endl;
                //dynamic_cast<Humain*>(*iter)->decrementerHumains();
                Humain::decrementerHumains();
                EtreVivant::decrementerNbEtresVivants();
                (*iter)->kill();

            }*/
            /*

            if(typeid(*iter).name()==typeid(Vache).name() && (*iter)->estVivant()){

                //dynamic_cast<Vache*>(*iter)->decrementerVaches();
                Vache::decrementerVaches();
                EtreVivant::decrementerNbEtresVivants();
                (*iter)->kill();
                //iter++;

            }

            if(typeid(*iter).name()=="Conifere" && (*iter)->estVivant()){

                //dynamic_cast<Conifere*>(*iter)->decrementerConiferes();
                Conifere::decrementerConiferes();
                EtreVivant::decrementerNbEtresVivants();
                (*iter)->kill();
                //iter++;
            }

            if(typeid(*iter).name()=="Algue" && (*iter)->estVivant()){

                //dynamic_cast<Algue*>(*iter)->decrementerAlgues();
                Algue::decrementerAlgues();
                EtreVivant::decrementerNbEtresVivants();
                (*iter)->kill();
                //iter++;
            }
           //eliminerEtreVivant(iter);

        }*/
    }
    EcosystMarin->changerSante(this);
    EcosysTerrestre->changerSante(this);



}

void Terre::calculSante(int santeMarin, int santeTerrestre){

    santeTerre = (santeMarin + santeTerrestre)/2;
}
