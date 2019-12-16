#include <QCoreApplication>
#include "mallardduck.h"
#include "wildturkey.h"
#include "turkeyadapter.h"

void testDuck(Duck *duck){
    duck->quack();
    duck->fly();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MallardDuck *duck = new MallardDuck();
    WildTurkey *turkey = new WildTurkey();
    Duck *turkeyAdapter = new TurkeyAdapter(turkey);

    cout<< "The Turkey says..." <<endl;
    turkey->gobble();
    turkey->fly();

    cout<<"\nThe Duck says..." <<endl;
    testDuck(duck);

    cout<<"\nThe TurkeyAdapter says..." <<endl;
    testDuck(turkeyAdapter);
    return a.exec();
}
