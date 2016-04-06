#ifndef SOLDSTATUS_H
#define SOLDSTATUS_H
#include "status.h"
#include "gumballmachine.h"
class SoldStatus:public Status
{
public:
    SoldStatus(GumballMachine *p);
    void insertQuater();
    void ejectQuater();
    void turnCrank();
    void depense();
private:
     GumballMachine *m_pRMachine;
};

#endif // SOLDSTATUS_H
