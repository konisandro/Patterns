#include "nystylepizzastore.h"

NYStylePizzaStore::NYStylePizzaStore()
{

}

Pizza* NYStylePizzaStore::createPizza(QString type) {
    Pizza *pizza;
    if (type == "cheese") {
        pizza = new NYStyleCheezePizza();
    }
    /*else if (type == "pepperoni") {
        pizza = new NYStylePepperoniPizza();
    }
    else if (type == "clam") {
        pizza = new NYStyleClamPizza();
    }
    else if (type == "veggie") {
        pizza = new NYStyleVeggiePizza();
    }*/
    return pizza;
}
