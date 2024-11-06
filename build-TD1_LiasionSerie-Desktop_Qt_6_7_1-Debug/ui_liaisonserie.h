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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LiaisonSerie
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxPort;
    QPushButton *pushButtonOuvrir;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButtonEnvoyer;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTextEdit *textEdit;

    void setupUi(QWidget *LiaisonSerie)
    {
        if (LiaisonSerie->objectName().isEmpty())
            LiaisonSerie->setObjectName("LiaisonSerie");
        LiaisonSerie->resize(800, 600);
        layoutWidget = new QWidget(LiaisonSerie);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(80, 190, 471, 279));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        comboBoxPort = new QComboBox(layoutWidget);
        comboBoxPort->addItem(QString());
        comboBoxPort->setObjectName("comboBoxPort");

        horizontalLayout->addWidget(comboBoxPort);

        pushButtonOuvrir = new QPushButton(layoutWidget);
        pushButtonOuvrir->setObjectName("pushButtonOuvrir");

        horizontalLayout->addWidget(pushButtonOuvrir);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_2->addWidget(lineEdit);

        pushButtonEnvoyer = new QPushButton(layoutWidget);
        pushButtonEnvoyer->setObjectName("pushButtonEnvoyer");

        horizontalLayout_2->addWidget(pushButtonEnvoyer);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 1);


        retranslateUi(LiaisonSerie);

        QMetaObject::connectSlotsByName(LiaisonSerie);
    } // setupUi

    void retranslateUi(QWidget *LiaisonSerie)
    {
        LiaisonSerie->setWindowTitle(QCoreApplication::translate("LiaisonSerie", "LiaisionSerie", nullptr));
        comboBoxPort->setItemText(0, QCoreApplication::translate("LiaisonSerie", "Choississez un port s\303\251rie", nullptr));

        pushButtonOuvrir->setText(QCoreApplication::translate("LiaisonSerie", "Ouvrir le port s\303\251rie", nullptr));
        label->setText(QCoreApplication::translate("LiaisonSerie", "Texte \303\240 envoyer : ", nullptr));
        pushButtonEnvoyer->setText(QCoreApplication::translate("LiaisonSerie", "Envoyer", nullptr));
        label_2->setText(QCoreApplication::translate("LiaisonSerie", "Texte re\303\247u :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LiaisonSerie: public Ui_LiaisonSerie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIAISONSERIE_H
