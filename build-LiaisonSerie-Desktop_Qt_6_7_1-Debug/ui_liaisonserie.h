/********************************************************************************
** Form generated from reading UI file 'liaisonserie.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIAISONSERIE_H
#define UI_LIAISONSERIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LiaisonSerie
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QPushButton *pushButtonOuvrirPortSerie;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButtonEnvoyer;
    QLabel *label_2;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LiaisonSerie)
    {
        if (LiaisonSerie->objectName().isEmpty())
            LiaisonSerie->setObjectName("LiaisonSerie");
        LiaisonSerie->resize(800, 600);
        centralwidget = new QWidget(LiaisonSerie);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(110, 50, 571, 451));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setEditable(false);

        gridLayout->addWidget(comboBox, 0, 0, 1, 2);

        pushButtonOuvrirPortSerie = new QPushButton(widget);
        pushButtonOuvrirPortSerie->setObjectName("pushButtonOuvrirPortSerie");

        gridLayout->addWidget(pushButtonOuvrirPortSerie, 0, 2, 1, 2);

        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 1, 1, 1, 2);

        pushButtonEnvoyer = new QPushButton(widget);
        pushButtonEnvoyer->setObjectName("pushButtonEnvoyer");

        gridLayout->addWidget(pushButtonEnvoyer, 1, 3, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 3, 0, 1, 4);

        LiaisonSerie->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LiaisonSerie);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 20));
        LiaisonSerie->setMenuBar(menubar);
        statusbar = new QStatusBar(LiaisonSerie);
        statusbar->setObjectName("statusbar");
        LiaisonSerie->setStatusBar(statusbar);

        retranslateUi(LiaisonSerie);

        QMetaObject::connectSlotsByName(LiaisonSerie);
    } // setupUi

    void retranslateUi(QMainWindow *LiaisonSerie)
    {
        LiaisonSerie->setWindowTitle(QCoreApplication::translate("LiaisonSerie", "LiaisonSerie", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("LiaisonSerie", "Choisissez un port s\303\251rie", nullptr));

        comboBox->setCurrentText(QCoreApplication::translate("LiaisonSerie", "Choisissez un port s\303\251rie", nullptr));
        pushButtonOuvrirPortSerie->setText(QCoreApplication::translate("LiaisonSerie", "Ouvrir le port s\303\251rie", nullptr));
        label->setText(QCoreApplication::translate("LiaisonSerie", "texte \303\240 envoyer :", nullptr));
        pushButtonEnvoyer->setText(QCoreApplication::translate("LiaisonSerie", "Envoyer", nullptr));
        label_2->setText(QCoreApplication::translate("LiaisonSerie", "Texte re\303\247u :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LiaisonSerie: public Ui_LiaisonSerie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIAISONSERIE_H
