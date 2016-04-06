#ifndef GUMBALLMACHINE_H
#define GUMBALLMACHINE_H
#include "status.h"
class NoSquaterStatus;
class HasSquaterStatus;
class SoldStatus;
class SoldOutStatus;

class GumballMachine
{
public:
    GumballMachine(int num);
    void setState(Status *state);
    void insertQuater();
    void ejectQuater();
    void turnCrank();
    void depense();
    Status* getNoQuaterState();
    Status* getHasQuaterState();
    Status* getSoldOutState();
    Status* getSoldState();
    void releaseBall();
public:
    NoSquaterStatus *m_pRNoSquaterstate;
    HasSquaterStatus *m_pRHasSquaterState;
    SoldStatus *m_pSoldState;
    SoldOutStatus *m_pRSoldOutState;
    Status *curr_status;
    int count;
};

#endif // GUMBALLMACHINE_H
