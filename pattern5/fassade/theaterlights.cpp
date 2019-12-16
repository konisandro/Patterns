#include "theaterlights.h"

TheaterLights::TheaterLights(QString description)
{
    this->description = description;
}

void TheaterLights::on() {
    cout << description.toStdString() << " on" << endl;
}

void TheaterLights::off() {
    cout << description.toStdString() << " off" << endl;
}

void TheaterLights::dim(int level) {
    cout << description.toStdString() << " dimming to " << level  << "%" << endl;
}

QString TheaterLights::toString() {
    return description;
}
