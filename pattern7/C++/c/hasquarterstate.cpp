#include "hasquarterstate.h"

HasQuarterState::HasQuarterState(GumballMachine *gumballMachine) {
    this->gumballMachine = gumballMachine;
    qsrand(QDateTime::currentMSecsSinceEpoch() / 1000);
}

HasQuarterState::~HasQuarterState() {

}

void HasQuarterState::insertQuarter() {
    cout << "You can't insert another quarter" << endl;
}

void HasQuarterState::ejectQuarter() {
    cout << "Quarter returned" << endl;
    gumballMachine->setState(gumballMachine->getNoQuarterState());
}

void HasQuarterState::turnCrank() {
    cout << "You turned..." << endl;
    int winner = qrand() % 10;
    if (winner == 0 && gumballMachine->getCount() > 1) {
        gumballMachine->setState(gumballMachine->getWinnerState());
    }
    else {
        gumballMachine->setState(gumballMachine->getSoldState());
    }
}

void HasQuarterState::dispense() {
    cout << "No gumball dispensed" << endl;
}

QString HasQuarterState::toString() {
    return "waiting for turn of crank";
}
