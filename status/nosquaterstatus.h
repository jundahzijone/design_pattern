#ifndef NOSQUATERSTATUS_H
#define NOSQUATERSTATUS_H
#include "gumballmachine.h"
#include "status.h"

class NoSquaterStatus:public Status
{
public:
    NoSquaterStatus(GumballMachine *p);
    void insertQuater();
    void ejectQuater();
    void turnCrank();
    void depense();
private:
     GumballMachine *m_pRMachine;

};

#endif // NOSQUATERSTATUS_H
