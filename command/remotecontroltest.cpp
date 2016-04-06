#include "remotecontroltest.h"
#include "remotecontrol.h"
#include "command.h"
#include "light.h"
#include "lightoffcommand.h"
#include "lightoncommand.h"

RemoteControlTest::RemoteControlTest()
{
    Light *light = new Light;
    LightOffCommand *lightoff = new LightOffCommand(light);
    LightOnCommand *lighton = new LightOnCommand(light);

    RemoteControl *rc = new RemoteControl;
    rc->setCommand(lightoff);
    rc->wasButtonPressed();


    rc->setCommand(lighton);
    rc->wasButtonPressed();


}
