#include "tvoffcommand.h"

TVOffCommand::TVOffCommand(TV *tv)
{
this->tv = tv;
}

void TVOffCommand::execute() {
    tv->off();
}
