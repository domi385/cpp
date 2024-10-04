#include <iostream>

using namespace std;

int main() {
	/*
	int miesiac;

	cout << "Podaj liczbe: ";
	cin >> miesiac;

	cout << "\n";
	
	if (miesiac == 1) {
		cout << "Podany miesiac to styczen";
	}
	else if (miesiac == 2) {
		cout << "Podany miesiac to luty";
	}
	else if (miesiac == 3) {
		cout << "Podany miesiac to marzec";
	}
	else if (miesiac == 4) {
		cout << "Podany miesiac to kwiecien";
	}
	else if (miesiac == 5) {
		cout << "Podany miesiac to maj";
	}
	else if (miesiac == 6) {
		cout << "Podany miesiac to czerwiec";
	}
	else if (miesiac == 7) {
		cout << "Podany miesiac to lipiec";
	}
	else if (miesiac == 8) {
		cout << "Podany miesiac to sierpien";
	}
	else if (miesiac == 9) {
		cout << "Podany miesiac to wrzesien";
	}
	else if (miesiac == 10) {
		cout << "Podany miesiac to pazdziernik";
	}
	else if (miesiac == 11) {
		cout << "Podany miesiac to listipad";
	}
	else if (miesiac == 12) {
		cout << "Podany miesiac to grudzien";
	}
	else {
		cout << "Nie ma takiego miesiaca";
	}
	cout << "\n"; 
	

	
	switch (miesiac) {
		case 1:
			cout << "Podany miesiac to styczen";
			break;
		case 2:
			cout << "Podany miesiac to luty";
			break;
		case 3:
			cout << "Podany miesiac to marzec";
			break;
		case 4:
			cout << "Podany miesiac to kwiecien";
			break;
		case 5:
			cout << "Podany miesiac to maj";
			break;
		case 6:
			cout << "Podany miesiac to czerwiec";
			break;
		case 7:
			cout << "Podany miesiac to lipiec";
			break;
		case 8:
			cout << "Podany miesiac to sierpien";
			break;
		case 9:
			cout << "Podany miesiac to wrzesien";
			break;
		case 10:
			cout << "Podany miesiac to pazdziernik";
			break;
		case 11:
			cout << "Podany miesiac to listopad";
			break;
		case 12:
			cout << "Podany miesiac to grudzien";
			break;
		default: 
			cout << "Nie ma takiego miesiaca";
	}
	

	int dzien;
	cout << "Podaj dzien: ";
	cin >> dzien;

	switch (dzien) {
		case 1:
		case 2:
		case 4:
			cout << "Sklep jest otwarty";
			break;
		case 3:
		case 5:
		case 6:
		case 7:
			cout << "Sklep jest zamkniety";
			break;
		default: 
			cout << "\nNie ma takiego dnia";
	}
	*/

	cout << "Vesemir:\n";
	cout << "Witaj podrozniku, o czym chcesz posluchac?\n";
	cout << "1. Posluchaj o Alghul\n";
	cout << "2. Posluchaj o Alp\n";
	cout << "3. Posluchaj o Archespor\n";
	cout << "4. Posluchaj o Barghest\n";

	int wybor;
	cin >> wybor;

	switch (wybor) {
		case 1:
			cout << "Alghul - Ghule, ktore zjadly dużo ludzkich zwlok, nazywamy Alghulami. Sa one silniejsze od zwyklych ghuli. Polecany Styl Silny lub dobrze rozwiniety Szybki.";
			break;
		case 2:
			cout << "Alp - Wampirzyca, ktora umarla w wyniku oszustwa. Stosowac Styl Szybki i znak Igni.";
			break;
		case 3:
			cout << "Archespor - Roslina zyjaca tam, gdzie popelniono straszliwa zbrodnie. Podobna do Echinopsa.";
			break;
		case 4:
			cout << "Barghest - Podwladny upiornego psa, zabija ludzi i rodzi sie z umarlych psow. Swieci zielonkawo lub seledynowo. Styl Szybki.";
			break;
		default :
			return 0;
	}

	cout << "\n";

	system("PAUSE");
}