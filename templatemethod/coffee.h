#ifndef COFFEE_H
#define COFFEE_H
#include "basewater.h"

class Coffee:public BaseWater
{
public:
    Coffee();
    void pourInCup();
    virtual void prepareRecipe() final;
    void addGradient();
};

#endif // COFFEE_H
