#include <QCoreApplication>
#include "gumballmachine.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    GumballMachine *gumballMachine = new GumballMachine(10);

    cout << gumballMachine->toString().toStdString() << endl;

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    cout << gumballMachine->toString().toStdString() << endl;

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    cout << gumballMachine->toString().toStdString() << endl;

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    cout << gumballMachine->toString().toStdString() << endl;

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    cout << gumballMachine->toString().toStdString() << endl;

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    cout << gumballMachine->toString().toStdString() << endl;
    return a.exec();
}
