#include "tea.h"

Tea::Tea()
{

}


void Tea::brew(){
   cout <<"Steeping the tea" <<endl;
}

void Tea::addCondiments(){
   cout <<"Adding Lemon" <<endl;
}

bool Tea::customerWantsCondiments(){
    QString answer = getUserInput();

    if (answer.toLower().startsWith("y")){
        return true;
    } else {
        return false;
}
}

QString Tea::getUserInput(){
    char answer = NULL;

    cout << "Would you like lemon with you tea (y/n)?" <<endl;
    cin >>answer;

    if (answer == NULL){
        return "no";
    }
    return  QString(answer);
}
