#include "light.h"
#include <QDebug>

Light::Light()
{
}

void Light::on()
{
    qDebug()<<"the light is opened";
}

void Light::off()
{
    qDebug()<<"the light is close";
}
