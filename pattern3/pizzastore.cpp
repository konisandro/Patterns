#include "pizzastore.h"

PizzaStore::PizzaStore()
{

}

PizzaStore::~PizzaStore()
{

}

Pizza* PizzaStore::orderPizza(QString type) {
    Pizza *pizza;
    pizza = createPizza(type);
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}
