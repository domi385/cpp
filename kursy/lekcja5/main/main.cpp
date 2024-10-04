#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    // srand(time(NULL));

    // cout << rand() % 49 + 1 << endl;
    // cout << rand() % 49 + 1 << endl;
    // cout << rand() % 49 + 1 << endl;
    // cout << rand() % 49 + 1 << endl;
    // cout << rand() % 49 + 1 << endl;
    // cout << rand() % 49 + 1 << endl;


    // int rok = 0;

    // cout << "Podaj rok" << endl;
    // cin >> rok;

    // if (rok % 4 == 0) {
    //     cout << "Ten rok jest przestępny";
    // }
    // else {
    //     cout << "Ten rok nie jest przestępny";
    // }


    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Podaj dlugosc pierwszego boku" << endl;
    cin >> a;
    cout << "Podaj dlugosc drugiego boku" << endl;
    cin >> b;
    cout << "Podaj dlugosc trzeciego boku" << endl;
    cin >> c;

    if (a < b + c && b < a + c && c < b + c) {
        cout << "Z tych bokow mozna zbudowac trojkat";
    }
    else {
        cout << "Z tych bokow nie mozna zbudowac trojkata";
    }

    return 0;
    system("pause");
}