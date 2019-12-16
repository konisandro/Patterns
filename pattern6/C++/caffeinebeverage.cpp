#include "caffeinebeverage.h"

CaffeineBeverage::CaffeineBeverage()
{

}

void CaffeineBeverage::prepareRecipe(){
    boilWater();
    brew();
    pourInCup();
    if (customerWantsCondiments()){
        addCondiments();
    }
}

void CaffeineBeverage::boilWater(){
    cout <<"Boiling water" <<endl;
}

void CaffeineBeverage::pourInCup(){
    cout <<"Pouring into cup" <<endl;
}

bool CaffeineBeverage::customerWantsCondiments(){
    return  true;
}


