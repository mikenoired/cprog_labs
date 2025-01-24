#include <stdio.h>

int main() {
    int n;
    printf("Введите натуральное число n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Ошибка: число должно быть натуральным.\n");
        return 1;
    }

    int last_digit = n % 10; // Последняя цифра числа
    int first_digit = n;

    // Находим первую цифру числа
    while (first_digit >= 10) {
        first_digit /= 10;
    }

    // Проверяем, совпадают ли первая и последняя цифры
    if (first_digit == last_digit) {
        printf("Первая и последняя цифры числа %d совпадают.\n", n);
    } else {
        printf("Первая и последняя цифры числа %d не совпадают.\n", n);
    }

    return 0;
}
