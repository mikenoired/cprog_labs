#include <stdio.h>

int main() {
    int n;
    printf("Введите количество элементов массива: ");
    scanf("%d", &n);

    int A[n];
    printf("Введите элементы массива:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int min = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] < min) min = A[i];
    }

    for (int i = 0; i < n; i++) {
        A[i] -= min;
    }

    printf("Массив после уменьшения:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
