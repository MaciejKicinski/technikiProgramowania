//
// Created by Maciej Kicinski on 27/12/2020.
//
#include <iostream>

using std::cin;
using std::cout;

class Task2 {
public:
    Task2() {
        cout << "task2 created" << endl;
    }
    template<typename T>
    T minimum_z_tablicy(T *tab , T *end) { // (tab[0],tab[declared size of array]
        T min = *tab; // min = value from tab[0]
        ++tab; //tab[1]
        while (tab < end) { //iteration through array, tab [1]<tab[declared size of array], last step for example tab[1]<tab[2]
            if (*tab < min) // value from tab [1] < min
                min = *tab; // new value for min = tab [1]
            ++tab; //tab[2]
        }
        return min; // return minimal value
    }
};




