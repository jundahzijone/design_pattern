#ifndef BASECOFFEE_H
#define BASECOFFEE_H
#include <QString>

class BaseCoffee
{
public:
     BaseCoffee();
     virtual QString getDescription();
     virtual double  cost();

};

#endif // BASECOFFEE_H
