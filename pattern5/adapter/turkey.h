#ifndef TURKEY_H
#define TURKEY_H

#include <iostream>
using namespace std;

class Turkey
{
public:
    Turkey();
    ~Turkey();
    virtual void gobble() = 0;
    virtual void fly() = 0;
};

#endif // TURKEY_H
