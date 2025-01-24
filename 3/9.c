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

    for (int i = 0; i < n - 1; i += 2) {
        int temp = A[i];
        A[i] = A[i + 1];
        A[i + 1] = temp;
    }

    printf("Массив после обмена:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
