#ifndef CDPLAYER_H
#define CDPLAYER_H
#include <QString>
#include <iostream>
#include "amplifier.h"

using namespace std;

class CdPlayer
{
private:
    QString description;
    int currentTrack;
    Amplifier *amplifier;
    QString title;
public:
    CdPlayer(QString description, Amplifier *amplifier);
    void on();
    void off();
    void eject();
    void play(QString title);
    void play(int track);
    void stop();
    void pause();
    QString toString();
};

#endif // CDPLAYER_H
