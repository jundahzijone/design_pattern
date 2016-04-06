#ifndef SALES_H
#define SALES_H

#include "car.h"

class Sales
{
public:
    Sales();
    virtual int getCarDiscount(Car *car)=0;

};

#endif // SALES_H
