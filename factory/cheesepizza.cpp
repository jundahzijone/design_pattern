#include "cheesepizza.h"
#include <QDebug>

CheesePizza::CheesePizza()
{
}

void CheesePizza::bake()
{
    qDebug()<<"cheese bake";
}

void CheesePizza::cut()
{
    qDebug()<<"cheese cut";
}

void CheesePizza::box()
{
  qDebug()<<"cheese box";
}

QString CheesePizza::getName()
{
    return "cheese";
}
