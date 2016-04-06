#include "guagedoor.h"
#include "QDebug"

GuageDoor::GuageDoor()
{
}

void GuageDoor::off()
{
    qDebug()<<"the guagedoor is close now";
}

void GuageDoor::on()
{
    qDebug()<<"the guagedoor is opened now";
}
