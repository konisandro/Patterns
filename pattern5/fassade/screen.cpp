#include "screen.h"

Screen::Screen(QString description)
{
    this->description = description;
}

void Screen::up() {
    cout << description.toStdString() << " going up" << endl;
}

void Screen::down() {
    cout << description.toStdString() << " going down" << endl;
}


QString Screen::toString() {
    return description;
}

