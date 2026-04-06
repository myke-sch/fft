//
// Created by mikas on 01.04.2026.
//

#include "fft.h"
#include <cmath>
#include <iostream>
#include <set>
#include <vector>


double sine(double num) {
    return sin(num)*(std::numbers::pi/180);
}

float even_index(int N, std::set<std::vector<double>> data) {
    float value[N/2] = 0;
    for (int i = 0; i < N/2 - 1; i+=2) {
       value[i] = data.get(i) * exp(-((2*std::numbers::pi)/(N/2))*i*i-1);
    }
    return 0;
}
