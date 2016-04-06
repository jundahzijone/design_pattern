#ifndef LIGHTOFFCOMMAND_H
#define LIGHTOFFCOMMAND_H
#include "command.h"
#include "light.h"

class LightOffCommand:public Command
{
public:
    LightOffCommand(Light *light);
    void execute();
private:
    Light *m_Rlight;
};

#endif // LIGHTOFFCOMMAND_H
