#include "lightoncommand.h"

LightOnCommand::LightOnCommand(Light *light)
{
    m_Rlight = light;
}

void LightOnCommand::execute()
{
    m_Rlight->on();
}
