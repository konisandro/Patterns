#ifndef TEA_H
#define TEA_H
#include <QString>
#include "caffeinebeverage.h"

class Tea : public CaffeineBeverage
{
private:
    QString getUserInput();
public:
    Tea();
    void brew();
    void addCondiments();
    bool customerWantsCondiments();

};

#endif // TEA_H
