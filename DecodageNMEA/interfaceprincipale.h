#ifndef INTERFACEPRINCIPALE_H
#define INTERFACEPRINCIPALE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class InterfacePrincipale;
}
QT_END_NAMESPACE

class InterfacePrincipale : public QMainWindow
{
    Q_OBJECT

public:
    InterfacePrincipale(QWidget *parent = nullptr);
    ~InterfacePrincipale();
    void DecodageNMEA(QString _trameNMEA);


private:
    Ui::InterfacePrincipale *ui;
    QByteArray trameCourante;
};
#endif // INTERFACEPRINCIPALE_H
