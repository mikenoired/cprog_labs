#include <stdio.h>

double factorial(int k) {
    double result = 1.0;
    for (int i = 1; i <= k; i++) {
        result *= i;
    }
    return result;
}

int main() {
    double product = 1.0;
    for (int i = 1; i <= 8; i++) {
        double term = 2 + (i % 2 == 0 ? -1 : 1) / factorial(i);
        product *= term;
    }

    printf("Произведение ряда: %.6f\n", product);

    return 0;
}
