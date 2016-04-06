#ifndef MANAGER_H
#define MANAGER_H
#include "car.h"

class Manager:public Car
{
public:
    Manager();
    int getCarDiscount(Car *car);
};

#endif // MANAGER_H
