#include <iostream>
#include <iomanip>
#include "Task.h"

using namespace std;

int main() {
    Task myObj;
    cout << "wynik int: " << myObj.max(13, 2) << endl;
    cout << "wynik z float: " << myObj.max(122.41f, 1222.123f) << endl;
    cout << "wynik string: " << myObj.max("acccccaiii", "bbb") << endl;
    cout << "wynik silinia rekurencyjknie: " << myObj.silnia(5) << endl;
    cout << "wynik silinia iteracyjnie: " << myObj.silnia1(5) << endl;
    cout << "wynik touppercase: " << myObj.upstr("abcd") << endl;

    return 0;
}