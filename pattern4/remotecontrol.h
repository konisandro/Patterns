#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H

#include <QString>
#include "command.h"
#include "nocommand.h"

class RemoteControl
{
private:
    Command **onCommands;
    Command **offCommands;
public:
    RemoteControl();
    void setCommand(int slot, Command *onCommand, Command *offCommand);
    void onButtonWasPushed(int slot);
    void offButtonWasPushed(int slot);
    QString toString();

};

#endif // REMOTECONTROL_H
