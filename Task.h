//
// Created by Maciej Kicinski on 23/11/2020.
//
#include <iostream>

using namespace std;

class Task {
public:
    Task() {
        cout << "task created" << endl;
    }

    int max(int a, int b) {
        return (a < b) ? b : a;
    };

    float max(float a, float b) {
        float result;
        result = (a > b) ? a : b;
        return result;
    };

    int max(string a, string b) {
        int x = a.length();
        int y = b.length();
        return (x < y) ? y : x;
    };

    long silnia(int n) {
        if (n < 2)
            return 1;
        return n * silnia(n - 1);
    }

    long silnia1(int n) {
        long silnia = 1;
        for (int i = n; i > 1; i--)
            silnia *= i;
        return silnia;
    }

    string upstr(string st) {
        string result;
        for (int i = 0; i < st.length(); ++i)
            result = putchar(toupper(st[i]));
        return result;
    }



};


