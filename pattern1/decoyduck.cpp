#include "decoyduck.h"

DecoyDuck::DecoyDuck()
{
    flyBehavior = new FlyNoWay();
}

void DecoyDuck::display() {
    std::cout << "I'am a real Decoy duck" << std::endl;
}
