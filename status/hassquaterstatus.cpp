#include "hassquaterstatus.h"
#include <QDebug>

HasSquaterStatus::HasSquaterStatus(GumballMachine *p)
{
    m_pRMachine = p;
}

void HasSquaterStatus::insertQuater()
{
   qDebug()<<"do not need to insert the quater twice";
}

void HasSquaterStatus::ejectQuater()
{

      qDebug()<<"Quater returned";
      m_pRMachine->setState(m_pRMachine->getNoQuaterState());
}

void HasSquaterStatus::turnCrank()
{
   qDebug()<<"you turned......";
   m_pRMachine->setState(m_pRMachine->getSoldState());
}

void HasSquaterStatus::depense()
{
  qDebug()<<"waiting for turn of crank";

}
