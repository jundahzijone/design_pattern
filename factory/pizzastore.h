#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include "pizza.h"
class PizzaStore
{
public:
    PizzaStore();
    virtual Pizza* createPizza(QString str)=0;
    Pizza* orderPizza(QString str);
};

#endif // PIZZASTORE_H
