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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fenetre2
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout;
    QPushButton *bouton_fenetre2;
    QPushButton *bouton_action;
    QProgressBar *progressBar;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *P3_Titre;
    QSpacerItem *verticalSpacer;
    QLabel *P3_Flore;
    QSpacerItem *verticalSpacer_10;
    QLabel *P3_Flore_Image;
    QSpacerItem *verticalSpacer_11;
    QLabel *P3_Conifere;
    QSpacerItem *verticalSpacer_5;
    QLabel *P3_Conifere_O2;
    QSpacerItem *verticalSpacer_3;
    QLabel *P3_Algue;
    QSpacerItem *verticalSpacer_6;
    QLabel *P3_Algue_O2;
    QSpacerItem *verticalSpacer_4;
    QLabel *P3_Faune;
    QSpacerItem *verticalSpacer_12;
    QLabel *P3_Faune_Image;
    QSpacerItem *verticalSpacer_13;
    QLabel *P3_Humain;
    QSpacerItem *verticalSpacer_7;
    QLabel *P3_Humain_CO2;
    QSpacerItem *verticalSpacer_9;
    QLabel *P3_Vache;
    QSpacerItem *verticalSpacer_8;
    QLabel *P3_Vache_CO2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QMainWindow *fenetre2)
    {
        if (fenetre2->objectName().isEmpty())
            fenetre2->setObjectName(QStringLiteral("fenetre2"));
        fenetre2->resize(948, 487);
        centralwidget = new QWidget(fenetre2);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        bouton_fenetre2 = new QPushButton(centralwidget);
        bouton_fenetre2->setObjectName(QStringLiteral("bouton_fenetre2"));

        gridLayout->addWidget(bouton_fenetre2, 0, 3, 1, 1);

        bouton_action = new QPushButton(centralwidget);
        bouton_action->setObjectName(QStringLiteral("bouton_action"));

        gridLayout->addWidget(bouton_action, 0, 0, 1, 1);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(100);

        gridLayout->addWidget(progressBar, 0, 2, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        P3_Titre = new QLabel(centralwidget);
        P3_Titre->setObjectName(QStringLiteral("P3_Titre"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(P3_Titre->sizePolicy().hasHeightForWidth());
        P3_Titre->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        P3_Titre->setFont(font);
        P3_Titre->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(P3_Titre);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        P3_Flore = new QLabel(centralwidget);
        P3_Flore->setObjectName(QStringLiteral("P3_Flore"));
        sizePolicy.setHeightForWidth(P3_Flore->sizePolicy().hasHeightForWidth());
        P3_Flore->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(P3_Flore);

        verticalSpacer_10 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_10);

        P3_Flore_Image = new QLabel(centralwidget);
        P3_Flore_Image->setObjectName(QStringLiteral("P3_Flore_Image"));
        P3_Flore_Image->setEnabled(true);
        sizePolicy.setHeightForWidth(P3_Flore_Image->sizePolicy().hasHeightForWidth());
        P3_Flore_Image->setSizePolicy(sizePolicy);
        P3_Flore_Image->setFrameShape(QFrame::NoFrame);
        P3_Flore_Image->setFrameShadow(QFrame::Plain);

        verticalLayout->addWidget(P3_Flore_Image);

        verticalSpacer_11 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_11);

        P3_Conifere = new QLabel(centralwidget);
        P3_Conifere->setObjectName(QStringLiteral("P3_Conifere"));
        sizePolicy.setHeightForWidth(P3_Conifere->sizePolicy().hasHeightForWidth());
        P3_Conifere->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(P3_Conifere);

        verticalSpacer_5 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);

        P3_Conifere_O2 = new QLabel(centralwidget);
        P3_Conifere_O2->setObjectName(QStringLiteral("P3_Conifere_O2"));
        sizePolicy.setHeightForWidth(P3_Conifere_O2->sizePolicy().hasHeightForWidth());
        P3_Conifere_O2->setSizePolicy(sizePolicy);
        P3_Conifere_O2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(P3_Conifere_O2);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        P3_Algue = new QLabel(centralwidget);
        P3_Algue->setObjectName(QStringLiteral("P3_Algue"));
        sizePolicy.setHeightForWidth(P3_Algue->sizePolicy().hasHeightForWidth());
        P3_Algue->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(P3_Algue);

        verticalSpacer_6 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_6);

        P3_Algue_O2 = new QLabel(centralwidget);
        P3_Algue_O2->setObjectName(QStringLiteral("P3_Algue_O2"));
        sizePolicy.setHeightForWidth(P3_Algue_O2->sizePolicy().hasHeightForWidth());
        P3_Algue_O2->setSizePolicy(sizePolicy);
        P3_Algue_O2->setAlignment(Qt::AlignCenter);
        P3_Algue_O2->setIndent(-1);

        verticalLayout->addWidget(P3_Algue_O2);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        P3_Faune = new QLabel(centralwidget);
        P3_Faune->setObjectName(QStringLiteral("P3_Faune"));
        sizePolicy.setHeightForWidth(P3_Faune->sizePolicy().hasHeightForWidth());
        P3_Faune->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(P3_Faune);

        verticalSpacer_12 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_12);

        P3_Faune_Image = new QLabel(centralwidget);
        P3_Faune_Image->setObjectName(QStringLiteral("P3_Faune_Image"));
        sizePolicy.setHeightForWidth(P3_Faune_Image->sizePolicy().hasHeightForWidth());
        P3_Faune_Image->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(P3_Faune_Image);

        verticalSpacer_13 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_13);

        P3_Humain = new QLabel(centralwidget);
        P3_Humain->setObjectName(QStringLiteral("P3_Humain"));
        sizePolicy.setHeightForWidth(P3_Humain->sizePolicy().hasHeightForWidth());
        P3_Humain->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(P3_Humain);

        verticalSpacer_7 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_7);

        P3_Humain_CO2 = new QLabel(centralwidget);
        P3_Humain_CO2->setObjectName(QStringLiteral("P3_Humain_CO2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(P3_Humain_CO2->sizePolicy().hasHeightForWidth());
        P3_Humain_CO2->setSizePolicy(sizePolicy1);
        P3_Humain_CO2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(P3_Humain_CO2);

        verticalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_9);

        P3_Vache = new QLabel(centralwidget);
        P3_Vache->setObjectName(QStringLiteral("P3_Vache"));
        sizePolicy.setHeightForWidth(P3_Vache->sizePolicy().hasHeightForWidth());
        P3_Vache->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(P3_Vache);

        verticalSpacer_8 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_8);

        P3_Vache_CO2 = new QLabel(centralwidget);
        P3_Vache_CO2->setObjectName(QStringLiteral("P3_Vache_CO2"));
        sizePolicy.setHeightForWidth(P3_Vache_CO2->sizePolicy().hasHeightForWidth());
        P3_Vache_CO2->setSizePolicy(sizePolicy);
        P3_Vache_CO2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(P3_Vache_CO2);

        horizontalSpacer = new QSpacerItem(150, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);


        horizontalLayout_3->addLayout(verticalLayout);

        fenetre2->setCentralWidget(centralwidget);

        retranslateUi(fenetre2);
        QObject::connect(bouton_fenetre2, SIGNAL(clicked()), fenetre2, SLOT(close()));

        QMetaObject::connectSlotsByName(fenetre2);
    } // setupUi

    void retranslateUi(QMainWindow *fenetre2)
    {
        fenetre2->setWindowTitle(QApplication::translate("fenetre2", "MainWindow", Q_NULLPTR));
        bouton_fenetre2->setText(QApplication::translate("fenetre2", "retour menu", Q_NULLPTR));
        bouton_action->setText(QApplication::translate("fenetre2", "passer temps", Q_NULLPTR));
        pushButton->setText(QApplication::translate("fenetre2", "PushButton", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("fenetre2", "PushButton", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("fenetre2", "PushButton", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("fenetre2", "PushButton", Q_NULLPTR));
        P3_Titre->setText(QApplication::translate("fenetre2", "Informations", Q_NULLPTR));
        P3_Flore->setText(QApplication::translate("fenetre2", "Flore : NB", Q_NULLPTR));
        P3_Flore_Image->setText(QString());
        P3_Conifere->setText(QApplication::translate("fenetre2", "Conif\303\250res : NB", Q_NULLPTR));
        P3_Conifere_O2->setText(QApplication::translate("fenetre2", "O2 : X %", Q_NULLPTR));
        P3_Algue->setText(QApplication::translate("fenetre2", "Algues : NB", Q_NULLPTR));
        P3_Algue_O2->setText(QApplication::translate("fenetre2", "O2 : X %", Q_NULLPTR));
        P3_Faune->setText(QApplication::translate("fenetre2", "Faune : NB", Q_NULLPTR));
        P3_Faune_Image->setText(QString());
        P3_Humain->setText(QApplication::translate("fenetre2", "Humains : NB", Q_NULLPTR));
        P3_Humain_CO2->setText(QApplication::translate("fenetre2", "CO2 : X %", Q_NULLPTR));
        P3_Vache->setText(QApplication::translate("fenetre2", "Vaches : NB", Q_NULLPTR));
        P3_Vache_CO2->setText(QApplication::translate("fenetre2", "CO2 : X %", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fenetre2: public Ui_fenetre2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETRE2_H
