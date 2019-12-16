#ifndef GUMBALLMACHINE_H
#define GUMBALLMACHINE_H

#include <iostream>
#include <QString>
#include <QStringList>

#include "state.h"
#include "soldoutstate.h"
#include "noquarterstate.h"
#include "hasquarterstate.h"
#include "soldstate.h"
using namespace std;

class GumballMachine {
private:
    State *soldOutState;
    State *noQuarterState;
    State *hasQuarterState;
    State *soldState;
    State *state;
    int count;
public:
    GumballMachine(int numberGumballs);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void setState(State *state);
    void releaseBall();
    int getCount();
    void refill(int count);
    State *getState();
    State *getSoldOutState();
    State *getNoQuarterState();
    State *getHasQuarterState();
    State *getSoldState();
    QString toString();
};

#endif // GUMBALLMACHINE_H
