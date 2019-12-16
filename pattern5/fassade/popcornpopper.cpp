#include "popcornpopper.h"

PopcornPopper::PopcornPopper(QString description)
{
    this->description = description;
}

void PopcornPopper::on() {
    cout << description.toStdString() << " on" << endl;
}

void PopcornPopper::off() {
cout << description.toStdString() << " off" << endl;
    }

void PopcornPopper::pop() {
    cout << description.toStdString() << " popping popcorn!" << endl;
}

QString PopcornPopper::toString() {
    return description;
}
