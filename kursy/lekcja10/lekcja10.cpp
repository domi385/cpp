#include <iostream>
using namespace std;

int main() {

	int oceny[4] = { 5, 4, 5, 3 };

	// cout << oceny[3];
	
	for (int i = 0; i < 4; i++) {

		cout << oceny[i] << " ";

	}

	cout << "\n----------\n";

	for (int i = 0; i < sizeof(oceny) / sizeof(oceny[0]); i++) {

		cout << oceny[i] << " ";

	}

	cout << "\n----------\n";

	for (int ocena: oceny ) {

		cout << ocena << " ";

	}

	cout << "\n----------\n";

	char tablica[7] = { 'D', 'o', 'm', 'i', 'n', 'i', 'k' };

	for (char znak: tablica) {
		cout << znak;
	}

	cout << "\n----------\n";

	int liczbyN[10] = { 7, 2, 5, 1, 9, 3, 6, 8, 4, 0 };

	int max = liczbyN[0];
	int min = liczbyN[0];

	for (int i: liczbyN) {
		if (i > max) max = i;
        if (i < min) min = i;
	}

	cout << min << " " << max << "\n";

	return 0;
}