#ifndef TUNER_H
#define TUNER_H
#include <QString>
#include <iostream>
#include "amplifier.h"

using namespace std;

class Tuner
{
private:
    QString description;
    Amplifier *amplifier;
    double frequency;
public:
    Tuner(QString description, Amplifier *amplifier);
    void on();
    void off();
    void setFrequency(double frequency);
    void setAm();
    void setFm();
    QString toString();
};

#endif // TUNER_H
