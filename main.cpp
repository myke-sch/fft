#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

float sine(float num) {
    return sin(num)*(numbers::pi/180);
}

int main() {
    for (double i = 0; i < 10; i+=0.01) {
        //cout << i << "\n";
        cout << sine(2*numbers::pi*10*i) << "\n";
    }
    return 0;
}
