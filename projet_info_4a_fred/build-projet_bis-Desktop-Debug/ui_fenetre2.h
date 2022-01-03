/********************************************************************************
** Form generated from reading UI file 'fenetre2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETRE2_H
#define UI_FENETRE2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fenetre2
{
public:
    QWidget *centralwidget;
    QPushButton *bouton_fenetre2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *fenetre2)
    {
        if (fenetre2->objectName().isEmpty())
            fenetre2->setObjectName(QStringLiteral("fenetre2"));
        fenetre2->resize(800, 600);
        centralwidget = new QWidget(fenetre2);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        bouton_fenetre2 = new QPushButton(centralwidget);
        bouton_fenetre2->setObjectName(QStringLiteral("bouton_fenetre2"));
        bouton_fenetre2->setGeometry(QRect(300, 210, 89, 25));
        fenetre2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(fenetre2);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        fenetre2->setMenuBar(menubar);
        statusbar = new QStatusBar(fenetre2);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        fenetre2->setStatusBar(statusbar);

        retranslateUi(fenetre2);
        QObject::connect(bouton_fenetre2, SIGNAL(clicked()), fenetre2, SLOT(close()));

        QMetaObject::connectSlotsByName(fenetre2);
    } // setupUi

    void retranslateUi(QMainWindow *fenetre2)
    {
        fenetre2->setWindowTitle(QApplication::translate("fenetre2", "MainWindow", Q_NULLPTR));
        bouton_fenetre2->setText(QApplication::translate("fenetre2", "retour menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fenetre2: public Ui_fenetre2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETRE2_H
