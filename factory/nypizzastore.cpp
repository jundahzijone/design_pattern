#include "nypizzastore.h"
#include "cheesepizza.h"

NYPizzaStore::NYPizzaStore()
{
}

Pizza* NYPizzaStore::createPizza(QString str)
{
    if(str == "cheese")
        return new CheesePizza();

}
