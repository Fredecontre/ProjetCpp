#include "fenetre1.h"
#include "ui_fenetre1.h"
#include "fenetre2.h"
#include <QDesktopWidget>

fenetre1::fenetre1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fenetre1)
{
    ui->setupUi(this);
    QPixmap fond_ecran("terre_futur2");
    ui->image_fond->setPixmap(fond_ecran.scaled(ui->image_fond->width(),ui->image_fond->height(),Qt::KeepAspectRatio));
    //background-image:url(c:/Users/danny/Downloads/Tank-Konbackground.jpg);
    //ui->background::url(QCoreApplication::applicationDirPath() + "/terre_futur.png");
    //setStyleSheet("background-image: url(/home/polytech/build-projet_bis-Desktop-Debug/terre_futur.jpg);");

    setFixedSize(dw.width()*0.965,dw.height());
}

fenetre1::~fenetre1()
{
    delete ui;
}

void fenetre1::on_bouton_fenetre1_clicked()
{
    hide();
    page2 = new fenetre2(this);
    page2->show();
}
