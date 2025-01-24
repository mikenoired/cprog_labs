#include <stdio.h>
#include <math.h>

int main() {
    int m, n;
    printf("Введите целые числа m и n (m < n): ");
    scanf("%d %d", &m, &n);

    if (m >= n) {
        printf("Ошибка: m должно быть меньше n.\n");
        return 1;
    }

    printf("x\t y = sin(x)\n");
    printf("----------------\n");

    for (int i = m; i <= n; i++) {
        double x = 0.1 * i;
        double y = sin(x);
        printf("%.2f\t %.4f\n", x, y);
    }

    return 0;
}
