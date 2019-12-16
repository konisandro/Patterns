#include "soy.h"

Soy::Soy(Beverage *beverage)
{
this->beverage = beverage;
}

double Soy ::cost(){
    return  0.20 + beverage->cost();
}

QString Soy :: getDescription(){
    return  beverage->getDescription()+ ", Soy";
}
