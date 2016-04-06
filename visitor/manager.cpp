#include "manager.h"

Manager::Manager()
{
}

int Manager::getCarDiscount(Car *car)
{
    return car->getDiscount();
}
