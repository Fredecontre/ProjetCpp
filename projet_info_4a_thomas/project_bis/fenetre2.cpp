#include "fenetre2.h"
#include "ui_fenetre2.h"
#include <QPixmap>
fenetre2::fenetre2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fenetre2)
{
    ui->setupUi(this);
    setFixedSize(dw.width()*0.965,dw.height());
    terre = new Terre();
    //QPixmap pix("/home/polytech/build-projet_bis-Desktop-Debug/image_flore.jpg");
    //QPixmap pix(QCoreApplication::applicationDirPath() + "/image_flore.jpg");
    QPixmap pix("image_flore"); // pas de .jpg
    //ui->P3_Flore_Image->setPixmap(pix);
    ui->P3_Flore_Image->setPixmap(pix.scaled(150,50,Qt::KeepAspectRatio));
    ui->P3_Faune_Image->setPixmap(pix.scaled(150,50,Qt::KeepAspectRatio));

    ui->P3_Flore->setText("Flore : "+QString::number(EtreVivant::getNbEtresVivants()));
}

void fenetre2::on_bouton_fenetre2_clicked()
{
    parentWidget()->show();
    //close() automatique
}

fenetre2::~fenetre2()
{
    delete ui;
}

void fenetre2::on_bouton_action_clicked()
{
    terre->gestionTemps();
    ui->P3_Flore->setText("Flore : "+QString::number(EtreVivant::getNbEtresVivants()));
    ui->progressBar->setValue(terre->getSante());
}
