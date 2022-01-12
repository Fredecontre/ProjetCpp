#include "fenetre1.h"
#include "ui_fenetre1.h"
#include "fenetre2.h"
#include <QDesktopWidget>

fenetre1::fenetre1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fenetre1)
{
    ui->setupUi(this);
    //setFixedSize(dw.width()*0.965,dw.height());

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
           if(ui->button_conifere_choix1->isChecked()) nbConifere = 8000;
           else if(ui->button_conifere_choix1->isChecked()) nbConifere = 10000;
           else nbConifere= 20000;
           if(ui->button_algue_choix1->isChecked()) nbAlgue = 40000;
           else if(ui->button_algue_choix2->isChecked()) nbAlgue = 80000;
           else nbAlgue= 100000;

           // nb humain, nb vache, nb algue, nb conifere
           page2 = new fenetre2(this,nbHumain,nbVache,nbConifere,nbAlgue);
           page2->show();
       }
}
