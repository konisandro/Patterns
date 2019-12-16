#ifndef WINNERSTATE_H
#define WINNERSTATE_H


#include "state.h"
#include "gumballmachine.h"

class GumballMachine;

class WinnerState : public State {
private:
    GumballMachine *gumballMachine;
public:
    WinnerState(GumballMachine *gumballMachine);
    ~WinnerState();
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
    QString toString();
};
#endif // WINNERSTATE_H
