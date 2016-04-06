#ifndef ITERATOR_H
#define ITERATOR_H
#include <QString>
#include "menuitem.h"


class Iterator
{
public:
    Iterator();
    virtual bool hasNext()=0;
    virtual MenuItem Next()=0;
};

#endif // ITERATOR_H
