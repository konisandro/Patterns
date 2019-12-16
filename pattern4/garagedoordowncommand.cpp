#include "garagedoordowncommand.h"

GarageDoorDownCommand::GarageDoorDownCommand(GarageDoor *garageDoor)
{
this->garageDoor = garageDoor;
}

void GarageDoorDownCommand::execute() {
    garageDoor->up();
}
