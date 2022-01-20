#ifndef FENETRE1_H
#define FENETRE1_H

#include <QMainWindow>
#include "fenetre2.h"
#include <QDesktopWidget>

namespace Ui {
class fenetre1;
}

class fenetre1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit fenetre1(QWidget *parent = 0);
    ~fenetre1();

private slots:
    void on_bouton_fenetre1_clicked();

private:
    Ui::fenetre1 *ui;
    fenetre2 *page2;
    QDesktopWidget dw;
};

#endif // FENETRE1_H
