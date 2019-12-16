#include <QCoreApplication>
#include <iostream>
#include "beverage.h"
#include "condimentdecorator.h"
#include "darkroast.h"
#include "decorator.h"
#include "espresso.h"
#include "houseblend.h"
#include "mocha.h"
#include "soy.h"
#include "whip.h"
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Beverage *beverage = new Espresso();
    cout << beverage->getDescription().toStdString()
         << " $" << beverage->cost() << endl;

    Beverage *beverage2 = new DarkRoast();
    beverage2 = new Mocha(beverage2);
    beverage2 = new Mocha(beverage2);
    beverage2 = new Whip(beverage2);
    cout <<beverage2->getDescription().toStdString()
        <<"$" <<beverage2->cost() <<endl;

    Beverage *beverage3 = new HouseBlend();
    beverage3 = new Soy(beverage3);
    beverage3 = new Mocha(beverage3);
    beverage3 = new Whip(beverage3);
    cout <<beverage3->getDescription().toStdString()
        <<"$" <<beverage3->cost() <<endl;

    return a.exec();
}
