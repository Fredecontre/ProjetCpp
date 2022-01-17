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
QString text_image[nb_tour] = {"trump","ingenieur","ingenieur","ingenieur","ingenieur","ingenieur"};
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
    setFixedSize(1250,715);
    terre = new Terre();
    //Etres.push_back(new Humain(terre));
    //Etres.push_back(new Vache(terre));
    Humain* hum = new Humain(terre);
    Vache* vache = new Vache(terre);
    //QPixmap pix("/home/polytech/build-projet_bis-Desktop-Debug/image_flore.jpg");
    //QPixmap pix(QCoreApplication::applicationDirPath() + "/image_flore.jpg");
    QPixmap terreNucleaire("terre_nucleaire");
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

    ui->P3_Flore->setText("Flore : "+QString::number(Flore::getNbFlore()));
      ui->P3_Humain->setText("Humains : "+QString::number(Humain::getNbHumains()));
      ui->P3_Vache->setText("Vaches : "+QString::number(Vache::getNbVaches()));
      ui->P3_Faune->setText("Faune : "+QString::number(Faune::getNbFaune()));
      ui->P3_Conifere->setText("Coniferes : "+QString::number(Conifere::getNbConiferes()));
      ui->P3_Algue->setText("Algue : "+QString::number(Algue::getNbAlgues()));
      ui->P2_Temps->setText("Année : "+QString::number(terre->getTemps()));
      //ui->P3_Vache_pollution->setText("Methane : "+QString::number(dynamic_cast<Vache*>((terre->getEtresVivants())[1])->getMethane()));
    ui->P2_Texte_Evev->setText(text_principal[0]);
    ui->P2_button_choix1->setText(text_button1[0]);
    ui->P2_button_choix2->setText(text_button2[0]);
    ui->P2_button_choix3->setText(text_button3[0]);
    ui->P2_Image->setPixmap(trump.scaled(500,500,Qt::KeepAspectRatio));
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

    QPixmap image_histoire(text_image[terre->getTemps()/10]);
    ui->P2_Image->setPixmap(image_histoire.scaled(500,500,Qt::KeepAspectRatio));
    // #### partie groupBox pour le choix des actions ####
    // affichage actualisé
    ui->P2_button_choix1->setText(text_button1[terre->getTemps()/10]);
    ui->P2_button_choix2->setText(text_button2[terre->getTemps()/10]);
    ui->P2_button_choix3->setText(text_button3[terre->getTemps()/10]);
    //ui->P2_button_choix4->setText(text_button4[terre->getTemps()/10]);
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
    //ui->P3_Flore->setText("Flore : "+QString::number(EtreVivant::getNbEtresVivants()));

      ui->P3_Flore->setText("Flore : "+QString::number(Flore::getNbFlore()));
      ui->P3_Humain->setText("Humains : "+QString::number(Humain::getNbHumains()));
      ui->P3_Vache->setText("Vaches : "+QString::number(Vache::getNbVaches()));
      ui->P3_Faune->setText("Faune : "+QString::number(Faune::getNbFaune()));
      ui->P3_Conifere->setText("Coniferes : "+QString::number(Conifere::getNbConiferes()));
      ui->P3_Algue->setText("Algue : "+QString::number(Algue::getNbAlgues()));
      ui->P2_Temps->setText("Année : "+QString::number(terre->getTemps()));
      ui->P3_Vache_pollution->setText("Methane : "+QString::number(dynamic_cast<Vache*>((terre->getEtresVivants())[1])->getMethane()));
}
