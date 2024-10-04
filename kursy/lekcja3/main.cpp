#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){

    int a = 5;
    int b = 7;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << a%b << endl;
    cout << a/b << endl;
    cout << a+b << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    cout << a/b << endl;

    cout << a << " + " << b << " = " << a+b << endl;
    cout << a << " - " << b << " = " << a-b << endl;
    cout << a << " * " << b << " = " << a*b << endl;
    cout << a << " / " << b << " = " << a/b << endl;
    cout << a << " % " << b << " = " << a%b << endl;
    cout << a << " ^ " << b << " = " << pow(a,b) << endl;
    cout << a << " V " << sqrt(a) << endl;
    cout << b << " V " << sqrt(b) << endl;

    return 0;
}
