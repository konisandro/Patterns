#include <QCoreApplication>
#include "remotecontrol.h"
#include "light.h"
#include "stereo.h"
#include "lightoncommand.h"
#include "lightoffcommand.h"
#include "stereonwithcdcommand.h"
#include "stereooffcommand.h"
#include "tvoncommand.h"
#include "tvoffcommand.h"
#include "garagedoordowncommand.h"
#include "garagedoorupcommand.h"
#include "garagedoor.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    RemoteControl *remoteControl = new RemoteControl();

    Light *livingRoomLight = new Light("Living Room");
    Light *kitchenLight = new Light("Kitchen");
    Stereo *stereo = new Stereo("Living Room");
    TV *tv =new TV("Living Room");
    GarageDoor *garagrdoor = new GarageDoor("Living Room");

    LightOnCommand *livingRoomLightOn = new LightOnCommand(livingRoomLight);
    LightOffCommand *livingRoomLightOff = new LightOffCommand(livingRoomLight);
    LightOnCommand *kitchenLightOn = new LightOnCommand(kitchenLight);
    LightOffCommand *kitchenLightOff = new LightOffCommand(kitchenLight);
    StereOnWithCDCommand *stereoOnWithCD = new StereOnWithCDCommand(stereo);
    StereoOffCommand *stereoOff = new StereoOffCommand(stereo);
    TVOnCommand *tvOn = new TVOnCommand(tv);
    TVOffCommand *tvOff = new TVOffCommand(tv);
    GarageDoorUpCommand *garagrdoorup = new GarageDoorUpCommand(garagrdoor);
    GarageDoorDownCommand *garagrdoordown = new GarageDoorDownCommand(garagrdoor);



    remoteControl->setCommand(0, livingRoomLightOn, livingRoomLightOff);
    remoteControl->setCommand(1, kitchenLightOn, kitchenLightOff);
    remoteControl->setCommand(2, stereoOnWithCD, stereoOff);
    remoteControl->setCommand(3, tvOn, tvOff);
    remoteControl->setCommand(4,garagrdoorup,garagrdoordown);

    remoteControl->onButtonWasPushed(0);
    remoteControl->offButtonWasPushed(0);

    remoteControl->onButtonWasPushed(1);
    remoteControl->offButtonWasPushed(1);

    remoteControl->onButtonWasPushed(2);
    remoteControl->offButtonWasPushed(2);

    remoteControl->onButtonWasPushed(3);
    remoteControl->offButtonWasPushed(3);

    remoteControl->onButtonWasPushed(4);
    remoteControl->offButtonWasPushed(4);

    return a.exec();
}
