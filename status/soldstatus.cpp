#include "soldstatus.h"
#include <QDebug>

SoldStatus::SoldStatus(GumballMachine *p)
{
    m_pRMachine = p;
}

void SoldStatus::insertQuater()
{
    qDebug()<<"Don't Worry, We are now giving a Gumball";
}

void SoldStatus::ejectQuater()
{
  qDebug()<<"Sorry,your have turn the crank";
}

void SoldStatus::turnCrank()
{
  qDebug()<<"truning twice doesn't get you another Gumball";
}

void SoldStatus::depense()
{
    if(m_pRMachine->count>0)
    {
        m_pRMachine->releaseBall();
        m_pRMachine->setState(m_pRMachine->getNoQuaterState());
    }
    else
    {
       qDebug()<<"oops, out of gumballs";
       m_pRMachine->setState(m_pRMachine->getSoldOutState());
    }
}

