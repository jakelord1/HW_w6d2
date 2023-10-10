#pragma once
#include <iostream>
#include <string>
#include "Exception.h"
using namespace std;

class ArrayValueCalculator {
public:
    int doCalc(const string arr[4][4]) {
        int result = 0;

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                try {
                    int value = stoi(arr[i][j]);
                    result += value;
                }
                catch (const invalid_argument&) {
                    throw ArrayDataException("Data Error", i, j);
                }
            }
        }
        return result;
    }
};