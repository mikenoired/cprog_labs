#include <stdio.h>

int main() {
    int n;
    printf("Введите натуральное число n: ");
    scanf("%d", &n);

    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        double term = (i % 2 == 0 ? -1 : 1) / (i * (i + 1.0));
        sum += term;
    }

    printf("Сумма ряда: %.6f\n", sum);

    return 0;
}
