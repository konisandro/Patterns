#ifndef ESPRESSO_H
#define ESPRESSO_H
#include "beverage.h"

class Espresso : public Beverage
{
public:
    Espresso();
    ~Espresso();
    double cost();
};

#endif // ESPRESSO_H
