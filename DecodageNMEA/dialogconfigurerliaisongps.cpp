#include "dialogconfigurerliaisongps.h"
#include "ui_dialogconfigurerliaisongps.h"

DialogConfigurerLiaisonGPS::DialogConfigurerLiaisonGPS(QSerialPort &_lePort, QWidget *parent)
    : lePort(_lePort)
    , QDialog(parent)
    , ui(new Ui::DialogConfigurerLiaisonGPS)
{
    ui->setupUi(this);

    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()){
        qDebug() << "Nom : " << info.portName();
        ui->comboBoxChoixPort->addItem(info.portName());
    }

    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()){
        qDebug() << "Nom : " << info.standardBaudRates();
        ui->comboBoxVitesseTransmi->addItem(info.portName());
    }
}

DialogConfigurerLiaisonGPS::~DialogConfigurerLiaisonGPS()
{
    delete ui;
}
