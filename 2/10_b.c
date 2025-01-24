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

    for (int i = 1; i <= n; i++) {
        sum += sin(pow(x, i)); // sin(x^i)
    }

    printf("Сумма: %.6f\n", sum);

    return 0;
}
