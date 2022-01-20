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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fenetre1
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_6;
    QLabel *Titre_page;
    QSpacerItem *verticalSpacer_5;
    QLabel *Image_Presentation;
    QSpacerItem *verticalSpacer_6;
    QLabel *description_jeu;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBoxHumain;
    QVBoxLayout *verticalLayout;
    QRadioButton *button_humain_choix1;
    QRadioButton *button_humain_choix2;
    QRadioButton *button_humain_choix3;
    QGroupBox *groupBoxVache;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *button_vache_choix1;
    QRadioButton *button_vache_choix2;
    QRadioButton *button_vache_choix3;
    QGroupBox *groupBox_Conifere;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *button_conifere_choix1;
    QRadioButton *button_conifere_choix2;
    QRadioButton *button_conifere_choix3;
    QGroupBox *groupBox_Algue;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *button_algue_choix1;
    QRadioButton *button_algue_choix2;
    QRadioButton *button_algue_choix3;
    QPushButton *bouton_fenetre1;

    void setupUi(QMainWindow *fenetre1)
    {
        if (fenetre1->objectName().isEmpty())
            fenetre1->setObjectName(QStringLiteral("fenetre1"));
        fenetre1->resize(962, 565);
        centralwidget = new QWidget(fenetre1);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        Titre_page = new QLabel(centralwidget);
        Titre_page->setObjectName(QStringLiteral("Titre_page"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Titre_page->sizePolicy().hasHeightForWidth());
        Titre_page->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(50);
        Titre_page->setFont(font);
        Titre_page->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_6->addWidget(Titre_page);

        verticalSpacer_5 = new QSpacerItem(50, 20, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_6->addItem(verticalSpacer_5);

        Image_Presentation = new QLabel(centralwidget);
        Image_Presentation->setObjectName(QStringLiteral("Image_Presentation"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Image_Presentation->sizePolicy().hasHeightForWidth());
        Image_Presentation->setSizePolicy(sizePolicy1);
        Image_Presentation->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(Image_Presentation);

        verticalSpacer_6 = new QSpacerItem(50, 20, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_6->addItem(verticalSpacer_6);

        description_jeu = new QLabel(centralwidget);
        description_jeu->setObjectName(QStringLiteral("description_jeu"));
        description_jeu->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_6->addWidget(description_jeu);

        verticalSpacer_4 = new QSpacerItem(50, 20, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_6->addItem(verticalSpacer_4);

        horizontalSpacer = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_6->addItem(horizontalSpacer);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        groupBoxHumain = new QGroupBox(centralwidget);
        groupBoxHumain->setObjectName(QStringLiteral("groupBoxHumain"));
        verticalLayout = new QVBoxLayout(groupBoxHumain);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        button_humain_choix1 = new QRadioButton(groupBoxHumain);
        button_humain_choix1->setObjectName(QStringLiteral("button_humain_choix1"));

        verticalLayout->addWidget(button_humain_choix1);

        button_humain_choix2 = new QRadioButton(groupBoxHumain);
        button_humain_choix2->setObjectName(QStringLiteral("button_humain_choix2"));

        verticalLayout->addWidget(button_humain_choix2);

        button_humain_choix3 = new QRadioButton(groupBoxHumain);
        button_humain_choix3->setObjectName(QStringLiteral("button_humain_choix3"));

        verticalLayout->addWidget(button_humain_choix3);


        verticalLayout_5->addWidget(groupBoxHumain);

        groupBoxVache = new QGroupBox(centralwidget);
        groupBoxVache->setObjectName(QStringLiteral("groupBoxVache"));
        verticalLayout_2 = new QVBoxLayout(groupBoxVache);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        button_vache_choix1 = new QRadioButton(groupBoxVache);
        button_vache_choix1->setObjectName(QStringLiteral("button_vache_choix1"));

        verticalLayout_2->addWidget(button_vache_choix1);

        button_vache_choix2 = new QRadioButton(groupBoxVache);
        button_vache_choix2->setObjectName(QStringLiteral("button_vache_choix2"));

        verticalLayout_2->addWidget(button_vache_choix2);

        button_vache_choix3 = new QRadioButton(groupBoxVache);
        button_vache_choix3->setObjectName(QStringLiteral("button_vache_choix3"));

        verticalLayout_2->addWidget(button_vache_choix3);


        verticalLayout_5->addWidget(groupBoxVache);

        groupBox_Conifere = new QGroupBox(centralwidget);
        groupBox_Conifere->setObjectName(QStringLiteral("groupBox_Conifere"));
        verticalLayout_3 = new QVBoxLayout(groupBox_Conifere);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        button_conifere_choix1 = new QRadioButton(groupBox_Conifere);
        button_conifere_choix1->setObjectName(QStringLiteral("button_conifere_choix1"));

        verticalLayout_3->addWidget(button_conifere_choix1);

        button_conifere_choix2 = new QRadioButton(groupBox_Conifere);
        button_conifere_choix2->setObjectName(QStringLiteral("button_conifere_choix2"));

        verticalLayout_3->addWidget(button_conifere_choix2);

        button_conifere_choix3 = new QRadioButton(groupBox_Conifere);
        button_conifere_choix3->setObjectName(QStringLiteral("button_conifere_choix3"));

        verticalLayout_3->addWidget(button_conifere_choix3);


        verticalLayout_5->addWidget(groupBox_Conifere);

        groupBox_Algue = new QGroupBox(centralwidget);
        groupBox_Algue->setObjectName(QStringLiteral("groupBox_Algue"));
        verticalLayout_4 = new QVBoxLayout(groupBox_Algue);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        button_algue_choix1 = new QRadioButton(groupBox_Algue);
        button_algue_choix1->setObjectName(QStringLiteral("button_algue_choix1"));

        verticalLayout_4->addWidget(button_algue_choix1);

        button_algue_choix2 = new QRadioButton(groupBox_Algue);
        button_algue_choix2->setObjectName(QStringLiteral("button_algue_choix2"));

        verticalLayout_4->addWidget(button_algue_choix2);

        button_algue_choix3 = new QRadioButton(groupBox_Algue);
        button_algue_choix3->setObjectName(QStringLiteral("button_algue_choix3"));

        verticalLayout_4->addWidget(button_algue_choix3);


        verticalLayout_5->addWidget(groupBox_Algue);

        bouton_fenetre1 = new QPushButton(centralwidget);
        bouton_fenetre1->setObjectName(QStringLiteral("bouton_fenetre1"));

        verticalLayout_5->addWidget(bouton_fenetre1);


        horizontalLayout->addLayout(verticalLayout_5);

        fenetre1->setCentralWidget(centralwidget);

        retranslateUi(fenetre1);

        QMetaObject::connectSlotsByName(fenetre1);
    } // setupUi

    void retranslateUi(QMainWindow *fenetre1)
    {
        fenetre1->setWindowTitle(QApplication::translate("fenetre1", "MainWindow", Q_NULLPTR));
        Titre_page->setText(QApplication::translate("fenetre1", "Hands on Earth", Q_NULLPTR));
        Image_Presentation->setText(QApplication::translate("fenetre1", "TextLabel", Q_NULLPTR));
        description_jeu->setText(QApplication::translate("fenetre1", "Description jeu : ", Q_NULLPTR));
        groupBoxHumain->setTitle(QApplication::translate("fenetre1", "Nombre  Humains", Q_NULLPTR));
        button_humain_choix1->setText(QApplication::translate("fenetre1", "100", Q_NULLPTR));
        button_humain_choix2->setText(QApplication::translate("fenetre1", "1000", Q_NULLPTR));
        button_humain_choix3->setText(QApplication::translate("fenetre1", "2000", Q_NULLPTR));
        groupBoxVache->setTitle(QApplication::translate("fenetre1", "Nombre Vaches", Q_NULLPTR));
        button_vache_choix1->setText(QApplication::translate("fenetre1", "10", Q_NULLPTR));
        button_vache_choix2->setText(QApplication::translate("fenetre1", "100", Q_NULLPTR));
        button_vache_choix3->setText(QApplication::translate("fenetre1", "200", Q_NULLPTR));
        groupBox_Conifere->setTitle(QApplication::translate("fenetre1", "Nombre Conif\303\250res", Q_NULLPTR));
        button_conifere_choix1->setText(QApplication::translate("fenetre1", "4000", Q_NULLPTR));
        button_conifere_choix2->setText(QApplication::translate("fenetre1", "5000", Q_NULLPTR));
        button_conifere_choix3->setText(QApplication::translate("fenetre1", "10000", Q_NULLPTR));
        groupBox_Algue->setTitle(QApplication::translate("fenetre1", "Nombre Algues", Q_NULLPTR));
        button_algue_choix1->setText(QApplication::translate("fenetre1", "20000", Q_NULLPTR));
        button_algue_choix2->setText(QApplication::translate("fenetre1", "40000", Q_NULLPTR));
        button_algue_choix3->setText(QApplication::translate("fenetre1", "50000", Q_NULLPTR));
        bouton_fenetre1->setText(QApplication::translate("fenetre1", "go", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fenetre1: public Ui_fenetre1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETRE1_H
