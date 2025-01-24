#include <stdio.h>

int main() {
    int n;
    printf("Введите натуральное число n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Ошибка: число должно быть натуральным.\n");
        return 1;
    }

    int previous_digit = n % 10; // Последняя цифра числа
    n /= 10;
    int is_decreasing = 1; // Флаг для проверки убывания

    while (n > 0) {
        int current_digit = n % 10;
        if (current_digit < previous_digit) {
            is_decreasing = 0; // Цифры не упорядочены по убыванию
            break;
        }
        previous_digit = current_digit;
        n /= 10;
    }

    if (is_decreasing) {
        printf("Цифры числа упорядочены по убыванию.\n");
    } else {
        printf("Цифры числа не упорядочены по убыванию.\n");
    }

    return 0;
}
