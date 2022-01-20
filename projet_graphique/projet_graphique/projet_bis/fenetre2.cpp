﻿#include "fenetre2.h"
#include "ui_fenetre2.h"
#include <QPixmap>
#include <QMessageBox>


#define nb_tour 6

QString text_button1[nb_tour] = {"Make America Great Again","RRRrrrr!!!","J'ai toujours cru en elle !","Exporter la nouvelle technologie française partout en France et dans le monde",
                                 "On s'en fout, c'est rien","Let's gooooo"};
QString text_button2[nb_tour] = {"Envoyer Greta Thunberg au front","+ 1","Je fais tout en Vélib de toute façon","Il est solide le machin","Ho non pas encore un confinement","Un bon bunker fera l'affaire"};
QString text_button3[nb_tour] = {"Envoyer Tiger Woods lui donner des cours","+2","Gilet Jaune héhé","Fermons toutes les centrales ! Le nucléaire n'a jamais était une énergie verte !",
                                 "Un confinement de 10 ans","Je n'abandonne pas ma Terre"};
QString text_principal[nb_tour] = {"Trump a encore perdu au golf ! Melania n'arrive plus à le calmer :( Pris de folie furieuse, il décide de quitter de nouveau l'accord de Paris et "
                                   "de promouvoir les voitures thermiques.",
                                   "Venise est le prochain Atlantide si vous ne faites rien. Il faut trouver des solutions technologiques et vite !",
                                   "Il fait beaucoup trop chaud sur Paris et dans toute la France (même en Bretage). Il faut impérativement réduire les émissions "
                                   "de CO2. Hildago, élue présidente, veut interdite les voitures dans tout Paris et les plus grandes villes.",
                                   "Les centrales nucléaires en France se font vieilles.",
                                   "Le virus hautement mortel du glacier Pandore a infecté  la Russie. Que doit faire la France ?",
                                   "La fin du monde sur Terre semble inévitable. Elon musk est enfin prêt à conoliser Mars et y établir une nouvelle humanité."};
QString text_image[nb_tour] = {"trump","ingenieur","canicule","nucleaire_simpson","virus_masque_gaz","elon_musk"};
QString image_fin[3] = {"passenger","will_smith","planete_sans_humain"};
QString texte_fin[3] = {"Vous avez embarqué pour une nouvelle vie ! Malgré votre entousiasme, vous vous rendez compte que la vie sur Mars est un enfer. \nLa raréfaction des ressources a entrainé une guere civile"
                        "et le canibalisme commence à prendre de l'ampleur.\nSous la peur, Elon Musk décide de rejoindre une exo-planète où la vie sera plus douce."
                        "\nVous voilà reparti à bord du vaisseau spatial L'Avalon pour un voyage de 90 ans en hibernation dans des capsultes dernières technologies\n Direction HD 209458 b !",
                        "Vous décidez de payer toute votre fortune pour construire un bunker pour durer une éternité. \nVous restez cependant beaucoup trop longtemps dans ce bunker et"
                        "vos tomates et votre viande cultivés sous Terre vous dégoute. Vous décidez de sortir dehors après 50 ans passée dans ce Bunker.\n"
                        "Vous découvrez que la Terre n'est plus menacé par une vague nucléaire et que certains humains ont survécus !",
                       "Vous avez décidé de rester seul sur Terre. C'est votre choix et il vous appartient. La planète reprend ses droits et vous errez dans un monde transformé.\n"
                        "Seul quelques humains ont survécu aux multiples vagues d'épidémies et de catastrophes nucléaires. Vous décidez de vous joindre à eux.\n"
                        "La Terre respire mieux et vous êtes ravi. HIGH FIVE !!!"
                        };
QString texte_fin_nucleaire = "Une explosion nucléaire sans précédent déclenche une explosion en chaîne de tous les réacteurs sur le territoire français.\n"
                              "La France a disparu des radars et la vague de propagation atteint rapidement les autres continents.\n"
                              "Il ne suffira que de quelques jours pour que la Terre ne soit plus habitable.\n"
                              "Seul quelques êtres sous-terres ont survécu.\nLa Terre est enfin débarassé de vous ! \nDOMMAGE !";
QString texte_fin_virus = "Le virus Pandore a transformé tous les Russes en zombie et les Américains s'en font un plaisir !\n"
                          "Vous êtes un fan de Call of Duty, alors prenez votre meilleur pompe et tentez de survivre aux vagues ennemis !";
