#ifndef DINNERMENUITERATOR_H
#define DINNERMENUITERATOR_H
#include <QStringList>
#include <QList>
#include "iterator.h"

class DinnerMenuIterator:public Iterator
{
public:
    DinnerMenuIterator(QList<MenuItem> strList);
    bool hasNext();
    MenuItem Next();

private:
    QList<MenuItem> m_RstrList;
    int pos;


//    QString getName();
//    QString getDescription();
//    double getPrice();
//    bool isVegetarian();
};

#endif // DINNERMENUITERATOR_H
