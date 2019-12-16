#include "stereo.h"

Stereo::Stereo(QString place)
{
    this->place = place;
}

void Stereo::on() {
    cout << "Stereo is on" << endl;
}

void Stereo::off() {
    cout << "Stereo is off" << endl;
}

void Stereo::setCd() {
    cout << "Stereo is set for CD input" << endl;
}

void Stereo::setDvd() {
    cout << "Stereo is set for DVD input" << endl;
}

void Stereo::setRadio() {
    cout << "Stereo is set for Radio" << endl;
}

void Stereo::setVolume(int v) {
    cout << "Stereo volume set to" << endl;
}
