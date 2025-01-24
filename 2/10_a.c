#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int n;
    printf("Введите вещественное число x и натуральное число n: ");
    scanf("%lf %d", &x, &n);

    if (n < 1) {
        printf("Ошибка: n должно быть натуральным числом.\n");
        return 1;
    }

    double sum = 0.0;
    double term = sin(x);

    for (int i = 1; i <= n; i++) {
        sum += term;
        term *= sin(x); // Возведение в степень
    }

    printf("Сумма: %.6f\n", sum);

    return 0;
}
