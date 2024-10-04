/*#include <iostream>

using namespace std;

int main() {

	int liczba;

	cout << "Podaj liczbe z zakresu 1-10: ";
	cin >> liczba;

	cout << "\n";

	switch (liczba) {
	case 1:
		cout << "I";
		break;
	case 2:
		cout << "II";
		break;
	case 3:
		cout << "III";
		break;
	case 4:
		cout << "IV";
		break;
	case 5:
		cout << "V";
		break;
	case 6:
		cout << "VI";
		break;
	case 7:
		cout << "VII";
		break;
	case 8:
		cout << "VIII";
		break;
	case 9:
		cout << "IX";
		break;
	case 10:
		cout << "X";
		break;
	default:
		cout << "Nalezy wprowadzic liczbe z zakresu od 1 do 10";
	}
	cout << "\n";
	system("PAUSE");
}*/


/*#include <iostream>

using namespace std;

int main() {

	for ( int i = 0; i <= 30; i += 2) {
		cout << i << "\n";
	}
	cout << "\n\n";

	for (int i = 50; i >= 1; i--) {
		if (i % 3 == 0) {
			cout << i << "\n";
		}
	}
	system("PAUSE");
}*/

#include <iostream>

using namespace std;

int main() {
	int liczba = 1;
	while (liczba >= 1 && liczba <= 100) {

		cout << liczba;
		
		if (liczba % 3 == 0) {
			cout << " bim";
		}
		if (liczba % 5 == 0) {
			cout << " bam";
		}
		liczba++;
		cout << "\n";
	}
	system("PAUSE");
}