#include <iostream>
#include "Task.h"
#include "Task2.h"

using namespace std;

int main() {
    Task myObj;
    Task2 myObj2;
    cout << "wynik int: " << myObj.max(13, 2) << endl;
    cout << "wynik z float: " << myObj.max(122.41f, 1222.123f) << endl;
    cout << "wynik string: " << myObj.max("acccccaiii", "bbb") << endl;
    cout << "wynik silinia rekurencyjknie: " << myObj.silnia(5) << endl;
    cout << "wynik silinia iteracyjnie: " << myObj.silnia1(5) << endl;
    cout << "wynik touppercase: " << myObj.upstr("abcd") << endl;

    float tab[5];
    for (int i = 0; i < 5; ++i) {
        cout << "tab[" << i << "] = ";
        cin >> tab[i];
    }
    cout << "minimal value from array is: " << myObj2.minimum_z_tablicy(tab, tab + 5) << '\n';

    return 0;
}