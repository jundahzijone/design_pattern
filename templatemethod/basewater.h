#ifndef BASEWATER_H
#define BASEWATER_H

class BaseWater
{
public:
    BaseWater();
   void prepareRecipe();
   virtual void boilWater() final;
   virtual void pourInCup()=0;
   virtual void addGradient()=0;
   virtual void stir() final;
};

#endif // BASEWATER_H
