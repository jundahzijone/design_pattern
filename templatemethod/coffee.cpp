#include "coffee.h"
#include <QDebug>

Coffee::Coffee()
{

}


void Coffee::prepareRecipe()
{
          boilWater();
          pourInCup();
          addGradient();
          stir();
}


void Coffee::pourInCup()
{
    qDebug()<<"push water into coffee Cup";
}

void Coffee::addGradient()
{
    qDebug()<<"add coffee gradient";
}
