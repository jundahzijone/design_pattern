#ifndef COMPOSITEITERATOR_H
#define COMPOSITEITERATOR_H
#include "basecomponent.h"
#include <QList>

class CompositeIterator
{
public:
    CompositeIterator(BaseComponent *p);
    bool hasNext();
    BaseComponent* Next();
};

#endif // COMPOSITEITERATOR_H
