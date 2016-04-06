#include "leaf.h"

Leaf::Leaf(QString str0,QString str1,double m_d)
{
     Name = str0;
     Desc = str1;
     price = m_d;
}

QString Leaf::getName()
{
    return Name;
}

QString Leaf::getDesc()
{
   return Desc;
}

double Leaf::getPrice()
{
    return price;
}

CompositeIterator Leaf::creatorIterator()
{
    return CompositeIterator(m_pRComposite);
}

void Leaf::add(BaseComponent *m_RComposite)
{
   m_pRComposite->add(m_RComposite);
}
