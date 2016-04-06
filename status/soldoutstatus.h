#ifndef SOLDOUTSTATUS_H
#define SOLDOUTSTATUS_H
#include "gumballmachine.h"
#include "status.h"

class SoldOutStatus:public Status
{
public:
    SoldOutStatus(GumballMachine *p);
    void insertQuater();
    void ejectQuater();
    void turnCrank();
    void depense();
private:
     GumballMachine *m_pRMachine;

};

#endif // SOLDOUTSTATUS_H
