#ifndef GUMBALLMACHINE_H
#define GUMBALLMACHINE_H

#include <iostream>
#include <QString>
#include <QStringList>
using namespace std;
#include "state.h"
#include "soldoutstate.h"
#include "noquarterstate.h"
#include "hasquarterstate.h"
#include "soldstate.h"
#include "winnerstate.h"
#include "gumballmonitor.h"

class GumballMachine {
private:
    State *soldOutState;
    State *noQuarterState;
    State *hasQuarterState;
    State *soldState;
    State *winnerState;
    State *state;
    int count;
    QString location;
public:
    GumballMachine(int numberGumballs, QString location);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void setState(State *state);
    void releaseBall();
    int getCount();
    void refill(int count);
    int getLocation();
    string getState();
    State* getSoldOutState();
    State* getNoQuarterState();
    State* getHasQuarterState();
    State* getSoldState();
    State* getWinnerState();
    QString toString();
};

#endif // GUMBALLMACHINE_H
