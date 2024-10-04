#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int wiek;
    float kasa;

    cout << "Podaj ile masz lat" << endl;
    cin >> wiek;
    
    cout << "Podaj ile masz kasy" << endl;
    cin >> kasa;

    if(wiek >=18 && kasa >= 30){
        cout << "Jestes pelnoletni i masz wystarczajaco pieniedzy, zapraszamy" << endl;
    }
    else if(wiek < 18 && kasa >=30){
        cout << "Masz wystarczjaco pieniedzy, ale jestes za mlody" << endl;
    }
    else if(wiek >=18 && kasa < 30)
    {
        cout << "jestes pelnoletni, ale masz za malo kasy" << endl;
    }
    else{
        cout << "Jestes za mlody i masz za malo kasy" << endl;
    }
    return 0;
}