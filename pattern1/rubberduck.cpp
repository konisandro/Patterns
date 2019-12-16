#include "rubberduck.h"

RubberDuck::RubberDuck()
{
    flyBehavior = new FlyNoWay();
}

void RubberDuck::display() {
    std::cout << "I'am a real Rubber duck" << std::endl;
}
