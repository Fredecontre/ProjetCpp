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
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *P1_Eco_Marin;
    QLabel *P1_Eco_Marin_Sante;
    QLabel *P1_Eco_Marin_Image;
    QLabel *P1_Eco_Terre;
    QLabel *P1_Eco_Terre_Sante;
    QLabel *P1_Eco_Terre_Image;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *P2_Terre;
    QLabel *P2_Temps;
    QSpacerItem *verticalSpacer_14;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer_16;
    QLabel *P2_Terre_Image;
    QSpacerItem *verticalSpacer_27;
    QLabel *P2_Texte;
    QSpacerItem *verticalSpacer_17;
    QHBoxLayout *horizontalLayout;
    QPushButton *bouton_fenetre2;
    QPushButton *bouton_action;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *P3_Titre;
    QSpacerItem *verticalSpacer;
    QLabel *P3_Flore;
    QSpacerItem *verticalSpacer_10;
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
    QSpacerItem *verticalSpacer_13;
    QLabel *P3_Humain;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_18;
    QLabel *P3_Humain_nv_tech;
    QSpacerItem *verticalSpacer_9;
    QLabel *P3_Vache;
    QSpacerItem *verticalSpacer_8;
    QLabel *P3_Vache_pollution;
    QSpacerItem *verticalSpacer_15;
    QSpacerItem *horizontalSpacer;

    void setupUi(QMainWindow *fenetre2)
    {
        if (fenetre2->objectName().isEmpty())
            fenetre2->setObjectName(QStringLiteral("fenetre2"));
        fenetre2->resize(958, 481);
        centralwidget = new QWidget(fenetre2);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, -1);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        P1_Eco_Marin = new QLabel(centralwidget);
        P1_Eco_Marin->setObjectName(QStringLiteral("P1_Eco_Marin"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(P1_Eco_Marin->sizePolicy().hasHeightForWidth());
        P1_Eco_Marin->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(P1_Eco_Marin);

        P1_Eco_Marin_Sante = new QLabel(centralwidget);
        P1_Eco_Marin_Sante->setObjectName(QStringLiteral("P1_Eco_Marin_Sante"));
        sizePolicy1.setHeightForWidth(P1_Eco_Marin_Sante->sizePolicy().hasHeightForWidth());
        P1_Eco_Marin_Sante->setSizePolicy(sizePolicy1);
        P1_Eco_Marin_Sante->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        P1_Eco_Marin_Sante->setMargin(0);
        P1_Eco_Marin_Sante->setIndent(20);

        verticalLayout_4->addWidget(P1_Eco_Marin_Sante);

        P1_Eco_Marin_Image = new QLabel(centralwidget);
        P1_Eco_Marin_Image->setObjectName(QStringLiteral("P1_Eco_Marin_Image"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(P1_Eco_Marin_Image->sizePolicy().hasHeightForWidth());
        P1_Eco_Marin_Image->setSizePolicy(sizePolicy2);

        verticalLayout_4->addWidget(P1_Eco_Marin_Image);

        P1_Eco_Terre = new QLabel(centralwidget);
        P1_Eco_Terre->setObjectName(QStringLiteral("P1_Eco_Terre"));
        sizePolicy1.setHeightForWidth(P1_Eco_Terre->sizePolicy().hasHeightForWidth());
        P1_Eco_Terre->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(P1_Eco_Terre);

        P1_Eco_Terre_Sante = new QLabel(centralwidget);
        P1_Eco_Terre_Sante->setObjectName(QStringLiteral("P1_Eco_Terre_Sante"));
        sizePolicy1.setHeightForWidth(P1_Eco_Terre_Sante->sizePolicy().hasHeightForWidth());
        P1_Eco_Terre_Sante->setSizePolicy(sizePolicy1);
        P1_Eco_Terre_Sante->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        P1_Eco_Terre_Sante->setIndent(20);

        verticalLayout_4->addWidget(P1_Eco_Terre_Sante);

        P1_Eco_Terre_Image = new QLabel(centralwidget);
        P1_Eco_Terre_Image->setObjectName(QStringLiteral("P1_Eco_Terre_Image"));
        sizePolicy2.setHeightForWidth(P1_Eco_Terre_Image->sizePolicy().hasHeightForWidth());
        P1_Eco_Terre_Image->setSizePolicy(sizePolicy2);

        verticalLayout_4->addWidget(P1_Eco_Terre_Image);

        horizontalSpacer_2 = new QSpacerItem(150, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        verticalLayout_4->addItem(horizontalSpacer_2);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        P2_Terre = new QLabel(centralwidget);
        P2_Terre->setObjectName(QStringLiteral("P2_Terre"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(P2_Terre->sizePolicy().hasHeightForWidth());
        P2_Terre->setSizePolicy(sizePolicy3);
        P2_Terre->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(P2_Terre);

        P2_Temps = new QLabel(centralwidget);
        P2_Temps->setObjectName(QStringLiteral("P2_Temps"));

        verticalLayout_2->addWidget(P2_Temps);

        verticalSpacer_14 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_14);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(100);

        verticalLayout_2->addWidget(progressBar);

        verticalSpacer_16 = new QSpacerItem(0, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_16);

        P2_Terre_Image = new QLabel(centralwidget);
        P2_Terre_Image->setObjectName(QStringLiteral("P2_Terre_Image"));
        sizePolicy2.setHeightForWidth(P2_Terre_Image->sizePolicy().hasHeightForWidth());
        P2_Terre_Image->setSizePolicy(sizePolicy2);
        P2_Terre_Image->setScaledContents(true);
        P2_Terre_Image->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_2->addWidget(P2_Terre_Image);

        verticalSpacer_27 = new QSpacerItem(0, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_27);

        P2_Texte = new QLabel(centralwidget);
        P2_Texte->setObjectName(QStringLiteral("P2_Texte"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(P2_Texte->sizePolicy().hasHeightForWidth());
        P2_Texte->setSizePolicy(sizePolicy4);

        verticalLayout_2->addWidget(P2_Texte);

        verticalSpacer_17 = new QSpacerItem(0, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_17);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        bouton_fenetre2 = new QPushButton(centralwidget);
        bouton_fenetre2->setObjectName(QStringLiteral("bouton_fenetre2"));

        horizontalLayout->addWidget(bouton_fenetre2);

        bouton_action = new QPushButton(centralwidget);
        bouton_action->setObjectName(QStringLiteral("bouton_action"));

        horizontalLayout->addWidget(bouton_action);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        P3_Titre = new QLabel(centralwidget);
        P3_Titre->setObjectName(QStringLiteral("P3_Titre"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(P3_Titre->sizePolicy().hasHeightForWidth());
        P3_Titre->setSizePolicy(sizePolicy5);
        QFont font;
        font.setPointSize(12);
        P3_Titre->setFont(font);
        P3_Titre->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(P3_Titre);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        P3_Flore = new QLabel(centralwidget);
        P3_Flore->setObjectName(QStringLiteral("P3_Flore"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(P3_Flore->sizePolicy().hasHeightForWidth());
        P3_Flore->setSizePolicy(sizePolicy6);

        verticalLayout->addWidget(P3_Flore);

        verticalSpacer_10 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_10);

        verticalSpacer_11 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_11);

        P3_Conifere = new QLabel(centralwidget);
        P3_Conifere->setObjectName(QStringLiteral("P3_Conifere"));
        sizePolicy5.setHeightForWidth(P3_Conifere->sizePolicy().hasHeightForWidth());
        P3_Conifere->setSizePolicy(sizePolicy5);
        P3_Conifere->setIndent(10);

        verticalLayout->addWidget(P3_Conifere);

        verticalSpacer_5 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);

        P3_Conifere_O2 = new QLabel(centralwidget);
        P3_Conifere_O2->setObjectName(QStringLiteral("P3_Conifere_O2"));
        sizePolicy5.setHeightForWidth(P3_Conifere_O2->sizePolicy().hasHeightForWidth());
        P3_Conifere_O2->setSizePolicy(sizePolicy5);
        P3_Conifere_O2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        P3_Conifere_O2->setIndent(20);

        verticalLayout->addWidget(P3_Conifere_O2);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        P3_Algue = new QLabel(centralwidget);
        P3_Algue->setObjectName(QStringLiteral("P3_Algue"));
        sizePolicy5.setHeightForWidth(P3_Algue->sizePolicy().hasHeightForWidth());
        P3_Algue->setSizePolicy(sizePolicy5);
        P3_Algue->setIndent(10);

        verticalLayout->addWidget(P3_Algue);

        verticalSpacer_6 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_6);

        P3_Algue_O2 = new QLabel(centralwidget);
        P3_Algue_O2->setObjectName(QStringLiteral("P3_Algue_O2"));
        sizePolicy5.setHeightForWidth(P3_Algue_O2->sizePolicy().hasHeightForWidth());
        P3_Algue_O2->setSizePolicy(sizePolicy5);
        P3_Algue_O2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        P3_Algue_O2->setIndent(20);

        verticalLayout->addWidget(P3_Algue_O2);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        P3_Faune = new QLabel(centralwidget);
        P3_Faune->setObjectName(QStringLiteral("P3_Faune"));
        sizePolicy5.setHeightForWidth(P3_Faune->sizePolicy().hasHeightForWidth());
        P3_Faune->setSizePolicy(sizePolicy5);

        verticalLayout->addWidget(P3_Faune);

        verticalSpacer_12 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_12);

        verticalSpacer_13 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_13);

        P3_Humain = new QLabel(centralwidget);
        P3_Humain->setObjectName(QStringLiteral("P3_Humain"));
        sizePolicy5.setHeightForWidth(P3_Humain->sizePolicy().hasHeightForWidth());
        P3_Humain->setSizePolicy(sizePolicy5);
        P3_Humain->setIndent(10);

        verticalLayout->addWidget(P3_Humain);

        verticalSpacer_7 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_7);

        verticalSpacer_18 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_18);

        P3_Humain_nv_tech = new QLabel(centralwidget);
        P3_Humain_nv_tech->setObjectName(QStringLiteral("P3_Humain_nv_tech"));
        sizePolicy5.setHeightForWidth(P3_Humain_nv_tech->sizePolicy().hasHeightForWidth());
        P3_Humain_nv_tech->setSizePolicy(sizePolicy5);
        P3_Humain_nv_tech->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        P3_Humain_nv_tech->setIndent(20);

        verticalLayout->addWidget(P3_Humain_nv_tech);

        verticalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_9);

        P3_Vache = new QLabel(centralwidget);
        P3_Vache->setObjectName(QStringLiteral("P3_Vache"));
        sizePolicy5.setHeightForWidth(P3_Vache->sizePolicy().hasHeightForWidth());
        P3_Vache->setSizePolicy(sizePolicy5);
        P3_Vache->setIndent(10);

        verticalLayout->addWidget(P3_Vache);

        verticalSpacer_8 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_8);

        P3_Vache_pollution = new QLabel(centralwidget);
        P3_Vache_pollution->setObjectName(QStringLiteral("P3_Vache_pollution"));
        sizePolicy5.setHeightForWidth(P3_Vache_pollution->sizePolicy().hasHeightForWidth());
        P3_Vache_pollution->setSizePolicy(sizePolicy5);
        P3_Vache_pollution->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        P3_Vache_pollution->setIndent(20);

        verticalLayout->addWidget(P3_Vache_pollution);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_15);

        horizontalSpacer = new QSpacerItem(150, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 2, 1, 1);

        fenetre2->setCentralWidget(centralwidget);

        retranslateUi(fenetre2);
        QObject::connect(bouton_fenetre2, SIGNAL(clicked()), fenetre2, SLOT(close()));

        QMetaObject::connectSlotsByName(fenetre2);
    } // setupUi

    void retranslateUi(QMainWindow *fenetre2)
    {
        fenetre2->setWindowTitle(QApplication::translate("fenetre2", "MainWindow", Q_NULLPTR));
        P1_Eco_Marin->setText(QApplication::translate("fenetre2", "Ecosysteme Marin", Q_NULLPTR));
        P1_Eco_Marin_Sante->setText(QApplication::translate("fenetre2", "Sante : X %", Q_NULLPTR));
        P1_Eco_Marin_Image->setText(QApplication::translate("fenetre2", "TextLabel", Q_NULLPTR));
        P1_Eco_Terre->setText(QApplication::translate("fenetre2", "Ecosyst\303\250me Terrestre", Q_NULLPTR));
        P1_Eco_Terre_Sante->setText(QApplication::translate("fenetre2", "Sante : X %", Q_NULLPTR));
        P1_Eco_Terre_Image->setText(QApplication::translate("fenetre2", "TextLabel", Q_NULLPTR));
        P2_Terre->setText(QApplication::translate("fenetre2", "Terre", Q_NULLPTR));
        P2_Temps->setText(QApplication::translate("fenetre2", "<html><head/><body><p>Temps : NB</p></body></html>", Q_NULLPTR));
        P2_Terre_Image->setText(QApplication::translate("fenetre2", "TextLabel", Q_NULLPTR));
        P2_Texte->setText(QApplication::translate("fenetre2", "TextLabel", Q_NULLPTR));
        bouton_fenetre2->setText(QApplication::translate("fenetre2", "retour menu", Q_NULLPTR));
        bouton_action->setText(QApplication::translate("fenetre2", "passer temps", Q_NULLPTR));
        P3_Titre->setText(QApplication::translate("fenetre2", "Informations", Q_NULLPTR));
        P3_Flore->setText(QApplication::translate("fenetre2", "Flore : NB", Q_NULLPTR));
        P3_Conifere->setText(QApplication::translate("fenetre2", "Conif\303\250res : NB", Q_NULLPTR));
        P3_Conifere_O2->setText(QApplication::translate("fenetre2", "O2 : X %", Q_NULLPTR));
        P3_Algue->setText(QApplication::translate("fenetre2", "Algues : NB", Q_NULLPTR));
        P3_Algue_O2->setText(QApplication::translate("fenetre2", "O2 : X %", Q_NULLPTR));
        P3_Faune->setText(QApplication::translate("fenetre2", "Faune : NB", Q_NULLPTR));
        P3_Humain->setText(QApplication::translate("fenetre2", "Humains : NB", Q_NULLPTR));
        P3_Humain_nv_tech->setText(QApplication::translate("fenetre2", "Nv techologique : X %", Q_NULLPTR));
        P3_Vache->setText(QApplication::translate("fenetre2", "Vaches : NB", Q_NULLPTR));
        P3_Vache_pollution->setText(QApplication::translate("fenetre2", "Methane :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fenetre2: public Ui_fenetre2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETRE2_H
