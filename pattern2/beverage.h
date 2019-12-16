#ifndef BEVERAGE_H
#define BEVERAGE_H
#include <QString>
class Beverage
{
public:
    Beverage();
    ~Beverage();
    QString description;
    virtual QString getDescription();
    virtual double cost() = 0;
};

#endif // BEVERAGE_H
