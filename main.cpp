#include <iostream>
#include <cmath>
#include <cstdio>
#include <matplot/matplot.h>
#include <set>
#include "fft.h"

using namespace std;

double sine(double num) {
    return sin(num)*(numbers::pi/180);
}

int main() {

    std::vector<double> temp;
    using namespace matplot;
    std::vector<double> x = linspace(0, 2 * pi, 700);
    set<std::vector<double>> Y = {};
    for (double i = 0; i <= 2*numbers::pi; i+=0.01) {
        temp.push_back(sine(i));
    }
    Y.insert(temp);
    //xticks({0, pi, 2*pi});
   // xticklabels({"0", "pi", "2*pi"});
    plot(x,Y);

    show();
    even_index(10, Y);
    return 0;
}
