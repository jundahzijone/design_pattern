#ifndef BASECOMPONENT_H
#define BASECOMPONENT_H
#include <QString>
#include "compositeiterator.h"

class BaseComponent
{
public:
    BaseComponent();
    virtual QString getName()=0;
    virtual QString getDesc()=0;
    virtual double getPrice()=0;
    virtual CompositeIterator creatorIterator()=0;
    virtual void add(BaseComponent *m_RComposite)=0;
};

#endif // BASECOMPONENT_H
