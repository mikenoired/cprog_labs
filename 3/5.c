#include <stdio.h>

int main() {
    int n;
    printf("Введите количество элементов массивов: ");
    scanf("%d", &n);

    int A[n], B[n], C[n];
    printf("Введите элементы массива A:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("Введите элементы массива B:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < n; i++) {
        C[i] = A[i] * B[i];
    }

    printf("Массив C:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
