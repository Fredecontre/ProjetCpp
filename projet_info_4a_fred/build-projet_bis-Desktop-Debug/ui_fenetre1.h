/********************************************************************************
** Form generated from reading UI file 'fenetre1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETRE1_H
#define UI_FENETRE1_H

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

class Ui_fenetre1
{
public:
    QWidget *centralwidget;
    QPushButton *bouton_fenetre1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *fenetre1)
    {
        if (fenetre1->objectName().isEmpty())
            fenetre1->setObjectName(QStringLiteral("fenetre1"));
        fenetre1->resize(800, 600);
        centralwidget = new QWidget(fenetre1);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        bouton_fenetre1 = new QPushButton(centralwidget);
        bouton_fenetre1->setObjectName(QStringLiteral("bouton_fenetre1"));
        bouton_fenetre1->setGeometry(QRect(380, 200, 89, 25));
        fenetre1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(fenetre1);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        fenetre1->setMenuBar(menubar);
        statusbar = new QStatusBar(fenetre1);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        fenetre1->setStatusBar(statusbar);

        retranslateUi(fenetre1);

        QMetaObject::connectSlotsByName(fenetre1);
    } // setupUi

    void retranslateUi(QMainWindow *fenetre1)
    {
        fenetre1->setWindowTitle(QApplication::translate("fenetre1", "MainWindow", Q_NULLPTR));
        bouton_fenetre1->setText(QApplication::translate("fenetre1", "go", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fenetre1: public Ui_fenetre1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETRE1_H
