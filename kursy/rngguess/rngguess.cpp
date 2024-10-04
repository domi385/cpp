#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
    srand(time(NULL));
    char x = 'T';
    while (x != 'N' || x != 'n') {
        int rng = rand() % 10 + 1;
        int guess = 0;
        while (guess != rng) {
            cout << "Zgadnij liczbe: ";
            cin >> guess;
            if (guess == rng) {
                cout << "Brawo, zgadles!" << endl;
            }
            else if (guess == 0) {
                break;
            }
            else if (guess > rng) {
                cout << "Za duza!" << endl;
            }
            else if (guess < rng) {
                cout << "Za mala!" << endl;
            }
        }
        cout << "Czy chcesz kontynuowac gre (T/N): ";
        cin >> x;
        if (x=='T' || x == 't'){
            rng = rand() % 10 + 1;
            system("CLS");
        }
        else if (x=='N' || x == 'n'){
            return 0;
        }
    }
    system("PAUSE");
}
