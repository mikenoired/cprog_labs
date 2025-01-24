#include <stdio.h>

int main() {
    int n;
    printf("Введите натуральное число n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Ошибка: число должно быть натуральным.\n");
        return 1;
    }

    int sum = 0; // Сумма делителей

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i; // Добавляем делитель к сумме
        }
    }

    if (sum == n) {
        printf("Число %d является совершенным.\n", n);
    } else {
        printf("Число %d не является совершенным.\n", n);
    }

    return 0;
}
