#include <QApplication>
#include "fenetre1.h"
#include "fenetre2.h"
#include "terre.h"
#include "ecosysteme.h"
#include "etrevivant.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    fenetre1 page1;
    page1.show();
    return app.exec();
}
