#include "coffe.h"

Coffe::Coffe()
{

}


void Coffe::brew(){
    cout << "Dripping Coffee through filter" <<endl;
}


void Coffe::addCondiments(){
    cout << "Adding Sugar and Milk" <<endl;
}

bool Coffe::customerWantsCondiments(){
    QString answer = getUserInput();

    if (answer.toLower().startsWith("y")){
        return true;
    } else {
        return false;
    }
}

QString Coffe::getUserInput(){
    char answer = NULL;

    cout << "Would you like mulk and sugar with your coffee (y/n)?" <<endl;
    cin >> answer;

    if (answer == NULL){
        return "no";
    }
    return QString(answer);
}
