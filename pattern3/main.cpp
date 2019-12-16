#include <QCoreApplication>
#include "pizza.h"
#include "nystylecheezepizza.h"
#include "pizzastore.h"
#include "nystylepizzastore.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    PizzaStore *nyStore = new NYStylePizzaStore();


    Pizza *pizza = nyStore->orderPizza("cheese");
    //p->prepare();

    return a.exec();
}
