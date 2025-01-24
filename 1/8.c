#include <stdio.h>
#include <limits.h> // Для использования INT_MAX и INT_MIN

int main() {
    int n;
    printf("Введите количество элементов последовательности: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Ошибка: количество элементов должно быть больше 0.\n");
        return 1;
    }

    int sequence[n];
    printf("Введите элементы последовательности:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &sequence[i]);
    }

    int max = INT_MIN; // Начальное значение для поиска максимума
    int min = INT_MAX; // Начальное значение для поиска минимума

    for (int i = 0; i < n; i++) {
        if (sequence[i] > max) {
            max = sequence[i]; // Обновляем максимум
        }
        if (sequence[i] < min) {
            min = sequence[i]; // Обновляем минимум
        }
    }

    printf("Наибольшее число: %d\n", max);
    printf("Наименьшее число: %d\n", min);

    return 0;
}
