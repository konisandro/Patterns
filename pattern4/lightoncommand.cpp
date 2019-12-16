#include "lightoncommand.h"

LightOnCommand::LightOnCommand(Light *light)
{
    this->light = light;
}

void LightOnCommand::execute() {
    light->on();
}
