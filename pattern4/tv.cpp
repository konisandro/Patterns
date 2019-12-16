#include "tv.h"

TV::TV(QString place)
{
this->place = place;
}

void TV::on() {
    cout << "TV is on" << endl;
}

void TV::off() {
    cout << "TV is off" << endl;
}

void TV::setInputChannel(){
    cout<<"TV channel is set for DVD";
}
