#ifndef GUMBALLMONITOR_H
#define GUMBALLMONITOR_H
#include "gumballmachine.h"

class GumballMonitor
{
private:
    GumballMachine *machine;
public:
    GumballMonitor(GumballMachine *machine);
    void report();
};

#endif // GUMBALLMONITOR_H
