#ifndef PROJECTOR_H
#define PROJECTOR_H
#include <QString>
#include <iostream>
#include "dvdplayer.h"

using namespace std;

class Projector
{
private:
    QString description;
    DvdPlayer *dvdPlayer;
public:
    Projector(QString description, DvdPlayer *dvdPlayer);
    void on();
    void off();
    void wideScreenMode();
    void tvMode();
    QString toString();
};

#endif // PROJECTOR_H
