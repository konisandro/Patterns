#ifndef SCREEN_H
#define SCREEN_H
#include <QString>
#include <iostream>

using namespace std;

class Screen
{
private:
    QString description;
public:
    Screen(QString description);
    void up();
    void down();
    QString toString();
};

#endif // SCREEN_H
