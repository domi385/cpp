#include <iostream>
#include <windows.h>
using namespace std;

void wyswietl ( int tab [ 20 ][ 20 ] );
int policzSasiadow ( int tab [ 20 ][ 20 ] , int i , int j );
void pokolenie ( int tab [ 20 ][ 20 ] );

int main () {

	int plansza [ 20 ][ 20 ] = { 0 };

	plansza [ 9 ][ 8 ] = 1;
	plansza [ 9 ][ 10 ] = 1;
	plansza [ 10 ][ 10 ] = 1;
	plansza [ 10 ][ 9 ] = 1;
	plansza [ 11 ][ 9 ] = 1;

	
	cout << policzSasiadow ( plansza , 9 , 8 ) << endl;
	cout << policzSasiadow ( plansza , 9 , 10 ) << endl;
	cout << policzSasiadow ( plansza , 10 , 10 ) << endl;
	cout << policzSasiadow ( plansza , 10 , 9 ) << endl;
	cout << policzSasiadow ( plansza , 11 , 9 ) << endl;

	while ( true ) {
		system ( "cls" );

		wyswietl ( plansza );
		pokolenie ( plansza );

		system ( "pause" );

	}

	return 0;
}

void wyswietl ( int tab [ 20 ][ 20 ] ) {

	for ( int i = 0; i < 20; i++ ) {

		for (int j = 0; j < 20; j++){
			if (tab[i][j] == 0){
				cout << " ";
			}
			
			else{
			    cout << "X";
			}
		}
        cout << endl;
	}
}

int policzSasiadow ( int tab [ 20 ][ 20 ] , int i , int j ) {

	int sasiedzi = 0;

	int gora;
	int dol;
	int srodekGoraDol;
	int lewo;
	int prawo;
	int srodekPrawoLewo;
	
	if ( i == 0 ) {
		gora = 19;
		srodekGoraDol = 0;
		dol = 1;	
	}
	else if ( i == 19 ) {
		gora = 18;
		srodekGoraDol = 19;
		dol = 0;
	}
	else {
		gora = i - 1;
		srodekGoraDol = i;
		dol = i + 1;
	}


	if ( j == 0 ) {
		lewo = 19;
		srodekPrawoLewo = 0;
		prawo = 1;
	}
	else if ( j == 19 ) {
		lewo = 18;
		srodekPrawoLewo = 19;
		prawo = 0;
	}
	else {
		lewo = j - 1;
		srodekPrawoLewo = j;
		prawo = j + 1;
	}


	sasiedzi += tab [ gora ][ lewo ];
	sasiedzi += tab [ srodekGoraDol ][ lewo ];
	sasiedzi += tab [ dol ][ lewo ];
	sasiedzi += tab [ gora ][ srodekPrawoLewo ];
	sasiedzi += tab [ dol ][ srodekPrawoLewo ];
	sasiedzi += tab [ gora ][ prawo ];
	sasiedzi += tab [ srodekGoraDol ][ prawo ];
	sasiedzi += tab [ dol ][ prawo ];

	return sasiedzi;
}

void pokolenie ( int tab [ 20 ][ 20 ] ) {

	int nowaTab [ 20 ][ 20 ] = { 0 };

	for ( int i = 0; i < 20; i++ ) {
		for ( int j = 0; j < 20; j++ ) {

			int sasiedzi = policzSasiadow ( tab , i , j );
			//żywa komórka, któa ma mniej niż 2 sąsiadów, w kolejnym kroku umiera
			//żywa komóka, która ma więcej niż 3 sąsiadów w kolejnym kroku umiera
			//żywa komórka, która ma 2 lub 3 sąsiadów w kolejnym kroku przeżywa
			//martwa komórka, która ma ma trzech żywych sąsiadów w kolejnym kroku ożywa
			if ( tab [ i ][ j ] == 1 && sasiedzi < 2 ) {
				nowaTab [ i ][ j ] = 0;
			}
			else if ( tab [ i ][ j ] == 1 && sasiedzi > 3 ) {
				nowaTab [ i ][ j ] = 0;
			}
			else if ( tab [ i ][ j ] == 1) {
				nowaTab [ i ][ j ] = 1;
			}
			else if ( tab [ i ][ j ] == 0 && sasiedzi == 3 ) {
				nowaTab [ i ][ j ] = 1;
			}

		}
	}
	for ( int i = 0; i < 20; i++){
		for ( int j = 0; j < 20; j++ ) {
			tab [ i ][ j ] = nowaTab [ i ][ j];
		}
	}
		
}