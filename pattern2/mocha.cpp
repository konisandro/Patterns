#include "mocha.h"

Mocha::Mocha(Beverage *beverage)
{
this->beverage = beverage;
}

double Mocha ::cost(){
    return  0.2 + beverage->cost();
}

QString Mocha :: getDescription(){
    return  beverage->getDescription()+ ", Mocha";
}
