#include <iostream>

using namespace std;

int main(){

	/*
		Stwórz 5 elementową tablicę intów i wypisz jej elementy.
	*/

	int tablica [ 5 ] = { 1, 2, 3, 4, 5 };

	cout << tablica [ 0 ] << endl;
	cout << tablica [ 1 ] << endl;
	cout << tablica [ 2 ] << endl;
	cout << tablica [ 3 ] << endl;
	cout << tablica [ 4 ] << endl;

	cout << "=====" << endl;

	for ( int i = 0; i < 5; i++ ) {

		cout << tablica [ i ] << endl;
	}

	cout << "=====" << endl;

	for ( int liczba : tablica ) {

		cout << liczba << endl;
	}

	cout << "==========" << endl;

	int kasa,poziom,ranga;

	cin >> kasa >> poziom >> ranga;
	if(kasa>=1000 && poziom>=100 && ranga>= 10){
		cout << "Mozesz kupic railguna";
	}else if(kasa>= 1000 || poziom >= 100 || ranga >= 10){
		cout << "Niewiele Ci brakuje jeszce troche i bedzie Cie stac";
	}else{
		cout << "Jeszcze daleka droga" << endl;
	}


	cout << "==========" << endl;

	/*
	Zadanie 3 - Operacje matematyczne
	Napisz program obliczający pole trapezu o bokach 4 i 13, oraz wysokości 7
	P = (a + b)*h*1/2
	*/

	int a = 4 , b = 13 , h = 7;
	
	float P = ( ( a + b ) * h ) / 2.0;

	cout << "Wynik: " << P << endl;

	cout << "==========" << endl;

	/*
	Zadanie 5 -Pętle
	Napisz pętlę liczącą od 20 do 1, wypisującą tylko liczby parzyste
	*/

	for ( int i = 20; i >= 1; i--  /*lub i -= 2 bez if'a*/ ) {

		if ( i % 2 == 0 ) {
			cout << i << endl;
		}

	}

	return 0;
}

