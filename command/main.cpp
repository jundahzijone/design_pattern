#include <QCoreApplication>
#include "remotecontroltest.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    RemoteControlTest *rc = new RemoteControlTest;
    return a.exec();
}
