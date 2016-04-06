#ifndef ROASTCOFFEE_H
#define ROASTCOFFEE_H
#include "basecoffee.h"

class RoastCoffee:public BaseCoffee
{
public:
    RoastCoffee(BaseCoffee *bc);
    QString getDescription();
    double  cost();
private:
    BaseCoffee *m_pRCoffee;
};

#endif // ROASTCOFFEE_H
