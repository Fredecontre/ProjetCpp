#include "fenetre2.h"
#include "ui_fenetre2.h"

fenetre2::fenetre2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fenetre2)
{
    ui->setupUi(this);
}

fenetre2::~fenetre2()
{
    delete ui;
}

void fenetre2::on_bouton_fenetre2_clicked()
{
    parentWidget()->show();
    //close()
}
