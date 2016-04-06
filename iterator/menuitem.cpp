#include "menuitem.h"

MenuItem::MenuItem(QString name,QString description,QString price,QString vegetarian)
{
    this->name = name;
    this->description = description;
    this->price = price;
    this->vegetarian = vegetarian;

}

QString MenuItem::getName()
{
    return this->name;
}

QString MenuItem::getDescription()
{
    return this->description;
}

QString MenuItem::getPrice()
{
    return this->price;
}

QString MenuItem::isVegetarian()
{
    return this->vegetarian;
}
