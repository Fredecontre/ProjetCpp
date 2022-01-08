#include "fenetre1.h"
#include "ui_fenetre1.h"
#include "fenetre2.h"
#include <QDesktopWidget>

fenetre1::fenetre1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fenetre1)
{
    ui->setupUi(this);
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
