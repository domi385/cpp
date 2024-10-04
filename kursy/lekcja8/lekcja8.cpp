#include <iostream>

using namespace std;

int main()
{
    /*
    while(true){
        int liczba = 0;
        cout << "\nPodaj liczbe ";
        cin >> liczba;
        cout << "\n";

        if(liczba % 2 == 0){
            cout << liczba/2 << endl;
        }
        else{
            cout << liczba*2 << endl; 
        }
    }
    */
   /*
   int a = 282;
   int b = 78;
   int c = 0;

   while( a % b != 0 ){
        c = a % b;
        a = b;
        b = c;
   }
   cout << b << endl;
   */

    int podstawa, wykladnik, wynik = 1;

    cin >> podstawa;
    cin >> wykladnik;

    for (int i = 0; i < wykladnik; i++) {
        wynik = podstawa * wynik;
    }
    cout << wynik << endl;

    system("PAUSE");  
}