#include "gumballmachine.h"
#include "hassquaterstatus.h"
#include "soldoutstatus.h"
#include "soldstatus.h"
#include "nosquaterstatus.h"
#include <QDebug>

GumballMachine::GumballMachine(int num)
{

    m_pRHasSquaterState = new HasSquaterStatus(this);
    m_pRNoSquaterstate = new NoSquaterStatus(this);
    m_pSoldState = new SoldStatus(this);
    m_pRSoldOutState = new SoldOutStatus(this);

    if(num > 0)
    {
        curr_status = m_pRNoSquaterstate;
    }

    setState(m_pRNoSquaterstate);


    count = num;

}

void GumballMachine::setState(Status *state)
{
    curr_status = state;
}

void GumballMachine::insertQuater()
{
    curr_status->insertQuater();
}

void GumballMachine::ejectQuater()
{
    curr_status->ejectQuater();
}

void GumballMachine::turnCrank()
{
    curr_status->turnCrank();
    curr_status->depense();
}

void GumballMachine::depense()
{
    curr_status->depense();
}

Status* GumballMachine::getNoQuaterState()
{
    return m_pRNoSquaterstate;
}

Status* GumballMachine::getHasQuaterState()
{
    return m_pRHasSquaterState;
}

Status* GumballMachine::getSoldOutState()
{
    return m_pRSoldOutState;
}

Status* GumballMachine::getSoldState()
{
   return m_pSoldState;
}

void GumballMachine::releaseBall()
{
    count--;
    qDebug()<<"succeefully sold the ball";
}

