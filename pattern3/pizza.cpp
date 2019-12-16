#include "pizza.h"

Pizza::Pizza()
{
    toppings = new QList <QString>();
}

void Pizza::prepare() {
    cout << "Preparing " << name.toStdString() << endl;
    cout << "Tossing dough..." << endl;
    cout << "Adding sauce..." << endl;
    cout << "Adding toppings: " << endl;
    for (int i = 0; i < toppings->size(); i++) {
        cout << "\t" << toppings->at(i).toStdString() << endl;
    }
}

void Pizza::bake() {
    cout << "Bake for 25 minutes at 350" << endl;
}

void Pizza::cut() {
    cout << "Cutting the pizza into diagonal slices" << endl;
}

void Pizza::box() {
    cout << "Place pizza in official PizzaStore box" << endl;
}

QString Pizza::getName() {
    return name;
}
