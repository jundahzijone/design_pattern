#include "waittress.h"
#include "dinnermenu.h"
#include "iterator.h"
#include "menuitem.h"
#include <QDebug>
WaitTress::WaitTress()
{
    DinnerMenu *m_RDinnerMenu = new DinnerMenu;
    Iterator *m_RIterator =  m_RDinnerMenu->creatItem();
//    MenuItem m_pRMenuItem;


    while(m_RIterator->hasNext())
    {
      MenuItem  m_pRMenuItem = m_RIterator->Next();
      qDebug()<<m_pRMenuItem.getName();

    }

//    if(m_RIterator->hasNext())
//    {
//        m_pRMenuItem =  m_RIterator->Next();


//       qDebug()<<m_pRMenuItem->getName();

//    }

}
