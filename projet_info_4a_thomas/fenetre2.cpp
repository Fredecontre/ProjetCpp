#include "fenetre2.h"
#include "ui_fenetre2.h"

fenetre2::fenetre2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fenetre2)
{
    ui->setupUi(this);
    setFixedSize(dw.width()*0.965,dw.height());
    terre = new Terre();
    ui->progressBar->setValue(terre->getSante());
    //QObject::connect(ui->bouton_action,SIGNAL(clicked()),ui->progressBar,SLOT(progressBarValue()));
}

/*void fenetre2::progressBarValue(){
    terre->gestionTemps();
    ui->progressBar->setValue(terre->getSante());
}*/

void fenetre2::on_bouton_fenetre2_clicked()
{
    parentWidget()->show();
    //close()
}

fenetre2::~fenetre2()
{
    delete ui;
}

void fenetre2::on_bouton_action_clicked()
{
    terre->gestionTemps();
    ui->progressBar->setValue(terre->getSante());
}
