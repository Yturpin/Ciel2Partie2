/********************************************************************************
** Form generated from reading UI file 'dialogconfigurerliaisongps.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCONFIGURERLIAISONGPS_H
#define UI_DIALOGCONFIGURERLIAISONGPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogConfigurerLiaisonGPS
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBoxChoixPort;
    QLabel *label_2;
    QComboBox *comboBoxVitesseTransmi;
    QLabel *label_3;
    QSpinBox *spinBoxNbBitsDonnees;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QRadioButton *radioButtonPaire;
    QRadioButton *radioButtonImpaire;
    QRadioButton *radioButtonPasDeParite;
    QCheckBox *checkBoxBitsDeStop;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QComboBox *comboBoxControleFlux;

    void setupUi(QDialog *DialogConfigurerLiaisonGPS)
    {
        if (DialogConfigurerLiaisonGPS->objectName().isEmpty())
            DialogConfigurerLiaisonGPS->setObjectName("DialogConfigurerLiaisonGPS");
        DialogConfigurerLiaisonGPS->resize(400, 300);
        buttonBox = new QDialogButtonBox(DialogConfigurerLiaisonGPS);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(40, 260, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(DialogConfigurerLiaisonGPS);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 30, 341, 201));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBoxChoixPort = new QComboBox(widget);
        comboBoxChoixPort->setObjectName("comboBoxChoixPort");

        gridLayout->addWidget(comboBoxChoixPort, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboBoxVitesseTransmi = new QComboBox(widget);
        comboBoxVitesseTransmi->setObjectName("comboBoxVitesseTransmi");

        gridLayout->addWidget(comboBoxVitesseTransmi, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        spinBoxNbBitsDonnees = new QSpinBox(widget);
        spinBoxNbBitsDonnees->setObjectName("spinBoxNbBitsDonnees");

        gridLayout->addWidget(spinBoxNbBitsDonnees, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        radioButtonPaire = new QRadioButton(widget);
        radioButtonPaire->setObjectName("radioButtonPaire");

        verticalLayout->addWidget(radioButtonPaire);

        radioButtonImpaire = new QRadioButton(widget);
        radioButtonImpaire->setObjectName("radioButtonImpaire");

        verticalLayout->addWidget(radioButtonImpaire);

        radioButtonPasDeParite = new QRadioButton(widget);
        radioButtonPasDeParite->setObjectName("radioButtonPasDeParite");

        verticalLayout->addWidget(radioButtonPasDeParite);


        gridLayout_2->addLayout(verticalLayout, 1, 0, 2, 1);

        checkBoxBitsDeStop = new QCheckBox(widget);
        checkBoxBitsDeStop->setObjectName("checkBoxBitsDeStop");

        gridLayout_2->addWidget(checkBoxBitsDeStop, 1, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);

        comboBoxControleFlux = new QComboBox(widget);
        comboBoxControleFlux->addItem(QString());
        comboBoxControleFlux->setObjectName("comboBoxControleFlux");

        verticalLayout_2->addWidget(comboBoxControleFlux);


        gridLayout_2->addLayout(verticalLayout_2, 2, 1, 1, 1);


        retranslateUi(DialogConfigurerLiaisonGPS);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogConfigurerLiaisonGPS, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogConfigurerLiaisonGPS, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogConfigurerLiaisonGPS);
    } // setupUi

    void retranslateUi(QDialog *DialogConfigurerLiaisonGPS)
    {
        DialogConfigurerLiaisonGPS->setWindowTitle(QCoreApplication::translate("DialogConfigurerLiaisonGPS", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogConfigurerLiaisonGPS", "Choix du port : ", nullptr));
        label_2->setText(QCoreApplication::translate("DialogConfigurerLiaisonGPS", "Vitesse de transmission : ", nullptr));
        label_3->setText(QCoreApplication::translate("DialogConfigurerLiaisonGPS", "Nombre de bits de donn\303\251es : ", nullptr));
        label_4->setText(QCoreApplication::translate("DialogConfigurerLiaisonGPS", "Parit\303\251", nullptr));
        radioButtonPaire->setText(QCoreApplication::translate("DialogConfigurerLiaisonGPS", "Paire", nullptr));
        radioButtonImpaire->setText(QCoreApplication::translate("DialogConfigurerLiaisonGPS", "Impaire", nullptr));
        radioButtonPasDeParite->setText(QCoreApplication::translate("DialogConfigurerLiaisonGPS", "Pas de parit\303\251", nullptr));
        checkBoxBitsDeStop->setText(QCoreApplication::translate("DialogConfigurerLiaisonGPS", "2 bits de stop", nullptr));
        label_5->setText(QCoreApplication::translate("DialogConfigurerLiaisonGPS", "Contr\303\264le de flux :", nullptr));
        comboBoxControleFlux->setItemText(0, QCoreApplication::translate("DialogConfigurerLiaisonGPS", "Pas de contr\303\264le de flux", nullptr));

    } // retranslateUi

};

namespace Ui {
    class DialogConfigurerLiaisonGPS: public Ui_DialogConfigurerLiaisonGPS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCONFIGURERLIAISONGPS_H
