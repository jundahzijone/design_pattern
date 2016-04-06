#include <QCoreApplication>
#include "coffee.h"
#include "tea.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Tea *tea = new  Tea;
    tea->prepareRecipe();
    Coffee *cfe = new Coffee;
    cfe->prepareRecipe();


    return a.exec();
}
