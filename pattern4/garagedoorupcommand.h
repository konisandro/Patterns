#ifndef GARAGEDOORUPCOMMAND_H
#define GARAGEDOORUPCOMMAND_H
#include "command.h"
#include "garagedoor.h"

class GarageDoorUpCommand : public Command
{
private:
    GarageDoor *garageDoor;
public:
    GarageDoorUpCommand(GarageDoor *garageDoor);
    void execute();
};

#endif // GARAGEDOORUPCOMMAND_H
