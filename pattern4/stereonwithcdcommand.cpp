#include "stereonwithcdcommand.h"

StereOnWithCDCommand::StereOnWithCDCommand(Stereo *stereo)
{
    this->stereo = stereo;
}

void StereOnWithCDCommand::execute() {
    stereo->on();
    stereo->setCd();
    stereo->setVolume(11);
}
