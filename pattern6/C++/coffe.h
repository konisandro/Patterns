#ifndef COFFE_H
#define COFFE_H
#include <QString>

#include "caffeinebeverage.h"

class Coffe : public CaffeineBeverage
{
private:
    QString getUserInput();
public:
    Coffe();
    void brew();
    void addCondiments();
    bool customerWantsCondiments();
};
#endif // COFFE_H
