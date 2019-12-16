#include "garagedoor.h"

GarageDoor::GarageDoor(QString place)
{
this->place = place;
}


void GarageDoor::up() {
    cout << "Garage Door is Up" << endl;
}

void GarageDoor::down() {
    cout << "Garage Door is Down" << endl;
}

void GarageDoor::stop() {
    cout << "Garage Door is Stopped" << endl;
}

void GarageDoor::lightOn() {
    cout << "Garage light is on" << endl;
}

void GarageDoor::lightOff() {
    cout << "Garage light is off" << endl;
}

