#ifndef MILK_H
#define MILK_H
#include "condimentdecorator.h"

class Milk : public CondimentDecorator
{
private:
    Beverage *beverage;
public:
    Milk(Beverage * beverage);
    double cost();
    QString getDescription();
};
#endif // MILK_H
