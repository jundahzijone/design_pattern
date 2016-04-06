#ifndef CHEESEPIZZA_H
#define CHEESEPIZZA_H
#include "pizza.h"

class CheesePizza:public Pizza
{
public:
    CheesePizza();
     void bake();
     void cut();
     void box();
     QString getName();
};

#endif // CHEESEPIZZA_H
