#include "tea.h"
#include <QDebug>

Tea::Tea()
{}


void Tea::prepareRecipe()
{
          boilWater();
          pourInCup();
          addGradient();
          stir();
}
void Tea::pourInCup()
{
    qDebug()<<"pour water in tea cup";
}

void Tea::addGradient()
{
    qDebug()<<"add tea leaf into the tea";
}


