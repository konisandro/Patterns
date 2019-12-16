#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include "pizza.h"

class PizzaStore
{
public:
    PizzaStore();
    ~PizzaStore();
    Pizza* orderPizza(QString type);
    virtual Pizza* createPizza(QString type) = 0;
};

#endif // PIZZASTORE_H
