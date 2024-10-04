#include <iostream>

using namespace std;

int main() {

	int kamien;

	cout << "Kamien przepowiadajacy pogode: \n1. Mokry\n2. Suchy\n3. Rzuca cien\n4. Bialy\n5. Zimny\n6. Nie widac\n7. Nie ma" << endl;
	cout << "Jaki jest kamien? : ";
	cin >> kamien; 
	cout << "";

	switch (kamien) {
	case 1:
		cout << "Pada deszcz" << endl;
		break;
	case 2:
		cout << "Nie pada";
		break;
	case 3:
		cout << "Swieci slonce";
		break;
	case 4:
		cout << "Pada snieg";
		break;
	case 5:
		cout << "Jest mroz";
		break;
	case 6:
		cout << "Jest mgla";
		break;
	case 7:
		cout << "Przeszlo tornado";
		break;
	default: 
		cout << "Nie pada";
	}
	cout << "\n";
	system("PAUSE");
}