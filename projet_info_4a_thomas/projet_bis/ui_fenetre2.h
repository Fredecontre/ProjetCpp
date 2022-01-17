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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
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
    QSpacerItem *verticalSpacer_22;
    QLabel *P1_Eco_Marin;
    QSpacerItem *verticalSpacer_23;
    QLabel *P1_Eco_Marin_Sante;
    QLabel *P1_Eco_Marin_Image;
    QLabel *P1_Image_Dory;
    QLabel *P1_Eco_Terre;
    QSpacerItem *verticalSpacer_24;
    QLabel *P1_Eco_Terre_Sante;
    QSpacerItem *verticalSpacer_25;
    QLabel *P1_Eco_Terre_Image;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *P2_Terre;
    QLabel *P2_Temps;
    QSpacerItem *verticalSpacer_14;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer_16;
    QLabel *P2_Texte_Evev;
    QSpacerItem *verticalSpacer_27;
    QLabel *P2_Image;
    QSpacerItem *verticalSpacer_28;
    QGroupBox *P2_GroupBox;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *P2_button_choix1;
    QRadioButton *P2_button_choix2;
    QRadioButton *P2_button_choix3;
    QSpacerItem *verticalSpacer_17;
    QHBoxLayout *horizontalLayout;
    QPushButton *bouton_fenetre2;
    QPushButton *bouton_action;
    QSpacerItem *verticalSpacer_21;
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
    QSpacerItem *verticalSpacer_26;
    QLabel *P3_Image_Foret;
    QSpacerItem *verticalSpacer_4;
    QLabel *P3_Faune;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *verticalSpacer_13;
    QLabel *P3_Humain;
    QSpacerItem *verticalSpacer_7;
    QLabel *P3_Humain_pollution;
    QSpacerItem *verticalSpacer_18;
    QLabel *P3_Humain_nv_tech;
    QSpacerItem *verticalSpacer_9;
    QLabel *P3_Vache;
    QSpacerItem *verticalSpacer_8;
    QLabel *P3_Vache_pollution;
    QSpacerItem *verticalSpacer_20;
    QLabel *P3_Image_Vache;
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
        verticalSpacer_22 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_22);

        P1_Eco_Marin = new QLabel(centralwidget);
        P1_Eco_Marin->setObjectName(QStringLiteral("P1_Eco_Marin"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(P1_Eco_Marin->sizePolicy().hasHeightForWidth());
        P1_Eco_Marin->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(15);
        P1_Eco_Marin->setFont(font);

        verticalLayout_4->addWidget(P1_Eco_Marin);

        verticalSpacer_23 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_23);

        P1_Eco_Marin_Sante = new QLabel(centralwidget);
        P1_Eco_Marin_Sante->setObjectName(QStringLiteral("P1_Eco_Marin_Sante"));
        sizePolicy1.setHeightForWidth(P1_Eco_Marin_Sante->sizePolicy().hasHeightForWidth());
        P1_Eco_Marin_Sante->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(13);
        P1_Eco_Marin_Sante->setFont(font1);
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

        P1_Image_Dory = new QLabel(centralwidget);
        P1_Image_Dory->setObjectName(QStringLiteral("P1_Image_Dory"));
        sizePolicy2.setHeightForWidth(P1_Image_Dory->sizePolicy().hasHeightForWidth());
        P1_Image_Dory->setSizePolicy(sizePolicy2);

        verticalLayout_4->addWidget(P1_Image_Dory);

        P1_Eco_Terre = new QLabel(centralwidget);
        P1_Eco_Terre->setObjectName(QStringLiteral("P1_Eco_Terre"));
        sizePolicy1.setHeightForWidth(P1_Eco_Terre->sizePolicy().hasHeightForWidth());
        P1_Eco_Terre->setSizePolicy(sizePolicy1);
        P1_Eco_Terre->setFont(font);

        verticalLayout_4->addWidget(P1_Eco_Terre);

        verticalSpacer_24 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_24);

        P1_Eco_Terre_Sante = new QLabel(centralwidget);
        P1_Eco_Terre_Sante->setObjectName(QStringLiteral("P1_Eco_Terre_Sante"));
        sizePolicy1.setHeightForWidth(P1_Eco_Terre_Sante->sizePolicy().hasHeightForWidth());
        P1_Eco_Terre_Sante->setSizePolicy(sizePolicy1);
        P1_Eco_Terre_Sante->setFont(font1);
        P1_Eco_Terre_Sante->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        P1_Eco_Terre_Sante->setIndent(20);

        verticalLayout_4->addWidget(P1_Eco_Terre_Sante);

        verticalSpacer_25 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_25);

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
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(P2_Terre->sizePolicy().hasHeightForWidth());
        P2_Terre->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setFamily(QStringLiteral("Sahadeva"));
        font2.setPointSize(25);
        P2_Terre->setFont(font2);
        P2_Terre->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(P2_Terre);

        P2_Temps = new QLabel(centralwidget);
        P2_Temps->setObjectName(QStringLiteral("P2_Temps"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(P2_Temps->sizePolicy().hasHeightForWidth());
        P2_Temps->setSizePolicy(sizePolicy4);

        verticalLayout_2->addWidget(P2_Temps);

        verticalSpacer_14 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_14);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(100);

        verticalLayout_2->addWidget(progressBar);

        verticalSpacer_16 = new QSpacerItem(0, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_16);

        P2_Texte_Evev = new QLabel(centralwidget);
        P2_Texte_Evev->setObjectName(QStringLiteral("P2_Texte_Evev"));
        QSizePolicy sizePolicy5(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(P2_Texte_Evev->sizePolicy().hasHeightForWidth());
        P2_Texte_Evev->setSizePolicy(sizePolicy5);
        P2_Texte_Evev->setScaledContents(true);
        P2_Texte_Evev->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_2->addWidget(P2_Texte_Evev);

        verticalSpacer_27 = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_27);

        P2_Image = new QLabel(centralwidget);
        P2_Image->setObjectName(QStringLiteral("P2_Image"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(P2_Image->sizePolicy().hasHeightForWidth());
        P2_Image->setSizePolicy(sizePolicy6);
        P2_Image->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(P2_Image);

        verticalSpacer_28 = new QSpacerItem(0, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_28);

        P2_GroupBox = new QGroupBox(centralwidget);
        P2_GroupBox->setObjectName(QStringLiteral("P2_GroupBox"));
        verticalLayout_3 = new QVBoxLayout(P2_GroupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        P2_button_choix1 = new QRadioButton(P2_GroupBox);
        P2_button_choix1->setObjectName(QStringLiteral("P2_button_choix1"));

        verticalLayout_3->addWidget(P2_button_choix1);

        P2_button_choix2 = new QRadioButton(P2_GroupBox);
        P2_button_choix2->setObjectName(QStringLiteral("P2_button_choix2"));

        verticalLayout_3->addWidget(P2_button_choix2);

        P2_button_choix3 = new QRadioButton(P2_GroupBox);
        P2_button_choix3->setObjectName(QStringLiteral("P2_button_choix3"));

        verticalLayout_3->addWidget(P2_button_choix3);


        verticalLayout_2->addWidget(P2_GroupBox);

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

        verticalSpacer_21 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_2->addItem(verticalSpacer_21);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        P3_Titre = new QLabel(centralwidget);
        P3_Titre->setObjectName(QStringLiteral("P3_Titre"));
        sizePolicy3.setHeightForWidth(P3_Titre->sizePolicy().hasHeightForWidth());
        P3_Titre->setSizePolicy(sizePolicy3);
        P3_Titre->setFont(font);
        P3_Titre->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(P3_Titre);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        P3_Flore = new QLabel(centralwidget);
        P3_Flore->setObjectName(QStringLiteral("P3_Flore"));
        sizePolicy3.setHeightForWidth(P3_Flore->sizePolicy().hasHeightForWidth());
        P3_Flore->setSizePolicy(sizePolicy3);
        P3_Flore->setFont(font1);

        verticalLayout->addWidget(P3_Flore);

        verticalSpacer_10 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_10);

        verticalSpacer_11 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_11);

        P3_Conifere = new QLabel(centralwidget);
        P3_Conifere->setObjectName(QStringLiteral("P3_Conifere"));
        sizePolicy4.setHeightForWidth(P3_Conifere->sizePolicy().hasHeightForWidth());
        P3_Conifere->setSizePolicy(sizePolicy4);
        P3_Conifere->setFont(font1);
        P3_Conifere->setIndent(10);

        verticalLayout->addWidget(P3_Conifere);

        verticalSpacer_5 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);

        P3_Conifere_O2 = new QLabel(centralwidget);
        P3_Conifere_O2->setObjectName(QStringLiteral("P3_Conifere_O2"));
        sizePolicy4.setHeightForWidth(P3_Conifere_O2->sizePolicy().hasHeightForWidth());
        P3_Conifere_O2->setSizePolicy(sizePolicy4);
        P3_Conifere_O2->setFont(font1);
        P3_Conifere_O2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        P3_Conifere_O2->setIndent(20);

        verticalLayout->addWidget(P3_Conifere_O2);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        P3_Algue = new QLabel(centralwidget);
        P3_Algue->setObjectName(QStringLiteral("P3_Algue"));
        sizePolicy4.setHeightForWidth(P3_Algue->sizePolicy().hasHeightForWidth());
        P3_Algue->setSizePolicy(sizePolicy4);
        P3_Algue->setFont(font1);
        P3_Algue->setIndent(10);

        verticalLayout->addWidget(P3_Algue);

        verticalSpacer_6 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_6);

        P3_Algue_O2 = new QLabel(centralwidget);
        P3_Algue_O2->setObjectName(QStringLiteral("P3_Algue_O2"));
        sizePolicy4.setHeightForWidth(P3_Algue_O2->sizePolicy().hasHeightForWidth());
        P3_Algue_O2->setSizePolicy(sizePolicy4);
        P3_Algue_O2->setFont(font1);
        P3_Algue_O2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        P3_Algue_O2->setIndent(20);

        verticalLayout->addWidget(P3_Algue_O2);

        verticalSpacer_26 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_26);

        P3_Image_Foret = new QLabel(centralwidget);
        P3_Image_Foret->setObjectName(QStringLiteral("P3_Image_Foret"));

        verticalLayout->addWidget(P3_Image_Foret);

        verticalSpacer_4 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        P3_Faune = new QLabel(centralwidget);
        P3_Faune->setObjectName(QStringLiteral("P3_Faune"));
        sizePolicy4.setHeightForWidth(P3_Faune->sizePolicy().hasHeightForWidth());
        P3_Faune->setSizePolicy(sizePolicy4);
        P3_Faune->setFont(font1);

        verticalLayout->addWidget(P3_Faune);

        verticalSpacer_12 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_12);

        verticalSpacer_13 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_13);

        P3_Humain = new QLabel(centralwidget);
        P3_Humain->setObjectName(QStringLiteral("P3_Humain"));
        sizePolicy4.setHeightForWidth(P3_Humain->sizePolicy().hasHeightForWidth());
        P3_Humain->setSizePolicy(sizePolicy4);
        P3_Humain->setFont(font1);
        P3_Humain->setIndent(10);

        verticalLayout->addWidget(P3_Humain);

        verticalSpacer_7 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_7);

        P3_Humain_pollution = new QLabel(centralwidget);
        P3_Humain_pollution->setObjectName(QStringLiteral("P3_Humain_pollution"));
        sizePolicy4.setHeightForWidth(P3_Humain_pollution->sizePolicy().hasHeightForWidth());
        P3_Humain_pollution->setSizePolicy(sizePolicy4);
        P3_Humain_pollution->setFont(font1);
        P3_Humain_pollution->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        P3_Humain_pollution->setIndent(20);

        verticalLayout->addWidget(P3_Humain_pollution);

        verticalSpacer_18 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_18);

        P3_Humain_nv_tech = new QLabel(centralwidget);
        P3_Humain_nv_tech->setObjectName(QStringLiteral("P3_Humain_nv_tech"));
        sizePolicy4.setHeightForWidth(P3_Humain_nv_tech->sizePolicy().hasHeightForWidth());
        P3_Humain_nv_tech->setSizePolicy(sizePolicy4);
        QFont font3;
        font3.setPointSize(12);
        P3_Humain_nv_tech->setFont(font3);
        P3_Humain_nv_tech->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        P3_Humain_nv_tech->setIndent(20);

        verticalLayout->addWidget(P3_Humain_nv_tech);

        verticalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_9);

        P3_Vache = new QLabel(centralwidget);
        P3_Vache->setObjectName(QStringLiteral("P3_Vache"));
        sizePolicy4.setHeightForWidth(P3_Vache->sizePolicy().hasHeightForWidth());
        P3_Vache->setSizePolicy(sizePolicy4);
        P3_Vache->setFont(font1);
        P3_Vache->setIndent(10);

        verticalLayout->addWidget(P3_Vache);

        verticalSpacer_8 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_8);

        P3_Vache_pollution = new QLabel(centralwidget);
        P3_Vache_pollution->setObjectName(QStringLiteral("P3_Vache_pollution"));
        sizePolicy4.setHeightForWidth(P3_Vache_pollution->sizePolicy().hasHeightForWidth());
        P3_Vache_pollution->setSizePolicy(sizePolicy4);
        P3_Vache_pollution->setFont(font1);
        P3_Vache_pollution->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        P3_Vache_pollution->setIndent(20);

        verticalLayout->addWidget(P3_Vache_pollution);

        verticalSpacer_20 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_20);

        P3_Image_Vache = new QLabel(centralwidget);
        P3_Image_Vache->setObjectName(QStringLiteral("P3_Image_Vache"));

        verticalLayout->addWidget(P3_Image_Vache);

        verticalSpacer_15 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

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
        P1_Image_Dory->setText(QApplication::translate("fenetre2", "TextLabel", Q_NULLPTR));
        P1_Eco_Terre->setText(QApplication::translate("fenetre2", "Ecosyst\303\250me Terrestre", Q_NULLPTR));
        P1_Eco_Terre_Sante->setText(QApplication::translate("fenetre2", "Sante : X %", Q_NULLPTR));
        P1_Eco_Terre_Image->setText(QApplication::translate("fenetre2", "TextLabel", Q_NULLPTR));
        P2_Terre->setText(QApplication::translate("fenetre2", "Terre", Q_NULLPTR));
        P2_Temps->setText(QApplication::translate("fenetre2", "<html><head/><body><p>Ann\303\251e : NB</p></body></html>", Q_NULLPTR));
        P2_Texte_Evev->setText(QApplication::translate("fenetre2", "TextLabel", Q_NULLPTR));
        P2_Image->setText(QApplication::translate("fenetre2", "TextLabel", Q_NULLPTR));
        P2_GroupBox->setTitle(QApplication::translate("fenetre2", "Faites le bon choix !", Q_NULLPTR));
        P2_button_choix1->setText(QApplication::translate("fenetre2", "RadioButton", Q_NULLPTR));
        P2_button_choix2->setText(QApplication::translate("fenetre2", "RadioButton", Q_NULLPTR));
        P2_button_choix3->setText(QApplication::translate("fenetre2", "RadioButton", Q_NULLPTR));
        bouton_fenetre2->setText(QApplication::translate("fenetre2", "retour menu", Q_NULLPTR));
        bouton_action->setText(QApplication::translate("fenetre2", "passer temps", Q_NULLPTR));
        P3_Titre->setText(QApplication::translate("fenetre2", "Informations", Q_NULLPTR));
        P3_Flore->setText(QApplication::translate("fenetre2", "Flore : NB", Q_NULLPTR));
        P3_Conifere->setText(QApplication::translate("fenetre2", "Conif\303\250res : NB", Q_NULLPTR));
        P3_Conifere_O2->setText(QApplication::translate("fenetre2", "O2 : X %", Q_NULLPTR));
        P3_Algue->setText(QApplication::translate("fenetre2", "Algues : NB", Q_NULLPTR));
        P3_Algue_O2->setText(QApplication::translate("fenetre2", "O2 : X %", Q_NULLPTR));
        P3_Image_Foret->setText(QApplication::translate("fenetre2", "TextLabel", Q_NULLPTR));
        P3_Faune->setText(QApplication::translate("fenetre2", "Faune : NB", Q_NULLPTR));
        P3_Humain->setText(QApplication::translate("fenetre2", "Humains : NB", Q_NULLPTR));
        P3_Humain_pollution->setText(QApplication::translate("fenetre2", "Pollution : X %", Q_NULLPTR));
        P3_Humain_nv_tech->setText(QApplication::translate("fenetre2", "Nv techologique : X %", Q_NULLPTR));
        P3_Vache->setText(QApplication::translate("fenetre2", "Vaches : NB", Q_NULLPTR));
        P3_Vache_pollution->setText(QApplication::translate("fenetre2", "Methane :", Q_NULLPTR));
        P3_Image_Vache->setText(QApplication::translate("fenetre2", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fenetre2: public Ui_fenetre2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETRE2_H
