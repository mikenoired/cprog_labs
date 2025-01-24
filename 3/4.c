#include <stdio.h>

int main() {
    int n;
    printf("Введите количество элементов массива: ");
    scanf("%d", &n);

    double A[n];
    printf("Введите элементы массива:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &A[i]);
    }

    double max = A[0], min = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > max) max = A[i];
        if (A[i] < min) min = A[i];
    }

    printf("Максимальный элемент: %.2f\n", max);
    printf("Минимальный элемент: %.2f\n", min);

    return 0;
}
