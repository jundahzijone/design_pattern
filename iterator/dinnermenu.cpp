#include "dinnermenu.h"
#include "dinnermenuiterator.h"
#include <QDebug>

//只负责创建菜单即可
DinnerMenu::DinnerMenu()
{
    QStringList str;
    str<<"a"<<"a"<<"a"<<"a";
    addItem(str);
    str.clear();
    str<<"b"<<"b"<<"b"<<"b";
    addItem(str);
    str.clear();

    str<<"c"<<"c"<<"c"<<"c";
    addItem(str);
    str.clear();

    str<<"d"<<"d"<<"d"<<"d";
    addItem(str);
    str.clear();




//    ArrList[0]={"a","a","a","a"};
//    ArrList[1]={"b","b","b","b"};
//    ArrList[2]={"c","c","c","c"};
//    ArrList[3]={"d","d","d","d"};
}

void DinnerMenu::addItem(QStringList a)
{
    MenuItem b(a.at(0),a.at(1),a.at(2),a.at(3));

    m_RstrList.append(b);
}

Iterator* DinnerMenu::creatItem()
{
//     qDebug()<<m_RstrList[2].getName();
    return new DinnerMenuIterator(m_RstrList);

}

