#ifndef GARAGEDOORDOWNCOMMAND_H
#define GARAGEDOORDOWNCOMMAND_H
#include "command.h"
#include "garagedoor.h"

class GarageDoorDownCommand : public Command
{
private:
    GarageDoor *garageDoor;
public:
    GarageDoorDownCommand(GarageDoor *garageDoor);
    void execute();
};

#endif // GARAGEDOORDOWNCOMMAND_H
