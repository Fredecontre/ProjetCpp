#include "fenetre1.h"
#include "ui_fenetre1.h"
#include "fenetre2.h"
#include <QDesktopWidget>

fenetre1::fenetre1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fenetre1)
{
    ui->setupUi(this);
    ui->description_jeu->setText("Nous sommes en 2030 et la Terre va mal.\n"
                                 "Les activités humaines ont causé un réchauffement climatique sans précédent enchaînant les catastrophes naturelles de plus en plus violentes.\n"
                                 "Le point critique de non retour va être atteint.  Trump est au pouvoir, la France vénère le nucléaire\n"
                                 " et la chute du glacier Pandore menace de libérer le plus grand virus que le monde est jamais connu.\n"
                                 "\n"
                                 "L'intelligence artificielle Hands on earth a besoin de vous ! Lancez la simulation à échelle réduite et faites les bon choix pour sauver la terre d'un destin tragique.");

    QPixmap hand("hand");
    ui->Image_Presentation->setPixmap(hand.scaled(700,450,Qt::KeepAspectRatio));
    setFixedSize(1200,600);

}

fenetre1::~fenetre1()
{
    delete ui;
}

void fenetre1::on_bouton_fenetre1_clicked()
{
    int nbHumain,nbVache,nbAlgue,nbConifere;
       // on regarde si au moins un des boutons de chaque checkbox est activé
       if( (ui->button_vache_choix1->isChecked() or ui->button_vache_choix2->isChecked() or ui->button_vache_choix3->isChecked()) and
           (ui->button_humain_choix1->isChecked() or ui->button_humain_choix2->isChecked() or ui->button_humain_choix3->isChecked()) and
           (ui->button_algue_choix1->isChecked() or ui->button_algue_choix2->isChecked() or ui->button_algue_choix3->isChecked()) and
           (ui->button_conifere_choix1->isChecked() or ui->button_conifere_choix2->isChecked() or ui->button_conifere_choix3->isChecked()) )
       {
           hide();
           if(ui->button_humain_choix1->isChecked()) nbHumain = 100;
           else if(ui->button_humain_choix2->isChecked()) nbHumain = 1000;
           else nbHumain = 2000;
           if(ui->button_vache_choix1->isChecked()) nbVache = 10;
           else if(ui->button_vache_choix2->isChecked()) nbVache = 100;
           else nbVache= 200;
           if(ui->button_conifere_choix1->isChecked()) nbConifere = 4000;
           else if(ui->button_conifere_choix1->isChecked()) nbConifere = 5000;
           else nbConifere= 10000;
           if(ui->button_algue_choix1->isChecked()) nbAlgue = 20000;
           else if(ui->button_algue_choix2->isChecked()) nbAlgue = 40000;
           else nbAlgue= 50000;

           // nb humain, nb vache, nb algue, nb conifere
           page2 = new fenetre2(this,nbHumain,nbVache,nbConifere,nbAlgue);
           page2->show();
       }
}
