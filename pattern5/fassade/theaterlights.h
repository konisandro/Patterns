#ifndef THEATERLIGHTS_H
#define THEATERLIGHTS_H
#include <QString>
#include <iostream>

using namespace std;

class TheaterLights
{
private:
    QString description;
public:
    TheaterLights(QString description);
    void on();
    void off();
    void dim(int level);
    QString toString();
};

#endif // THEATERLIGHTS_H
