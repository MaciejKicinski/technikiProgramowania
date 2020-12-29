//
// Created by Maciej Kicinski on 27/12/2020.
//
#include <iostream>

using namespace std;

class Task2 {
public:
    Task2() {
        cout << "task created" << endl;
    }

    template<typename T>
    T max(T a, T b) {
        if (){
        T result;
        result = (a > b) ? a : b;
        return result;
        }
    };

};