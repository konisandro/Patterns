#include "gumballmachine.h"

GumballMachine::GumballMachine(int numberGumballs) {
    state = soldOutState;
    count = 0;

    soldOutState = new SoldOutState(this);
    noQuarterState = new NoQuarterState(this);
    hasQuarterState = new HasQuarterState(this);
    soldState = new SoldState(this);
    winnerState = new WinnerState(this);

    this->count = numberGumballs;
    if (numberGumballs > 0) {
        state = noQuarterState;
    }

}

void GumballMachine::insertQuarter() {
    state->insertQuarter();
}

void GumballMachine::ejectQuarter() {
    state->ejectQuarter();
}

void GumballMachine::turnCrank() {
    state->turnCrank();
    state->dispense();
}

void GumballMachine::setState(State *state) {
    this->state = state;
}

void GumballMachine::releaseBall() {
    cout << "A gumball comes rolling out the slot..." << endl;
    if (count != 0) {
        count = count - 1;
    }
}

int GumballMachine::getCount() {
    return count;
}

void GumballMachine::refill(int count) {
    this->count = count;
    state = noQuarterState;
}

State* GumballMachine::getState() {
    return state;
}

State* GumballMachine::getSoldOutState() {
    return soldOutState;
}

State* GumballMachine::getNoQuarterState() {
    return noQuarterState;
}

State* GumballMachine::getHasQuarterState() {
    return hasQuarterState;
}

State* GumballMachine::getSoldState() {
    return soldState;
}

State* GumballMachine::getWinnerState() {
    return winnerState;
}

QString GumballMachine::toString() {
    QStringList *result = new QStringList();
    result->append("\nMighty Gumball, Inc.");
    result->append("\nJava-enabled Standing Gumball Model #2004\n");
    result->append("Inventory: " + QString::number(count) + " gumball");
    if (count != 1) {
        result->append("s");
    }
    result->append("\nMachine is ");
    result->append(state->toString());
    result->append("\n");
    return result->join("");
}
