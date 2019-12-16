#ifndef TVONCOMMAND_H
#define TVONCOMMAND_H
#include "command.h"
#include "tv.h"

class TVOnCommand : public Command
{
private:
     TV *tv;
public:
    TVOnCommand(TV *tv);
    void execute();
    void undo();
};

#endif // TVONCOMMAND_H
