#include "component.h"
#include "compositeiterator.h"

Component::Component(QString str0,QString str1)
{
    this->name = str0;
    this->desc = str1;

}

QString Component::getName()
{
    return name;
}

QString Component::getDesc()
{
    return desc;
}

double Component::getPrice()
{

}

CompositeIterator Component::creatorIterator()
{
  return new CompositeIterator(m_RCompositeList);
}

void Component::add(BaseComponent *m_RComposite)
{
    m_RCompositeList.append(m_RComposite);
}
