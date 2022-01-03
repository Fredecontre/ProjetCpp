#ifndef FENETRE2_H
#define FENETRE2_H

#include <QMainWindow>

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

private:
    Ui::fenetre2 *ui;
};

#endif // FENETRE2_H
