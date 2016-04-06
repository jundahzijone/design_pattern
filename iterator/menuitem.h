#ifndef MENUITEM_H
#define MENUITEM_H
#include <QString>

class MenuItem
{
public:
    MenuItem();
    MenuItem(QString name,QString description,QString price,QString vegetarian);

    QString getName();
    QString getDescription();
    QString getPrice();
    QString isVegetarian();
private:
    QString name;
    QString description;
    QString vegetarian;
    QString price;
};

#endif // MENUITEM_H
