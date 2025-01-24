#include <stdio.h>

int main() {
    double x, y;
    printf("Введите значение x: ");
    scanf("%lf", &x);

    if (x <= 0) {
        y = 0;
    } else if (x > 0 && x <= 1) {
        y = x;
    } else {
        y = x * x;
    }

    printf("Значение функции y = %.2f\n", y);

    return 0;
}
