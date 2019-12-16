#include "amplifier.h"

Amplifier::Amplifier(QString description)
{
    this->description = description;
}

void Amplifier::on() {
    cout << description.toStdString() << " on" << endl;
}

void Amplifier::off() {
    cout << description.toStdString() << " off" << endl;
}

void Amplifier::setStereoSound() {
    cout << description.toStdString() + " stereo mode on" << endl;
}

void Amplifier::setSurroundSound() {
    cout << description.toStdString() << " surround sound on (5 speakers, 1 subwoofer)" << endl;
}

void Amplifier::setVolume(int level) {
    cout << description.toStdString() << " setting volume to " << level << endl;
}

void Amplifier::setTuner(Tuner *tuner) {
    cout << description.toStdString() << " setting tuner to " << dvd << endl;
    this->tuner = tuner;
}

void Amplifier::setDvd(DvdPlayer *dvd) {
    cout << description.toStdString() << " setting DVD player to " << dvd << endl;
    this->dvd = dvd;
}

void Amplifier::setCd(CdPlayer *cd) {
    cout << description.toStdString() << " setting CD player to " << cd << endl;
    this->cd = cd;
}

QString Amplifier::toString() {
    return description;
}
