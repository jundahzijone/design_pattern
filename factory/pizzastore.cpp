#include "pizzastore.h"

PizzaStore::PizzaStore()
{
}

Pizza* PizzaStore::createPizza(QString str)
{

}

Pizza* PizzaStore::orderPizza(QString str)
{
    Pizza *m_RPizza = createPizza(str);
    m_RPizza->bake();
    m_RPizza->cut();
    m_RPizza->box();
    return m_RPizza;
}
