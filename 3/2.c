#include <stdio.h>

int main() {
    int n;
    printf("Введите количество элементов массива: ");
    scanf("%d", &n);

    int B[n];
    printf("Введите элементы массива:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }

    int sum_positive = 0;
    long long product_negative = 1;

    for (int i = 0; i < n; i++) {
        if (B[i] > 0) {
            sum_positive += B[i];
        } else if (B[i] < 0) {
            product_negative *= B[i];
        }
    }

    printf("Сумма положительных элементов: %d\n", sum_positive);
    printf("Произведение отрицательных элементов: %lld\n", product_negative);

    return 0;
}
