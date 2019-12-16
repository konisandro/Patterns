#ifndef WHIP_H
#define WHIP_H
#include "condimentdecorator.h"

class Whip : public CondimentDecorator
{
private:
    Beverage *beverage;
public:
    Whip(Beverage *beverage);
    double cost();
    QString getDescription();
};

#endif // WHIP_H
