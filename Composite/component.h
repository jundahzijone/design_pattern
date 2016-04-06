#ifndef COMPONENT_H
#define COMPONENT_H
#include "basecomponent.h"
#include <QList>

class Component:public BaseComponent
{
public:
     Component(QString str0,QString str1);
     QString getName();
     QString getDesc();
     double getPrice();
     CompositeIterator creatorIterator();
     void add(BaseComponent *m_RComposite);
private:
     QString name,desc;
     QList<BaseComponent *> m_RCompositeList;
};

#endif // COMPONENT_H
