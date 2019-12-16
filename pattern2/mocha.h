#ifndef MOCHA_H
#define MOCHA_H
#include "beverage.h"
#include "condimentdecorator.h"

class Mocha : public CondimentDecorator
{
private:
    Beverage *beverage;
public:
    Mocha(Beverage *beverage);
    QString getDescription();
    double cost();
};

#endif // MOCHA_H
