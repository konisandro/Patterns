#ifndef STEREONWITHCDCOMMAND_H
#define STEREONWITHCDCOMMAND_H

#include "command.h"
#include "stereo.h"

class StereOnWithCDCommand : public Command
{
private:
    Stereo *stereo;
public:
    StereOnWithCDCommand(Stereo *stereo);
    void execute();
};

#endif // STEREONWITHCDCOMMAND_H
