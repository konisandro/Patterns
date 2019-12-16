#include "projector.h"

Projector::Projector(QString description, DvdPlayer *dvdPlayer)
{
    this->description = description;
    this->dvdPlayer = dvdPlayer;
}

void Projector::on() {
    cout << description.toStdString() << " on" << endl;
}

void Projector::off() {
    cout << description.toStdString() << " off" << endl;
}

void Projector::wideScreenMode() {
    cout << description.toStdString() << " in widescreen mode (16x9 aspect ratio)" << endl;
}

void Projector::tvMode() {
    cout << description.toStdString() << " in tv mode (4x3 aspect ratio)" << endl;
}

QString Projector::toString() {
    return description;
}

