#include "soldstate.h"

SoldState::SoldState(GumballMachine *gumballMachine)
{

}

SoldState::~SoldState()
{

}

void SoldState::insertQuarter(){
     cout <<"Please wait, weв already giving you a gumball";
}

void SoldState::ejectQuarter(){
    cout <<"Sorry, you already turned the crank";
}

void SoldState::turnCrank(){
    cout <<"Turning twice doesnвt get you another gumball!";
}

void SoldState::dispense(){
    gumballMachine->releaseBall();
     if (gumballMachine->getCount() > 0) {
     gumballMachine->setState(gumballMachine->getNoQuarterState());
     } else {
     cout<< "Oops, out of gumballs!";
     gumballMachine->setState(gumballMachine->getSoldOutState());
     }
    }

QString SoldState::toString() {
    return "dispensing a gumball";
}
