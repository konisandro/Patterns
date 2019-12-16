#include "hasquarterstate.h"

HasQuarterState::HasQuarterState(GumballMachine *gumballMachine)
{
    this->gumballMachine = gumballMachine;
}

HasQuarterState::~HasQuarterState()
{

}

void HasQuarterState::insertQuarter(){
    cout<<"You can insert another quarter";
}

void HasQuarterState::ejectQuarter(){
    cout <<"Quarter returned";
    gumballMachine->setState(gumballMachine->getNoQuarterState());
}

void HasQuarterState::turnCrank(){
    cout <<"You turned...";
    gumballMachine->setState(gumballMachine->getSoldState());
}

void HasQuarterState::dispense(){
    cout <<"No gumball dispensed";
}
