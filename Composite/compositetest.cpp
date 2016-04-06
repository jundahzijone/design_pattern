#include "compositetest.h"
#include "basecomponent.h"
#include "component.h"
#include "leaf.h"

CompositeTest::CompositeTest()
{
  BaseComponent *m_AllDinner = new Component("All dinner","this is the all dinner");

  BaseComponent *m_breakfast = new Component("breadfast","this is the breakfast menu");
  BaseComponent *m_lunch = new Component("lunch","this is the lunch menu");
  BaseComponent *m_supper = new Component("supper","this is the supper menu");

    m_AllDinner->add(m_breakfast);
    m_AllDinner->add(m_lunch);
    m_AllDinner->add(m_supper);

    m_breakfast->add(new Leaf("egg","this is egg",2.4));
    m_breakfast->add(new Leaf("bread","this is bread",3.4));

    m_lunch->add(new Leaf("griskin","this is griskin",10.4));
    m_lunch->add(new Leaf("noddle","this is middle",5.4));

    m_supper->add(new Leaf("rice","this is middle",5.4));
    m_supper->add(new Leaf("drink","this is middle",1.4));


    BaseComponent *m_dessert = new Component("dessert","this is the dessert menu");
    m_dessert->add(new Leaf("coffee","this is for coffee",4.0));

    m_breakfast->add(m_dessert);


}
