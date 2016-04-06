#ifndef DINNERMENU_H
#define DINNERMENU_H

#include "menuitem.h"
#include <QList>
#include <QStringList>
#include "iterator.h"

//只是单独地创建菜单了
class DinnerMenu
{
public:
    DinnerMenu();
    Iterator* creatItem();
    void addItem(QStringList a);
public:
    QList<MenuItem> m_RstrList;
//    QList<QS>
//    char ArrList[10][4];
};


#endif // DINNERMENU_H
