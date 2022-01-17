#include "fenetre2.h"
#include "ui_fenetre2.h"
#include <QPixmap>
#include "ecosysteme.h"

fenetre2::fenetre2(QWidget *parent,int nbHumain, int nbVache, int nbConifere,int nbAlgue) :
    QMainWindow(parent),
    ui(new Ui::fenetre2)
{
    ui->setupUi(this);
    //setFixedSize(dw.width()*0.965,dw.height());

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

    for(int i = 0; i<nbAlgue-1; i++){
        Algue algue(terre);
    }





    //QPixmap pix("/home/polytech/build-projet_bis-Desktop-Debug/image_flore.jpg");
    //QPixmap pix(QCoreApplication::applicationDirPath() + "/image_flore.jpg");
    QPixmap pix("image_flore"); // pas de .jpg
    QPixmap pix2("terre_nucleaire");
    ui->P2_Terre_Image->setPixmap(pix2.scaled(ui->P2_Terre_Image->width(),ui->P2_Terre_Image->height(),Qt::KeepAspectRatio));
    //ui->P3_Flore_Image->setPixmap(pix);
    //ui->P3_Flore_Image->setPixmap(pix.scaled(500,50,Qt::KeepAspectRatio));
   // ui->P3_Faune_Image->setPixmap(pix.scaled(500,50,Qt::KeepAspectRatio));

     ui->P3_Flore->setText("Flore : "+QString::number(Flore::getNbFlore()));
      ui->P3_Humain->setText("Humains : "+QString::number(Humain::getNbHumains()));
      ui->P3_Vache->setText("Vaches : "+QString::number(Vache::getNbVaches()));
      ui->P3_Faune->setText("Faune : "+QString::number(Faune::getNbFaune()));
      ui->P3_Conifere->setText("Coniferes : "+QString::number(Conifere::getNbConiferes()));
      ui->P3_Algue->setText("Faune : "+QString::number(Algue::getNbAlgues()));
      ui->P2_Temps->setText("Temps : "+QString::number(terre->getTemps()));


      //ui->P3_Vache_pollution->setText("Methane : "+QString::number(dynamic_cast<Vache*>((terre->getEtresVivants())[1])->getMethane()));
     // ui->P3_Conifere_O2->setText("O2 : "+QString::number(dynamic_cast<Conifere*>((terre->getEtresVivants())[nbHumains+nbVaches+1])->getO2()*1000.000));
      ui->P3_Vache_pollution->setText("Methane : "+QString::number(Vache::getMethane()));
      ui->P3_Conifere_O2->setText("O2 : "+QString::number(conifere->getO2()));
      ui->P3_Algue_O2->setText("O2 : "+QString::number(algue->getO2()));
      ui->P3_Humain_nv_tech->setText("Niveau Technologique : "+QString::number(Humain::getNiveauTechnologique()));
      ui->P1_Eco_Marin_Sante->setText("Santé Ecosystème Marin : "+QString::number(EcosystMarin->getSanteEcosysteme()));
      ui->P1_Eco_Terre_Sante->setText("Santé Ecosystème Terrestre : "+QString::number(EcosystTerrestre->getSanteEcosysteme()));

      //EcosystMarin->changerSante(terre);
      //EcosystTerrestre->changerSante(terre);
      //terre->gestionTemps(EcosystMarin,EcosystTerrestre);

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

    //Mise à jour affichage
     ui->progressBar->setValue(terre->getSante());
    //ui->P3_Flore->setText("Flore : "+QString::number(EtreVivant::getNbEtresVivants()));

      ui->P3_Flore->setText("Flore : "+QString::number(Flore::getNbFlore()));
      ui->P3_Humain->setText("Humains : "+QString::number(Humain::getNbHumains()));
      ui->P3_Vache->setText("Vaches : "+QString::number(Vache::getNbVaches()));
      ui->P3_Faune->setText("Faune : "+QString::number(Faune::getNbFaune()));
      ui->P3_Conifere->setText("Coniferes : "+QString::number(Conifere::getNbConiferes()));
      ui->P3_Algue->setText("Faune : "+QString::number(Algue::getNbAlgues()));
      ui->P2_Temps->setText("Temps : "+QString::number(terre->getTemps()));
      ui->P3_Vache_pollution->setText("Methane : "+QString::number(Vache::getMethane()));
      ui->P3_Conifere_O2->setText("O2 : "+QString::number(conifere->getO2()));
      ui->P3_Algue_O2->setText("O2 : "+QString::number(algue->getO2()));
      ui->P3_Humain_nv_tech->setText("Niveau Technologique : "+QString::number(Humain::getNiveauTechnologique()));
      ui->P1_Eco_Marin_Sante->setText("Santé Ecosystème Marin : "+QString::number(EcosystMarin->getSanteEcosysteme()));
      ui->P1_Eco_Terre_Sante->setText("Santé Ecosystème Terrestre : "+QString::number(EcosystTerrestre->getSanteEcosysteme()));

}
