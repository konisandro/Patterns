#ifndef TVOFFCOMMAND_H
#define TVOFFCOMMAND_H
#include "command.h"
#include "tv.h"
class TVOffCommand : public Command
{
private:
    TV *tv;
public:
    TVOffCommand(TV *tv);
    void execute();
};

#endif // TVOFFCOMMAND_H
