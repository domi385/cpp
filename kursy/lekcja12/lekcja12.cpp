<<<<<<< HEAD
﻿#include <iostream>

using namespace std;

int globalna = 0;

void zwieksz() {
	
	int globalna = 0;
	globalna++;
	cout << "Wartosc w srodku funkcji: " << globalna << endl;

}

void zwiekszGlobalnie() {

	globalna++;
	cout << "Wartosc globalna w srodku funkcji: " << globalna << endl;

}

void zamiana(int& a, int& b) {

	int tmp = a;
	a = b;
	b = a;

}

unsigned long long  silnia(int a) {

	if (a == 0) {

		return 1;

	}
	else {
		
		return silnia(a - 1) * a;
		
	}

}

void zad1(int& a, int& b) {

	a = a * a;
	b = b * b * b;

}

int main() {

	cout << globalna << endl;

	zwieksz();

	cout <<  globalna << endl;

	zwiekszGlobalnie();

	cout << globalna << endl;


	cout << "\n==========\n";


	int zmienna1 = 10, zmienna2 = 20;
	cout << "\nZmienna1: " << zmienna1 << "\nZmienna2: " << zmienna2 << endl; 
	zamiana(zmienna1, zmienna2);
	cout << "\nZmienna1: " << zmienna1 << "\nZmienna2: " << zmienna2;


	cout << "\n\n==========\n\n";


	cout << silnia(5);


	cout << "\n\n==========\n\n";


	int zmiennaz1 = 5;
	int zmiennaz2 = 3;

	zad1(zmiennaz1, zmiennaz2);

	cout << zmiennaz1 << "\n" << zmiennaz2;


	cout << "\n\n==========\n\n";





	return 0;
=======
﻿#include <iostream>

using namespace std;

int globalna = 0;

void zwieksz() {
	
	int globalna = 0;
	globalna++;
	cout << "Wartosc w srodku funkcji: " << globalna << endl;

}

void zwiekszGlobalnie() {

	globalna++;
	cout << "Wartosc globalna w srodku funkcji: " << globalna << endl;

}

void zamiana(int& a, int& b) {

	int tmp = a;
	a = b;
	b = a;

}

unsigned long long  silnia(int a) {

	if (a == 0) {

		return 1;

	}
	else {
		
		return silnia(a - 1) * a;
		
	}

}

void zad1(int& a, int& b) {

	a = a * a;
	b = b * b * b;

}

int main() {

	cout << globalna << endl;

	zwieksz();

	cout <<  globalna << endl;

	zwiekszGlobalnie();

	cout << globalna << endl;


	cout << "\n==========\n";


	int zmienna1 = 10, zmienna2 = 20;
	cout << "\nZmienna1: " << zmienna1 << "\nZmienna2: " << zmienna2 << endl; 
	zamiana(zmienna1, zmienna2);
	cout << "\nZmienna1: " << zmienna1 << "\nZmienna2: " << zmienna2;


	cout << "\n\n==========\n\n";


	cout << silnia(5);


	cout << "\n\n==========\n\n";


	int zmiennaz1 = 5;
	int zmiennaz2 = 3;

	zad1(zmiennaz1, zmiennaz2);

	cout << zmiennaz1 << "\n" << zmiennaz2;


	cout << "\n\n==========\n\n";





	return 0;
>>>>>>> 3c811f799e10910f5caaadecd103774e6d0ba59f
}