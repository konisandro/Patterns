#include "tuner.h"

Tuner::Tuner(QString description, Amplifier *amplifier)
{
    this->description = description;
}

void Tuner::on() {
    cout << description.toStdString() << " on" << endl;
}

void Tuner::off() {
    cout << description.toStdString() << " off" << endl;
}

void Tuner::setFrequency(double frequency) {
    cout << description.toStdString() << " setting frequency to " << frequency << endl;
    this->frequency = frequency;
}

void Tuner::setAm() {
    cout << description.toStdString() << " setting AM mode" << endl;
}

void Tuner::setFm() {
    cout << description.toStdString() << " setting FM mode" <<endl;
}

QString Tuner::toString() {
    return description;
}
