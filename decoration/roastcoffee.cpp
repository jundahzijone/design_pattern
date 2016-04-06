#include "roastcoffee.h"

RoastCoffee::RoastCoffee(BaseCoffee *bc)
{
    m_pRCoffee = bc;
}

QString RoastCoffee::getDescription()
{
    QString str;
    str = m_pRCoffee->getDescription();
    str.append(",RoastCoffee");
    return str;
}

double RoastCoffee::cost()
{
    return m_pRCoffee->cost()+2.0;
}


