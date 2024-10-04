#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int liczbaCalkowita;
    float liczbaPrzecinkowa1 = 4.13f;
    double liczbaPrzecinkowa2 = 2.422;
    bool wartoscLogiczna = true;
    char znak = 'x';
    string napis = "napis";

    cout << "Podaj liczbe calkowita: " << endl;
    cin >> liczbaCalkowita;

    cout << "Podaj liczbe zmiennoprzecinkowa: " << endl;
    cin >> liczbaPrzecinkowa1;

    cout << "Podaj napis: " << endl;
    cin >> napis; 

    cout << "Liczba calkowita: " << liczbaCalkowita << endl; 

    cout << "Liczba zmiennoprzecinkowa float: " << liczbaPrzecinkowa1 << endl;

    cout << "Liczba zmiennoprzecinkowa double: " << liczbaPrzecinkowa2 << endl;
    
    cout << "Wartosc logiczna: " << wartoscLogiczna << endl;

    cout << "Znak: " << znak << endl;

    cout << "Napis: " << napis << endl;

    cout << sizeof(liczbaCalkowita) << endl; 

    return 0;
}
