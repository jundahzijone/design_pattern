
#include "basewater.h"
#include <QDebug>

BaseWater::BaseWater()
{
//      boilWater();
//      pourInCup();
//      addGradient();
//      stir();
}

void BaseWater::prepareRecipe()
{
          boilWater();
          pourInCup();
          addGradient();
          stir();
}

void BaseWater::boilWater()
{
    qDebug()<<"boiled water";
}


void BaseWater::stir()
{

    qDebug()<<"stir water";
}
