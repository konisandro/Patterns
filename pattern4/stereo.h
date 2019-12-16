#ifndef STEREO_H
#define STEREO_H

#include <QString>
#include <iostream>
using namespace std;

class Stereo
{
private:
    QString place;
public:
    Stereo(QString place);
    void on();
    void off();
    void setCd();
    void setDvd();
    void setRadio();
    void setVolume(int);
};

#endif // STEREO_H
