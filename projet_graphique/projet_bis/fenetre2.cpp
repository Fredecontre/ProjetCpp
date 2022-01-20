#include "fenetre2.h"
#include "ui_fenetre2.h"
#include <QPixmap>


#define nb_tour 6

QString text_button1[nb_tour] = {"Make America Great Again","RRRrrrr!!!","J'ai toujours cru en elle !","Exporter la nouvelle technologie française partout en France et dans le monde",
                                 "On s'en fou, c'est rien","Let's gooooo"};
QString text_button2[nb_tour] = {"Envoyer Greta Thunberg au front","+ 1","Je fais tout en Vélib de toute façon","Il est solide le machin","Ho non pas encore un confinement","Un bon bunker fera l'affaire"};
QString text_button3[nb_tour] = {"Envoyer Tiger Woods lui donner des cours","+2","Gilet Jaune héhé","Fermons toutes les centrales ! Le nucléaire n'a jamais était une énergie verte !",
                                 "Un confinement de 10 ans","Je n'abandonne pas ma Terre"};
QString text_principal[nb_tour] = {"Trump a encore perdu au golf ! Melania n'arrive plus à le calmer :( Pris de folie furieuse, il décide de quitter de nouveau l'accord\n de Paris et "
                                   "de promouvoir les voitures thermiques.",
                                   "Venise est le prochain Atlantide si vous ne faites rien. Il faut trouver des solutions technologiques et vite !",
                                   "Il fait beaucoup trop chaud sur Paris et dans toute la France (même en Bretage). Il faut impérativement réduire les émissions \n"
                                   "de CO2. Hildago, élue présidente, veut interdite les voitures dans tout Paris et les plus grandes villes.",
                                   "Les centrales nucléaires en France se font vieilles.",
                                   "Le virus hautement mortel du glacier Pandore a infecté  la Russie. Que dois faire la France ?",
                                   "La fin du monde sur Terre semble inévitable. Elon musk est fin prêt à conoliser Mars et y établir une nouvelle humanité."};
//QString text_image[nb_tour] = {"trump","ingenieur","canicule","nucleaire_simpson","virus_masque_gaz","elon_musk"};
//QString text_image[nb_tour] = {"elon_musk","trump","ingenieur","canicule","nucleaire_simpson","virus_masque_gaz"};
int choix_button1[nb_tour] = {0,1000,1}; // santeTerre, nv technologique, santeEcosysteme, Sante Ecosysteme, nb humain,
int choix_button2[nb_tour] = {0,-20000,-10}; // algues
int choix_button3[nb_tour] = {0,-2000,-5}; // coniferes
int choix_button4[nb_tour] = {0,50,2}; // vaches
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
    QPixmap vache_rit("vache_qui_rit");
     QPixmap Foret("foret_potter");
     QPixmap Dory("dory");

     ui->P3_Image_Vache->setPixmap(vache_rit.scaled(180,180,Qt::KeepAspectRatio));
     ui->P3_Image_Foret->setPixmap(Foret.scaled(180,180,Qt::KeepAspectRatio));
     ui->P1_Image_Dory->setPixmap(Dory.scaled(150,150,Qt::KeepAspectRatio));



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
void fenetre2::initialiserSante(){

    int impHumain;
    int impactVache;
    int impactConifere;


    //On traite ici que l'impact sur l'écologie de l'ecosystème terrestre des humains, vaches, et conifères
    for(auto iter = terre->getEtresVivants().begin() ; iter != terre->getEtresVivants().end(); iter++){


        if((*iter)->getType()==0){


            (*iter)->impactEcologique();

            impHumain=((*iter)->getImpactEcologique() )* Humain::getNbHumains();

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
    EcosystTerrestre->setSanteEcosysteme(impactVache/1000 + (int)impactConifere/1000 + (int)impHumain/400) ;






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


     EcosystMarin->setSanteEcosysteme((int)impactAlgue/10000 + (int)impactHumain/400);
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

    terre->gestionTemps(EcosystMarin,EcosystTerrestre);
    terre->calculSante();
    //QPixmap image_histoire(text_image[terre->getTemps()/10]);
    //ui->P2_Image->setPixmap(image_histoire.scaled(500,500,Qt::KeepAspectRatio));

    // #### partie groupBox pour le choix des actions ####
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
    }

    //Mise à jour affichage
     ui->progressBar->setValue(terre->getSante());


      ui->P3_Flore->setText("Flore : "+QString::number(Flore::getNbFlore()));
      ui->P3_Humain->setText("Humains : "+QString::number(Humain::getNbHumains()));
      ui->P3_Vache->setText("Vaches : "+QString::number(Vache::getNbVaches()));
      ui->P3_Faune->setText("Faune : "+QString::number(Faune::getNbFaune()));
      ui->P3_Conifere->setText("Coniferes : "+QString::number(Conifere::getNbConiferes()));
      ui->P3_Algue->setText("Algues : "+QString::number(Algue::getNbAlgues()));
      ui->P2_Temps->setText("Temps : "+QString::number(terre->getTemps()));
      ui->P3_Vache_pollution->setText("Méthane : "+QString::number(Vache::getMethane()));
      ui->P3_Conifere_O2->setText("O2 : "+QString::number(conifere->getO2()));
      ui->P3_Algue_O2->setText("O2 : "+QString::number(algue->getO2()));
      ui->P3_Humain_nv_tech->setText("Niveau Technologique : "+QString::number(Humain::getNiveauTechnologique()));
      ui->P1_Eco_Marin_Sante->setText("Santé Ecosystème Marin : "+QString::number(EcosystMarin->getSanteEcosysteme()));
      ui->P1_Eco_Terre_Sante->setText("Santé Ecosystème Terrestre : "+QString::number(EcosystTerrestre->getSanteEcosysteme()));

}
