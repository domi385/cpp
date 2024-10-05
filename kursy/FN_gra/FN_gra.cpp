#include <iostream>

using namespace std;

int Vdolce = 0;

void sprawdzVdolce () {

	if( Vdolce == 0 ) {

		system ( "CLS" );

		cout << "Ale z ciebie bambik, nie masz Vdolcow" << endl;

	}
	else {

		system ( "CLS" );

		cout << "Masz " << Vdolce << " Vdolcow" << endl;

	}
	
}

void cheaty () {

	Vdolce = 1000;

	if( Vdolce == 0 ) {

		system ( "CLS" );

		cout << "Ale z ciebie bambik, nie masz Vdolcow" << endl;


	}
	else {

		system ( "CLS" );

		cout << "Masz " << Vdolce << " Vdolcow" << endl;

	}

}

int main () {

	int wybor; 

	while ( true ) {

		cout << "\n1. Sprawdz stan konta,\n2.Wlacz cheaty,\nCo chcesz zrobic: ";
		cin >> wybor;

		switch ( wybor ) {

		case 1:
			sprawdzVdolce ();
			break;

		case 2:
			cheaty();
			break;

		default:
			cout << "Nie ma takiej opcji.";
			break;

	
		}
	}

	return 0;
}