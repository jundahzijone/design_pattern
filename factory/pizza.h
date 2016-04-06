#ifndef PIZZA_H
#define PIZZA_H
#include <QString>

class Pizza
{
public:
    Pizza();
    virtual void bake()=0;
    virtual void cut()=0;
    virtual void box()=0;
    virtual QString getName()=0;
};

#endif // PIZZA_H
