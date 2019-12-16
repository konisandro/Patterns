#include "garagedoorupcommand.h"

GarageDoorUpCommand::GarageDoorUpCommand(GarageDoor *garageDoor)
{
this->garageDoor = garageDoor;
}

void GarageDoorUpCommand::execute() {
    garageDoor->up();
}
