#include "fenetre2.h"
#include "ui_fenetre2.h"
#include <QPixmap>
#define nb_tour 10

QString text_button1[nb_tour] = {"","Augmenter le nombres d'êtres humain par 1000","Augmenter le niveau technologique de 1"};
QString text_button2[nb_tour] = {"","Diminuer le nombres d'algues par 20000","Diminuer le % O2 des algues"};
QString text_button3[nb_tour] = {"","Diminuer le nombres de conifères par 2000","Diminuler le % O2 des conifères"};
QString text_button4[nb_tour] = {"","Diminuer le nombres de vaches par 50","Augmenter le % de méthane des vaches"};
QString text_principal[nb_tour] = {"","Vous devez choisir entre privilégier l'être humain, la fone ou la flore","On arrête pas le progrès !"};

int choix_button1[nb_tour] = {0,1000,1}; // humain
int choix_button2[nb_tour] = {0,-20000,-10}; // algues
int choix_button3[nb_tour] = {0,-2000,-5}; // coniferes
int choix_button4[nb_tour] = {0,50,2}; // vaches
int choix = 0;

fenetre2::fenetre2(QWidget *parent,int nbHumain, int nbVache, int nbConifere,int nbAlgue) :
    QMainWindow(parent),
    ui(new Ui::fenetre2)
{
    ui->setupUi(this);
    //setFixedSize(dw.width()*0.965,dw.height());
    terre = new Terre();
    //Etres.push_back(new Humain(terre));
    //Etres.push_back(new Vache(terre));
    Humain* hum = new Humain(terre);
    Vache* vache = new Vache(terre);
    //QPixmap pix("/home/polytech/build-projet_bis-Desktop-Debug/image_flore.jpg");
    //QPixmap pix(QCoreApplication::applicationDirPath() + "/image_flore.jpg");
    QPixmap pix("image_flore"); // pas de .jpg
    QPixmap pix2("terre_nucleaire");
    QPixmap wally1("terre_hehehe");
    //ui->P2_Terre_Image->setPixmap(pix2.scaled(ui->P2_Terre_Image->width(),ui->P2_Terre_Image->height(),Qt::KeepAspectRatio));
    //ui->P3_Flore_Image->setPixmap(pix);
    //ui->P3_Flore_Image->setPixmap(pix.scaled(500,50,Qt::KeepAspectRatio));
   // ui->P3_Faune_Image->setPixmap(pix.scaled(500,50,Qt::KeepAspectRatio));
    //ui->P1_Eco_Terre_Image->setPixmap(wally1.scaled(500,500,Qt::KeepAspectRatio));
    ui->P1_Eco_Terre_Image->setPixmap(wally1);

    ui->P3_Flore->setText("Flore : "+QString::number(Flore::getNbFlore()));
      ui->P3_Humain->setText("Humains : "+QString::number(Humain::getNbHumains()));
      ui->P3_Vache->setText("Vaches : "+QString::number(Vache::getNbVaches()));
      ui->P3_Faune->setText("Faune : "+QString::number(Faune::getNbFaune()));
      ui->P3_Conifere->setText("Coniferes : "+QString::number(Conifere::getNbConiferes()));
      ui->P3_Algue->setText("Faune : "+QString::number(Algue::getNbAlgues()));
      ui->P2_Temps->setText("Temps : "+QString::number(terre->getTemps()));
      ui->P3_Vache_pollution->setText("Methane : "+QString::number(dynamic_cast<Vache*>((terre->getEtresVivants())[1])->getMethane()));
    ui->P2_Texte_Evev->setText("Votre objectif est simple : ressusciter la Terre");
    ui->P2_GroupBox->hide();
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

    terre->gestionTemps();

    // #### partie groupBox pour le choix des actions ####
    // affichage actualisé
    ui->P2_GroupBox->show();
    ui->P2_button_choix1->setText(text_button1[terre->getTemps()/10]);
    ui->P2_button_choix2->setText(text_button2[terre->getTemps()/10]);
    ui->P2_button_choix3->setText(text_button3[terre->getTemps()/10]);
    ui->P2_button_choix4->setText(text_button4[terre->getTemps()/10]);
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
    else{
        choix = choix_button4[terre->getTemps()/10];
        // METTRE FONCTION POUR AGIR SUR VACHES
    }

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
      ui->P3_Vache_pollution->setText("Methane : "+QString::number(dynamic_cast<Vache*>((terre->getEtresVivants())[1])->getMethane()));
}
