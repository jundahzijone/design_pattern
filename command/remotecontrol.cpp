#include "remotecontrol.h"
#include "command.h"


RemoteControl::RemoteControl()
{


}

void RemoteControl::setCommand(Command *cm)
{
    m_Rcommand = cm;
}

void RemoteControl::wasButtonPressed()
{
    m_Rcommand->execute();
}
