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

    int count = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] % 5 == 0 && A[i] % 7 != 0) {
            count++;
            sum += A[i];
        }
    }

    printf("Количество элементов: %d\n", count);
    printf("Сумма элементов: %d\n", sum);

    return 0;
}
