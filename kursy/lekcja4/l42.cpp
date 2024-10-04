#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    int wybor;

    cout << "Wybierz rase: " << endl;
    cout << "1. Czlowiek " << endl;
    cout << "2. Ork" << endl;

    cin >> wybor;

    if (wybor == 1)
    {
        cout << "Wybierz klase czlowieka: " << endl;
        cout << "1. Lucznik " << endl;
        cout << "2. Palladyn" << endl;
        cin >> wybor;

        if (wybor == 1)
        {
            cout << "Wybrales czlowieka lucznika: " << endl;
        }

        else if (wybor == 2)
        {
            cout << "Wybrales czlowieka palladyna: " << endl;
        }

        else
        {
            cout << "Dokonano zlego wyboru dla rasy czlowiek" << endl;
        }
    }

    else if (wybor == 2)
    {
        cout << "Wybierz klase orka: " << endl;
        cout << "1. Wojownik" << endl;
        cout << "2. Mag" << endl;
        cin >> wybor;

        if (wybor == 1)
        {
            cout << "Wybrales orka wojownika" << endl;
        }
        else if (wybor == 2)
        {
            cout << "Wybrales orka maga" << endl;
        }
        else
        {
            cout << "Dokonano zlego wyboru" << endl;
        }
    }

    else
    {
        cout << "Dokonano zlego wyboru dla rasy ork" << endl;
    }

    return 0;
}