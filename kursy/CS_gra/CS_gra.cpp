<<<<<<< HEAD
﻿#include <iostream>

using namespace std;

int win, lose;

void sprawdz_staty() {

	cout << "Wygrane: " << win << endl;
	cout << "Przegrane: " << lose << endl;

}

void wygranaGra() {

	win++;
	sprawdz_staty();

}

void przegranaGra() {

	lose++;
	sprawdz_staty();

}

int main() {
	int wybor;
	while (true) {

		cout << "\n1. Wygranlem mecz,\n2. Przegralem mecz,\n3. Pokaz staty,\nCo chcesz zrobic: ";
		cin >> wybor;

		switch (wybor) {

		case 1:
			system("CLS");
			wygranaGra();
			break;

		case 2:
			system("CLS");
			przegranaGra();
			break;

		case 3:
			system("CLS");
			sprawdz_staty();
			break;

		default:
			system("CLS");
			cout << "Nie ma takiej opcji.";
			break;
		}
	}

	return 0;
=======
﻿#include <iostream>

using namespace std;

int win, lose;

void sprawdz_staty() {

	cout << "Wygrane: " << win << endl;
	cout << "Przegrane: " << lose << endl;

}

void wygranaGra() {

	win++;
	sprawdz_staty();

}

void przegranaGra() {

	lose++;
	sprawdz_staty();

}

int main() {
	int wybor;
	while (true) {

		cout << "\n1. Wygranlem mecz,\n2. Przegralem mecz,\n3. Pokaz staty,\nCo chcesz zrobic: ";
		cin >> wybor;

		switch (wybor) {

		case 1:
			system("CLS");
			wygranaGra();
			break;

		case 2:
			system("CLS");
			przegranaGra();
			break;

		case 3:
			system("CLS");
			sprawdz_staty();
			break;

		default:
			system("CLS");
			cout << "Nie ma takiej opcji.";
			break;
		}
	}

	return 0;
>>>>>>> 3c811f799e10910f5caaadecd103774e6d0ba59f
}