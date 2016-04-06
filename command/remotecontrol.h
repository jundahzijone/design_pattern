#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H
#include "command.h"

class RemoteControl
{
public:
    RemoteControl();
    void setCommand(Command *cm);
    void wasButtonPressed();
private:
    Command *m_Rcommand;
};

#endif // REMOTECONTROL_H
