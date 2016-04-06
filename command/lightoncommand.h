#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H
#include "command.h"
#include "light.h"

class LightOnCommand : public Command
{
public:
    LightOnCommand(Light *light);
    void execute();
private:
    Light *m_Rlight;
};

#endif // LIGHTONCOMMAND_H
