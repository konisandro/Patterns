#ifndef TURKEYADAPTER_H
#define TURKEYADAPTER_H

#include "duck.h"
#include "turkey.h"

class TurkeyAdapter : public Duck
{
private:
    Turkey *turkey;
public:
    TurkeyAdapter(Turkey *turkey);
    void quack();
    void fly();
};

#endif // TURKEYADAPTER_H
