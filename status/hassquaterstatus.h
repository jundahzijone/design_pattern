#ifndef HASSQUATERSTATUS_H
#define HASSQUATERSTATUS_H
#include "gumballmachine.h"
#include "status.h"

class HasSquaterStatus:public Status
{
public:
     explicit HasSquaterStatus(GumballMachine *p);
     void insertQuater();
     void ejectQuater();
     void turnCrank();
     void depense();
private:
     GumballMachine *m_pRMachine;
};

#endif // HASSQUATERSTATUS_H