int choix_button1[nb_tour] = {1000,0,0,1,-1,0}; // santeTerre + réduire arbres et plantes fixes, nv technologique, santeTerre, Sante Terre, nb humain en - en % ou pas, nombre par défaut pour scénario de fin
int choix_button2[nb_tour] = {100,1,500,-1,10,1};
int choix_button3[nb_tour] = {500,2,2000,0,5,2};
int choix = 0;

fenetre2::fenetre2(QWidget *parent,int nbHumain, int nbVache, int nbConifere,int nbAlgue) :
    QMainWindow(parent),
    ui(new Ui::fenetre2)
{
    ui->setupUi(this);
    setFixedSize(1200,600);

    //Initialiser les membres de la classe fenetre2
    terre = new Terre();
    EcosystMarin = new EcosystemeMarin(terre);
    EcosystTerrestre = new EcosystemeTerrestre(terre);
    vache = new Vache(terre);
    hum = new Humain(terre);
    conifere = new Conifere(terre);
    algue = new Algue(terre);



    /*Créer les êtres êtres vivants selon le nombre choisi par l'utilisateur au début du jeu et les inscrire dans la
    liste des êtres vivants de la terre (à travers leurs constructeurs).*/
    for(int i = 0; i<nbVache-1; i++){
       Vache vache(terre);
    }

    for(int i = 0; i<nbHumain-1; i++){
        Humain hum(terre);
    }

    for(int i = 0; i<nbConifere-1; i++){
        Conifere conifere(terre);
    }

    for(int i = 0; i< nbAlgue-1; i++){
        Algue algue(terre);
    }

    //QPixmap nemo1("nemo");
   /* QPixmap terreNucleaire("terre_nucleaire");
    QPixmap wally1(QCoreApplication::applicationDirPath() +"/wally");
    QPixmap nemo1("nemo");
    QPixmap trump("trump");
    QPixmap Vache("vache_qui_rit");
    QPixmap Dory("dory");
    QPixmap Foret("foret_potter");

    ui->P1_Eco_Terre_Image->setPixmap(wally1.scaled(150,150,Qt::KeepAspectRatio));
    ui->P1_Eco_Marin_Image->setPixmap(nemo1.scaled(150,150,Qt::KeepAspectRatio));

    ui->P3_Image_Vache->setPixmap(Vache.scaled(180,180,Qt::KeepAspectRatio));
    ui->P1_Image_Dory->setPixmap(Dory.scaled(150,150,Qt::KeepAspectRatio));
    ui->P3_Image_Foret->setPixmap(Foret.scaled(180,180,Qt::KeepAspectRatio));
 */

    /* Images de la fenêtre de jeu */
    //QPixmap wally1("wally");
    QPixmap vache_rit("vache_qui_rit");
     QPixmap Foret("foret_potter");
     QPixmap Dory("dory");

     ui->P3_Image_Vache->setPixmap(vache_rit.scaled(180,180,Qt::KeepAspectRatio));
     ui->P3_Image_Foret->setPixmap(Foret.scaled(180,180,Qt::KeepAspectRatio));
     ui->P1_Image_Dory->setPixmap(Dory.scaled(150,150,Qt::KeepAspectRatio));
    // ui->P1_Eco_Terre_Image->setPixmap(wally1.scaled(150,150,Qt::KeepAspectRatio));



    /* Attributs numériques du jeu à afficher*/
     ui->P3_Flore->setText("Flore : "+QString::number(Flore::getNbFlore()));
     ui->P3_Humain->setText("Humains : "+QString::number(Humain::getNbHumains()));
     ui->P3_Vache->setText("Vaches : "+QString::number(Vache::getNbVaches()));
     ui->P3_Faune->setText("Faune : "+QString::number(Faune::getNbFaune()));
     ui->P3_Conifere->setText("Coniferes : "+QString::number(Conifere::getNbConiferes()));
     ui->P3_Algue->setText("Algues : "+QString::number(Algue::getNbAlgues()));
      ui->P3_Vache_pollution->setText("Methane : "+QString::number(Vache::getMethane()));
      ui->P3_Conifere_O2->setText("O2 : "+QString::number(conifere->getO2()));
      ui->P3_Algue_O2->setText("O2 : "+QString::number(algue->getO2()));
      ui->P3_Humain_nv_tech->setText("Niveau Technologique : "+QString::number(Humain::getNiveauTechnologique()));
      ui->P1_Eco_Marin_Sante->setText("Santé Ecosystème Marin : "+QString::number(EcosystMarin->getSanteEcosysteme()));
      ui->P1_Eco_Terre_Sante->setText("Santé Ecosystème Terrestre : "+QString::number(EcosystTerrestre->getSanteEcosysteme()));

      ui->P2_Texte_Evev->setText(text_principal[0]);
      ui->P2_button_choix1->setText(text_button1[0]);
      ui->P2_button_choix2->setText(text_button2[0]);
      ui->P2_button_choix3->setText(text_button3[0]);

      //EcosystMarin->changerSante(terre);
      //EcosystTerrestre->changerSante(terre);
      //terre->gestionTemps(EcosystMarin,EcosystTerrestre);
      //initialiserSante();

}

