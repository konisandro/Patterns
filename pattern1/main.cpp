#include <QCoreApplication>
#include "duck.h"
#include "mallardduck.h"
#include"rubberduck.h"fff

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Duck *mallard = new MallardDuck();
    mallard->performFly();
    return a.exec();
}

