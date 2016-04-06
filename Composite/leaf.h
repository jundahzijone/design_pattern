#ifndef LEAF_H
#define LEAF_H
#include "basecomponent.h"

class Leaf:public BaseComponent
{
public:
    Leaf(QString str0,QString str1,double m_d);
    QString getName();
    QString getDesc();
    double getPrice();
    CompositeIterator creatorIterator();
    void add(BaseComponent *m_RComposite);
private:
    BaseComponent *m_pRComposite;
    QString Name,Desc;
    double price;
};

#endif // LEAF_H
