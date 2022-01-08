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
    explicit fenetre2(QWidget *parent = 0);
    ~fenetre2();

private slots:
    void on_bouton_fenetre2_clicked();
/*public slots:
    void progressBarValue();*/

    void on_bouton_action_clicked();

private:
    Ui::fenetre2 *ui;
    QDesktopWidget dw;
    Terre *terre;
    vector<EtreVivant*> Etres;
};

#endif // FENETRE2_H
