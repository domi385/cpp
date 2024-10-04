#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	int dzialanie = 1;
	int wybor;
	double wartosc;
	double nowaWartosc;

	while (dzialanie != 2) {
		cout << "***** KONWERTER JEDNOSTEK *****\n\n";
		cout << "1. C-F\n2. F-C\n3. cm-m\n4. m-cm\n5. kg-g\n6. g-kg" << endl;
		cout << "Aby zamknac konwerter wybierz '0'";
		cout << "\nWybierz jednostki:  ";
		cin >> wybor;

		if ( wybor != 0 ) {

			cout << "\nPodaj wartosc do konwersji:  ";
			cin >> wartosc;
			switch (wybor) {
			case 1:
				nowaWartosc = ((wartosc * 9 / 5) + 32);
				cout << "Podana temperatura w Fahrenheitach wynosi " << nowaWartosc << "F" << endl;
				break;
			case 2:
				nowaWartosc = ((wartosc - 32) * 5 / 9);
				cout << "Podana temperatura w Celsjuszach wynosi " << nowaWartosc << "C" << endl;
				break;
			case 3:
				nowaWartosc = (wartosc / 100);
				cout << "Podana dlugosc w metrach wynosi " << nowaWartosc << "m" << endl;
				break;
			case 4:
				nowaWartosc = (wartosc * 100);
				cout << "Podana dlugosc w centymetrach wynosi " << nowaWartosc << "cm" << endl;
				break;
			case 5:
				nowaWartosc = (wartosc * 1000);
				cout << "Podana masa w gramach wynosi " << nowaWartosc << "g" << endl;
				break;
			case 6:
				nowaWartosc = (wartosc / 1000);
				cout << "Podana masa w kilogramach wynosi " << nowaWartosc << "kg" << endl;
				break;
			}
		}
		cout << "\nCzy chcesz kontynuowac konwertowanie jednostek?\n1. Tak\n2. Nie:  ";
		cin >> dzialanie;
		if (wybor == 0 && dzialanie == 2) {
			return 0;
		}
		else {
			system("cls");
		}
	}
}
