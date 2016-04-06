#include <QCoreApplication>
#include "manager.h"
#include "benz.h"
#include "commoncar.h"
#include <QDebug>
#include "salesman.h"


//待解决的问题，如何解决销售员的打折问题

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    BenZ *benz = new BenZ;
    CommonCar *ordinaryCar = new CommonCar;

    Manager *manager = new Manager;
    int b = manager->getCarDiscount(benz);
    qDebug()<<b;

    b = manager->getCarDiscount(ordinaryCar);
    qDebug()<<b;


    SalesMan *saleMan  = new SalesMan;
    b = saleMan->getCarDiscount(benz);
    qDebug()<<b;
    b = saleMan->getCarDiscount(ordinaryCar);
    qDebug()<<b;
    return a.exec();
}
