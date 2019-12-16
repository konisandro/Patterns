#include "light.h"

Light::Light(QString place)
{
    this->place = place;
}

void Light::on() {
    cout << "Light is on" << endl;
}

void Light::off() {
    cout << "Light is off" << endl;
}
