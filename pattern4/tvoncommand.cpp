#include "tvoncommand.h"


TVOnCommand::TVOnCommand(TV *tv)
{
this->tv = tv;
}

void TVOnCommand::execute(){
    tv->on();
    tv->setInputChannel();
}

void TVOnCommand:: undo(){
    tv->off();
}
