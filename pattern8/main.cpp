#include <QCoreApplication>
#include "gumballmachine.h"
#include "gumballmonitor.h"
#include <string>
int main(int argc, char *argv[]){

    QCoreApplication a(argc, argv);


  /*  GumballMachine *gumballMachine = new GumballMachine(10);

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

    cout << gumballMachine->toString().toStdString() << endl;*/
    int count = 0;

     char args[100];
    if (sizeof(args) < 2) {
        printf("GumballMachine <name> <inventory>") ;
        exit(1);
    }

    try {
                count = args[1];
            } catch (exception_ptr e) {
                exit(1);
            }

    GumballMachine gumballMachine = new GumballMachine(length, count);

    GumballMonitor monitor = new GumballMonitor(gumballMachine);

    monitor.report();
    return a.exec();
}
