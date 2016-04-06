#ifndef TEA_H
#define TEA_H
#include "basewater.h"


class Tea:public BaseWater
{
public:
    Tea();
    void pourInCup();
    void addGradient();
    virtual void prepareRecipe() final;

};

#endif // TEA_H
