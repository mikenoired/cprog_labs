#include <stdio.h>

double factorial(int k) {
    double result = 1.0;
    for (int i = 1; i <= k; i++) {
        result *= i;
    }
    return result;
}

int main() {
    double sum = 0.0;
    for (int i = 1; i <= 10; i++) {
        double term = (i % 2 == 0 ? -1 : 1) / factorial(i);
        sum += term;
    }

    printf("Сумма ряда: %.6f\n", sum);

    return 0;
}
