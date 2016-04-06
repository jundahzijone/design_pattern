#include "lightoffcommand.h"
#include <QDebug>

LightOffCommand::LightOffCommand(Light *light)
{
    m_Rlight = light;
}


void LightOffCommand::execute()
{
     m_Rlight->off();
}

