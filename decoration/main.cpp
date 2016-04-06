#include <QCoreApplication>
#include "roastcoffee.h"
#include "milkcoffee.h"
#include "basecoffee.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    BaseCoffee *bc = new BaseCoffee;

    RoastCoffee *rc = new RoastCoffee(bc);

    MilkCoffee *mc = new MilkCoffee(rc);

    qDebug()<<mc->getDescription();
    qDebug()<<mc->cost();


    return a.exec();
}
