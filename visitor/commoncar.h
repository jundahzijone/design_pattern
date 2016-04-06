#ifndef COMMONCAR_H
#define COMMONCAR_H
#include "car.h"

class CommonCar:public Car
{
public:
    CommonCar();
    int getDiscount();

};

#endif // COMMONCAR_H
