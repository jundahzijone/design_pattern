#ifndef MILKCOFFEE_H
#define MILKCOFFEE_H

#include "basecoffee.h"

class MilkCoffee:public BaseCoffee
{
public:
    MilkCoffee(BaseCoffee *bc);
    QString getDescription();
    double  cost();
private:
    BaseCoffee *m_pRCoffee;
};

#endif // MILKCOFFEE_H
