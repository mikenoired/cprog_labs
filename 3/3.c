#include <stdio.h>

int sum_of_digits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;
    printf("Введите количество элементов массива: ");
    scanf("%d", &n);

    int A[n];
    printf("Введите элементы массива:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Элементы, сумма цифр которых кратна 2:\n");
    for (int i = 0; i < n; i++) {
        if (sum_of_digits(A[i]) % 2 == 0) {
            printf("%d ", A[i]);
        }
    }
    printf("\n");

    return 0;
}
