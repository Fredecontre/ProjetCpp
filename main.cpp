#include <QApplication>
#include <QPushButton>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);


    QPushButton bouton("Salut les Zéros, la forme ?");
     bouton.setToolTip("Texte d'aide");
     QIcon(QCoreApplication::applicationDirPath() + "terre.png");
     bouton.setIcon(QIcon("terre.png"));
    bouton.show();


    return app.exec();
}
