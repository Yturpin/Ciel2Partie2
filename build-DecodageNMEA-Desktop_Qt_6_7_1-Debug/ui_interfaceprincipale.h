/********************************************************************************
** Form generated from reading UI file 'interfaceprincipale.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACEPRINCIPALE_H
#define UI_INTERFACEPRINCIPALE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InterfacePrincipale
{
public:
    QAction *actionOuvrir;
    QAction *actionEnregistrer;
    QAction *actionQuitter;
    QAction *actionConfigurer;
    QAction *actionA_propos_de;
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuOutils;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *InterfacePrincipale)
    {
        if (InterfacePrincipale->objectName().isEmpty())
            InterfacePrincipale->setObjectName("InterfacePrincipale");
        InterfacePrincipale->resize(800, 600);
        actionOuvrir = new QAction(InterfacePrincipale);
        actionOuvrir->setObjectName("actionOuvrir");
        actionEnregistrer = new QAction(InterfacePrincipale);
        actionEnregistrer->setObjectName("actionEnregistrer");
        actionQuitter = new QAction(InterfacePrincipale);
        actionQuitter->setObjectName("actionQuitter");
        actionConfigurer = new QAction(InterfacePrincipale);
        actionConfigurer->setObjectName("actionConfigurer");
        actionA_propos_de = new QAction(InterfacePrincipale);
        actionA_propos_de->setObjectName("actionA_propos_de");
        centralwidget = new QWidget(InterfacePrincipale);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(150, 40, 301, 413));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 1, 0, 1, 1);

        tableWidget = new QTableWidget(widget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");

        gridLayout->addWidget(tableWidget, 2, 0, 1, 1);

        InterfacePrincipale->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InterfacePrincipale);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 20));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName("menuFichier");
        menuOutils = new QMenu(menubar);
        menuOutils->setObjectName("menuOutils");
        InterfacePrincipale->setMenuBar(menubar);
        statusbar = new QStatusBar(InterfacePrincipale);
        statusbar->setObjectName("statusbar");
        InterfacePrincipale->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuOutils->menuAction());
        menuFichier->addAction(actionOuvrir);
        menuFichier->addAction(actionEnregistrer);
        menuFichier->addAction(actionQuitter);
        menuOutils->addAction(actionConfigurer);
        menuOutils->addAction(actionA_propos_de);

        retranslateUi(InterfacePrincipale);
        QObject::connect(actionQuitter, &QAction::triggered, InterfacePrincipale, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(InterfacePrincipale);
    } // setupUi

    void retranslateUi(QMainWindow *InterfacePrincipale)
    {
        InterfacePrincipale->setWindowTitle(QCoreApplication::translate("InterfacePrincipale", "InterfacePrincipale", nullptr));
        actionOuvrir->setText(QCoreApplication::translate("InterfacePrincipale", "Ouvrir", nullptr));
        actionEnregistrer->setText(QCoreApplication::translate("InterfacePrincipale", "Enregistrer", nullptr));
        actionQuitter->setText(QCoreApplication::translate("InterfacePrincipale", "Quitter", nullptr));
        actionConfigurer->setText(QCoreApplication::translate("InterfacePrincipale", "Configurer", nullptr));
        actionA_propos_de->setText(QCoreApplication::translate("InterfacePrincipale", "A propos de...", nullptr));
        label->setText(QCoreApplication::translate("InterfacePrincipale", "Trame re\303\247ue : ", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("InterfacePrincipale", "Horodatage", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("InterfacePrincipale", "Latitude", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("InterfacePrincipale", "Longitude", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("InterfacePrincipale", "Fichier", nullptr));
        menuOutils->setTitle(QCoreApplication::translate("InterfacePrincipale", "Outils", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InterfacePrincipale: public Ui_InterfacePrincipale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACEPRINCIPALE_H
