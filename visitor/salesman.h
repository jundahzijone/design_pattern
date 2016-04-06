#ifndef SALESMAN_H
#define SALESMAN_H
#include "sales.h"

class SalesMan:public Sales
{
public:
    SalesMan();
    int getCarDiscount(Car *car);
};

#endif // SALESMAN_H
