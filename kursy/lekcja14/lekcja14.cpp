#include <iostream>
using namespace std;

void sort1 () {

	int tablica [ ] = { 0, 8, 3, 6, 1, 7, 4, 2, 9, 5 };
	int rozmiar = sizeof ( tablica ) / sizeof( int );
	int minimumIndex;

	for ( auto i : tablica ) {

		cout << i << ", ";
	}

	cout << endl;

	for ( int i = 0; i < rozmiar - 1; i++ ) {  // zawężanie tablicy (przykrycie liczb)
 
		minimumIndex = i; // określenie minumum jako pierwszy element tablicy

		for ( int j = i; j < rozmiar; j++ ) { // szukanie minumum (w ktorym miejscu, pozycja minumum)

			if ( tablica [ minimumIndex ] > tablica [ j ] ) {
				minimumIndex = j;
			}

		}
		swap ( tablica [ minimumIndex ] , tablica [ i ]); // zamiana wartości

	}

	for ( auto i : tablica ) {

		cout << i << ", ";
	}

}

void sort2 () {

	int tablica [ ] = { 0, 8, 3, 6, 1, 7, 4, 2, 9, 5 };
	int rozmiar = sizeof ( tablica ) / sizeof( int );

	for ( auto i : tablica ) {

		cout << i << ", ";
	}

	cout << endl;

	for ( int i = 0; i < rozmiar - 1; i++ ) {

		for ( int j = 0; j < rozmiar - 1; j++ ) { 

			if ( tablica [ j ] > tablica [ j + 1 ] ) { // porownanie 2 bąbelków
				swap ( tablica [ j ] , tablica [ j + 1 ] ); // zamiana kolejnością
			}

		}

	}

	for ( auto i : tablica ) {

		cout << i << ", ";
	}

}

void sort3 () {

	int tablica [ ] = { 0, 8, 3, 6, 1, 7, 4, 2, 9, 5 };
	int rozmiar = sizeof ( tablica ) / sizeof( int );

	for ( auto i : tablica ) {

		cout << i << ", ";
	}

	cout << endl;

	for ( int i = 1; i < rozmiar; i++ ) {

		int aktualnaKarta = tablica [ i ];
		int ulozonaKarta = i - 1;

		while ( aktualnaKarta < tablica [ ulozonaKarta ] && ulozonaKarta >= 0 ) {

			tablica [ ulozonaKarta + 1 ] = tablica [ ulozonaKarta ];
			ulozonaKarta--;

		}
		tablica [ ulozonaKarta + 1 ] = aktualnaKarta;

	}

	for ( auto i : tablica ) {

		cout << i << ", ";
	}

}

int main () {

	sort1 ();

	cout << "\n\n==========\n\n";

	sort2 ();

	cout << "\n\n==========\n\n";

	sort3 ();

	return 0;
}