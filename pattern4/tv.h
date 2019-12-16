#ifndef TV_H
#define TV_H

#include <QString>
#include <iostream>
using namespace std;

class TV
{
private:
    QString place;
public:
    TV(QString place);
    void on();
    void off();
    void setInputChannel();
};

#endif // TV_H
