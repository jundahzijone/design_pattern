#include "milkcoffee.h"

MilkCoffee::MilkCoffee(BaseCoffee *bc)
{
    m_pRCoffee = bc;
}


QString MilkCoffee::getDescription()
{
    QString str;
    str = m_pRCoffee->getDescription();
    str.append(",MilkCoffee");
    return str;
}

double MilkCoffee::cost()
{
    return m_pRCoffee->cost()+3.0;
}
