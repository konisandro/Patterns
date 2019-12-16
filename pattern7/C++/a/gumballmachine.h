#ifndef GUMBALLMACHINE_H
#define GUMBALLMACHINE_H
#include <iostream>
#include<QString>
#include <QStringList>

using namespace std;

class GumballMachine
{
public:
    const static int SOLD_OUT = 0;
    const static int NO_QUARTER = 1;
    const static int HAS_QUARTER = 2;
    const static int SOLD = 3;

    int state = SOLD_OUT;
    int count = 0;

    GumballMachine(int count);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
    void refill(int numGumBalls);
    QString toString();
};

#endif // GUMBALLMACHINE_H
