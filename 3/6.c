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

    int max = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > max) max = A[i];
    }

    int C[n];
    for (int i = 0; i < n; i++) {
        C[i] = A[i] * max;
    }

    printf("Массив C:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