void fenetre2::on_bouton_fenetre2_clicked() // bouton retour menu
{
    parentWidget()->show();
    //close() automatique
}

fenetre2::~fenetre2()
{
    delete ui;

}

void fenetre2::on_bouton_action_clicked() // bouton passer temps
{

    if(ui->P2_button_choix1->isChecked() ||ui->P2_button_choix2->isChecked() || ui->P2_button_choix3->isChecked()){
        terre->gestionTemps(EcosystMarin,EcosystTerrestre);
        terre->calculSante();

    }
    else{
        QMessageBox::warning(this, "Houston, we have a problem", "Attention, veuillez sélectionner au moins une option !");
    }
    //QPixmap image_histoire(text_image[terre->getTemps()/10]);
    //ui->P2_Image->setPixmap(image_histoire.scaled(500,500,Qt::KeepAspectRatio));

    if(terre->getTemps()/10 < nb_tour){ // notre scénario s'arrête à 6, fin différente
        // #### partie groupBox pour le choix des actions ####
        // affichage actualisé
        ui->P2_button_choix1->setText(text_button1[terre->getTemps()/10]);
        ui->P2_button_choix2->setText(text_button2[terre->getTemps()/10]);
        ui->P2_button_choix3->setText(text_button3[terre->getTemps()/10]);
        ui->P2_Texte_Evev->setText(text_principal[terre->getTemps()/10]);

        // on recupere le choix de l'utilisateur
        if(terre->getTemps()/10 == 1){
            if(ui->P2_button_choix1->isChecked()) choix = choix_button1[terre->getTemps()/10-1];
            if(ui->P2_button_choix2->isChecked()) choix = choix_button2[terre->getTemps()/10-1];
            if(ui->P2_button_choix3->isChecked()) choix = choix_button3[terre->getTemps()/10-1];



            //EcosystTerrestre->setSanteEcosysteme( EcosystTerrestre->getSanteEcosysteme()+ choix);


            terre->tuerNEtresVivants(choix,2);

            }

        if(terre->getTemps()/10 == 2){
            if(ui->P2_button_choix1->isChecked()) choix = choix_button1[terre->getTemps()/10-1];
            if(ui->P2_button_choix2->isChecked()) choix = choix_button2[terre->getTemps()/10-1];
            if(ui->P2_button_choix3->isChecked()) choix = choix_button3[terre->getTemps()/10-1];


            hum->setNiveauTechnologique( hum->getNiveauTechnologique() + choix);
            //terre->ajouterNEtresVivants(choix,3);


            }

        if(terre->getTemps()/10 == 3){
            if(ui->P2_button_choix1->isChecked()) choix = choix_button1[terre->getTemps()/10-1];
            if(ui->P2_button_choix2->isChecked()) choix = choix_button2[terre->getTemps()/10-1];
            if(ui->P2_button_choix3->isChecked()) choix = choix_button3[terre->getTemps()/10-1];

           // EcosystTerrestre->setSanteEcosysteme(EcosystTerrestre->getSanteEcosysteme() + choix);

            terre->tuerNEtresVivants(choix,3);


        }

        if(terre->getTemps()/10 == 4){
            if(ui->P2_button_choix1->isChecked()) choix = choix_button1[terre->getTemps()/10-1];
            if(ui->P2_button_choix2->isChecked()) choix = choix_button2[terre->getTemps()/10-1];
            if(ui->P2_button_choix3->isChecked()) choix = choix_button3[terre->getTemps()/10-1];

            hum->setNiveauTechnologique( hum->getNiveauTechnologique() + choix);

            //terre->tuerNEtresVivants(500,2);

        }

        if(terre->getTemps()/10 == 5){
            if(ui->P2_button_choix1->isChecked()) choix = choix_button1[terre->getTemps()/10-1];
            if(ui->P2_button_choix2->isChecked()) choix = choix_button2[terre->getTemps()/10-1];
            if(ui->P2_button_choix3->isChecked()) choix = choix_button3[terre->getTemps()/10-1];

           // EcosystTerrestre->setSanteEcosysteme(EcosystTerrestre->getSanteEcosysteme() + choix);

            terre->tuerNEtresVivants(choix,0);

        }
        if(choix == -1 && terre->getTemps()/10 == 4){
         //   QPixmap Image_Fin_Monde("terre_nucleaire");
          //  ui->P2_Image->setPixmap(Image_Fin_Monde.scaled(500,500,Qt::KeepAspectRatio));
            ui->P2_Texte_Evev->setText(texte_fin_nucleaire);
             terre->setSanteTerre(0);
            ui->P2_GroupBox->hide();
            ui->bouton_action->setEnabled(false);
        }
        if(choix == -1 && terre->getTemps()/10 == 5){
            // QPixmap Image_Fin_Monde_Virus("warZ");
          //  ui->P2_Image->setPixmap(Image_Fin_Monde_Virus.scaled(500,500,Qt::KeepAspectRatio));
            ui->P2_Texte_Evev->setText(texte_fin_virus);
            terre->setSanteTerre(0);
            ui->P2_GroupBox->hide();
            ui->bouton_action->setEnabled(false);
        }



    }

    else{
       // QPixmap Image_Fin(image_fin[choix]);
       // ui->P2_Image->setPixmap(Image_Fin.scaled(500,500,Qt::KeepAspectRatio));


            if(ui->P2_button_choix1->isChecked()) choix = choix_button1[terre->getTemps()/10-1];
            if(ui->P2_button_choix2->isChecked()) choix = choix_button2[terre->getTemps()/10-1];
            if(ui->P2_button_choix3->isChecked()) choix = choix_button3[terre->getTemps()/10-1];

        ui->P2_Texte_Evev->setText(texte_fin[choix]);
        ui->P2_GroupBox->hide();
        ui->bouton_action->setEnabled(false);
    }

    /*// #### partie groupBox pour le choix des actions ####
    // affichage actualisé
    ui->P2_button_choix1->setText(text_button1[terre->getTemps()/10]);
    ui->P2_button_choix2->setText(text_button2[terre->getTemps()/10]);
    ui->P2_button_choix3->setText(text_button3[terre->getTemps()/10]);
    ui->P2_Texte_Evev->setText(text_principal[terre->getTemps()/10]);

    // on recupere le choix de l'utilisateur
    if(ui->P2_button_choix1->isChecked()){
        choix = choix_button1[terre->getTemps()/10];
        // METTRE FONCTION POUR AGIR SUR HUMAIN
    }
    else if(ui->P2_button_choix2->isChecked()){
        choix = choix_button2[terre->getTemps()/10];
        // METTRE FONCTION POUR AGIR SUR ALGUES
    }
    else if(ui->P2_button_choix2->isChecked()){
        choix = choix_button3[terre->getTemps()/10];
        // METTRE FONCTION POUR AGIR SUR CONIFERES
    }*/

    //Mise à jour affichage
     ui->progressBar->setValue(terre->getSante());


      ui->P3_Flore->setText("Flore : "+QString::number(Flore::getNbFlore()));
      ui->P3_Humain->setText("Humains : "+QString::number(Humain::getNbHumains()));
      ui->P3_Vache->setText("Vaches : "+QString::number(Vache::getNbVaches()));
      ui->P3_Faune->setText("Faune : "+QString::number(Faune::getNbFaune()));
      ui->P3_Conifere->setText("Coniferes : "+QString::number(Conifere::getNbConiferes()));
      ui->P3_Algue->setText("Algues : "+QString::number(Algue::getNbAlgues()));
      ui->P2_Temps->setText("Temps : "+QString::number(2030 + terre->getTemps()));
      ui->P3_Vache_pollution->setText("Méthane : "+QString::number(Vache::getMethane()));
      ui->P3_Conifere_O2->setText("O2 : "+QString::number(conifere->getO2()));
      ui->P3_Algue_O2->setText("O2 : "+QString::number(algue->getO2()));
      ui->P3_Humain_nv_tech->setText("Niveau Technologique : "+QString::number(Humain::getNiveauTechnologique()));
      ui->P1_Eco_Marin_Sante->setText("Santé Ecosystème Marin : "+QString::number(EcosystMarin->getSanteEcosysteme()));
      ui->P1_Eco_Terre_Sante->setText("Santé Ecosystème Terrestre : "+QString::number(EcosystTerrestre->getSanteEcosysteme()));

}
