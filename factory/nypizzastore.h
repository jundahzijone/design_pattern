#ifndef NYPIZZASTORE_H
#define NYPIZZASTORE_H
#include "pizzastore.h"
#include "pizza.h"

class NYPizzaStore:public PizzaStore
{
public:
    NYPizzaStore();
    Pizza* createPizza(QString str);
};

#endif // NYPIZZASTORE_H
