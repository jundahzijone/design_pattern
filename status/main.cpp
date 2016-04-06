#include <QCoreApplication>
#include "gumballmachine.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    GumballMachine *m_pMachine = new GumballMachine(2);
    m_pMachine->insertQuater();
    m_pMachine->turnCrank();

    m_pMachine->insertQuater();
    m_pMachine->turnCrank();

    m_pMachine->insertQuater();
    m_pMachine->turnCrank();

    //状态与动作  动作是状态之间的跳跃阶段，状态对用户是透明的
    return a.exec();
}
