#ifndef NYSTYLEPIZZASTORE_H
#define NYSTYLEPIZZASTORE_H

#include "pizza.h"
#include "pizzastore.h"
#include "nystylecheezepizza.h"

class NYStylePizzaStore : public PizzaStore
{
public:
    NYStylePizzaStore();
    Pizza* createPizza(QString type);
};

#endif // NYSTYLEPIZZASTORE_H
