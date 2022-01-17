#ifndef FENETRE2_H
#define FENETRE2_H

#include <QMainWindow>
#include <QDesktopWidget>
#include "terre.h"
#include "etrevivant.h"

namespace Ui {
class fenetre2;
}

class fenetre2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit fenetre2(QWidget *parent = 0, int nbHumain=0, int nbVache=0, int nbConifere=0, int nbAlgue=0);
    ~fenetre2();

private slots:
    void on_bouton_fenetre2_clicked();
/*public slots:
    void progressBarValue();*/

    void on_bouton_action_clicked();

private:
    Ui::fenetre2 *ui;
    QDesktopWidget dw;
    Terre* terre;
    EcosystemeMarin *EcosystMarin;
    EcosystemeTerrestre *EcosystTerrestre;

    //Un exemplaire de chaque être vivant pour l'affichage
    Vache* vache;
    Humain* hum;
    Conifere* conifere;
    Algue* algue;

};

#endif // FENETRE2_H
