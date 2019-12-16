#ifndef DVDPLAYER_H
#define DVDPLAYER_H
#include <QString>
#include <iostream>
#include "amplifier.h"

using namespace std;

class DvdPlayer
{
private:
    QString description;
    int currentTrack;
    Amplifier *amplifier;
    QString movie;
public:
    DvdPlayer(QString description, Amplifier *amplifier);
    void on();
    void off();
    void eject();
    void play(QString movie);
    void play(int track);
    void stop();
    void pause();
    void setTwoChannelAudio();
    void setSurroundAudio();
    QString toString();
};

#endif // DVDPLAYER_H
