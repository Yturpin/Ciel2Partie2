#ifndef DIALOGCONFIGURERLIAISONGPS_H
#define DIALOGCONFIGURERLIAISONGPS_H

#include <QDialog>
#include <QtSerialPort/QSerialPortInfo>
#include <QtSerialPort/QSerialPort>

namespace Ui {
class DialogConfigurerLiaisonGPS;
}

class DialogConfigurerLiaisonGPS : public QDialog
{
    Q_OBJECT

public:
    explicit DialogConfigurerLiaisonGPS(QSerialPort &_lePort, QWidget *parent = nullptr);
    ~DialogConfigurerLiaisonGPS();

private:
    Ui::DialogConfigurerLiaisonGPS *ui;
    QSerialPort &lePort;        //Réference (voir le diagramme de classe losange creux)
};

#endif // DIALOGCONFIGURERLIAISONGPS_H
