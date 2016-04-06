#include "nosquaterstatus.h"
#include <QDebug>

NoSquaterStatus::NoSquaterStatus(GumballMachine *p)
{
    m_pRMachine = p;
}

void NoSquaterStatus::insertQuater()
{
    qDebug()<<"you insert the quater";
    m_pRMachine->setState(m_pRMachine->getHasQuaterState());
}

void NoSquaterStatus::ejectQuater()
{
    qDebug()<<"you need to  insert quater";
}

void NoSquaterStatus::turnCrank()
{
    qDebug()<<"you turned, but you need to insert quater";
}

void NoSquaterStatus::depense()
{
    qDebug()<<"you need to pay first";
}
