#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H
#include "beverage.h"

class CondimentDecorator : public Beverage
{
public:
    CondimentDecorator();
    ~CondimentDecorator();
    virtual QString  getDescription() = 0;
};

#endif // CONDIMENTDECORATOR_H
