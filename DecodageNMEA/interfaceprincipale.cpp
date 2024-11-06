#include "interfaceprincipale.h"
#include "ui_interfaceprincipale.h"

InterfacePrincipale::InterfacePrincipale(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::InterfacePrincipale)
{
    ui->setupUi(this);
}

InterfacePrincipale::~InterfacePrincipale()
{
    delete ui;
}
