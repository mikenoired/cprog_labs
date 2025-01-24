#include <stdio.h>

int main() {
    int n;
    printf("Введите целое неотрицательное число n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Ошибка: число должно быть неотрицательным.\n");
        return 1;
    }

    int max_digit = 0; // Наибольшая цифра
    int min_digit = 9; // Наименьшая цифра

    // Поиск наибольшей и наименьшей цифры
    while (n > 0) {
        int current_digit = n % 10;
        if (current_digit > max_digit) {
            max_digit = current_digit;
        }
        if (current_digit < min_digit) {
            min_digit = current_digit;
        }
        n /= 10;
    }

    printf("Наибольшая цифра: %d\n", max_digit);
    printf("Наименьшая цифра: %d\n", min_digit);

    return 0;
}
