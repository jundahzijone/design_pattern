#include <QCoreApplication>
#include "waittress.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    WaitTress * b = new WaitTress;
    return a.exec();
}
