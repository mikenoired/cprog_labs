#include <stdio.h>
#include <math.h>

int main() {
    double epsilon = 1e-5; // Точность
    double sum = 0.0;
    int k = 1;
    double term;

    while (1) {
        term = (k % 2 == 0 ? -1.0 : 1.0) / k;
        if (fabs(term) < epsilon) {
            break;
        }
        sum += term;
        k++;
    }

    printf("Приближенное значение суммы: %.6f\n", sum);

    return 0;
}
