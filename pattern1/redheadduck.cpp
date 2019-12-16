#include "redheadduck.h"

RedheadDuck::RedheadDuck()
{
    flyBehavior = new FlyWithWings();
}

void RedheadDuck::display() {
    std::cout << "I'am a real Redhead duck" << std::endl;
}
