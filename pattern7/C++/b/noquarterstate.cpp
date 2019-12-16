#include "noquarterstate.h"


NoQuarterState::NoQuarterState(GumballMachine *gumballMachine)
{
    this->gumballMachine = gumballMachine;
}

NoQuarterState::~NoQuarterState()
{

}

void NoQuarterState::insertQuarter(){
    cout << "You inserted a quarter";
    gumballMachine->setState(gumballMachine->getHasQuarterState());
}

void NoQuarterState::ejectQuarter(){
    cout <<"You havenв inserted a quarter";
}

void NoQuarterState::turnCrank(){
    cout << "You turned, but thereв no quarter";
}

void NoQuarterState::dispense(){
    cout <<"You need to pay first";
}

QString NoQuarterState::toString() {
    return "waiting for quarter";
}

