#include "soldoutstatus.h"
#include <QDebug>

SoldOutStatus::SoldOutStatus(GumballMachine *p)
{
      m_pRMachine = p;
}


void SoldOutStatus::insertQuater()
{
    qDebug()<<"sorry, Gumball has sold out";

}

void SoldOutStatus::ejectQuater()
{
    qDebug()<<"Gumball has sold out";
}

void SoldOutStatus::turnCrank()
{
    qDebug()<<"you turned, but Gumball has sold out";

}

void SoldOutStatus::depense()
{
    qDebug()<<"Gumball has sold out";
}

