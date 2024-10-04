#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {

	srand(time(NULL));

	int gra = 1;
	int guess;
	int wynikgracza = 0;
	int wynikprzeciwnika = 0;
	int random;


	while (gra == 1) {
		cout << "Twoj wynik: " << wynikgracza << endl;
		cout << "Wynik przeciwnika: " << wynikprzeciwnika << endl;

		random = rand() % 3 + 1;
		cout << "1. Kamien\n2.Papier\n3.Nozyce\nCo wybierasz? " << endl;
		cin >> guess;
		if (guess == random) {
			cout << "Wygrales!";
			wynikgracza++;
		}
		if (guess != 1 && guess != 2 && guess != 3) {
			cout << "Zly wybor\n";
		}
		else if (guess != random) {
			cout << "Przegrales!\n";
			wynikprzeciwnika++;

			if (random == 1) {
				cout << "System wylosowal kamien\n";
			}
			if (random == 2) {
				cout << "System wylosowal papier\n";
			}
			if (random == 3) {
				cout << "System wylosowal nozyce\n";
			}
		}
		cout << "Czy chcesz kontynuowac gre?\n1. Tak\n2. Nie  ";
		cin >> gra;
		if (gra == 1) {
			system("CLS");
		}
	}
	return 0;
}