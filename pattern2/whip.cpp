#include "whip.h"

Whip::Whip(Beverage *beverage)
{
this->beverage = beverage;
}

double Whip :: cost(){
    return 0.10 + beverage->cost();
}

QString Whip :: getDescription(){
    return beverage->getDescription() + ", Whip";
}
