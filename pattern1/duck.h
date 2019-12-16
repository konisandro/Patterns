#ifndef DUCK_H
#define DUCK_H

#include <iostream>
#include "flybehavior.h"
#include "flywithwings.h"
#include "flynoway.h"

class Duck
{
protected:
    FlyBehavior *flyBehavior;
public:
    Duck();
    void performFly();
    void swim();
    virtual void display() = 0;
};

#endif // DUCK_H
