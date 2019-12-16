#ifndef DUCK_H
#define DUCK_H

#include <iostream>
using namespace std;

class Duck
{
public:
    Duck();
    ~Duck();
    virtual void quack() = 0;
    virtual void fly() = 0;
};

#endif // DUCK_H
