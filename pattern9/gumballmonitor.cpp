#include "gumballmonitor.h"

GumballMonitor::GumballMonitor(GumballMachine *machine)
{
    this->machine = machine;
}

void GumballMonitor::report(){
    cout << "Gumball Machine: " + machine->getLocation();
    cout << "Current inventory: " + machine->getCount();
    cout << "Current state: " + machine->getState();
}



