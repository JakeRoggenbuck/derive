#include <math.h>
#include <stdio.h>
#define SIZE 1000
#define H 0.001

void derive(double (*func)(double)) {
    printf("x,y,y'\n");
    // Calculate different values for the derivative
    // Going from 0.001, 0.002, 0.003 ... 0.001 * 1000
    for (int i = -SIZE; i < SIZE; i++) {
        // input x
        double x = i * H;
        // ( f(x + H) - f(x) ) / H
        double k = (func((double)x + H) - func(x)) / H;
        // f(x)
        double y = func(x);
        printf("%f,%f,%f\n", x, y, k);
    }
}

double function(double x) {
    // f(x) = x^3 * 4 + 2
    return (pow(x, 3) * 4) + 2;
}

int main() {
    derive(function);
    return 0;
}
