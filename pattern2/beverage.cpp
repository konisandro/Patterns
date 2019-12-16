#include "beverage.h"

Beverage::Beverage()
{
 description = "Unknow Beverage";
}

Beverage::~Beverage()
{

}

QString Beverage::getDescription(){
    return description;
}
