#include <QCoreApplication>
#include "nypizzastore.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    NYPizzaStore *m_pRNYStore = new NYPizzaStore;
    m_pRNYStore->orderPizza("cheese");

    return a.exec();
}
