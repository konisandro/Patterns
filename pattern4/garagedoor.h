#ifndef GARAGEDOOR_H
#define GARAGEDOOR_H

#include <iostream>
#include <QString>
using namespace std;

class GarageDoor
{
private:
    QString place;
public:
    GarageDoor(QString place);
    void up();
    void down();
    void stop();
    void lightOn();
    void lightOff();
};

#endif // GARAGEDOOR_H
