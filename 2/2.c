#include <stdio.h>

int main() {
    int number;
    printf("Введите число от 1 до 999: ");
    scanf("%d", &number);

    if (number < 1 || number > 999) {
        printf("Ошибка: число должно быть в диапазоне от 1 до 999.\n");
        return 1;
    }

    int last_digit = number % 10; // Последняя цифра числа
    int last_two_digits = number % 100; // Последние две цифры числа

    // Определяем правильную форму слова "рубль"
    switch (last_digit) {
        case 1:
            if (last_two_digits != 11) {
                printf("%d рубль\n", number);
            } else {
                printf("%d рублей\n", number);
            }
            break;
        case 2:
        case 3:
        case 4:
            if (last_two_digits < 12 || last_two_digits > 14) {
                printf("%d рубля\n", number);
            } else {
                printf("%d рублей\n", number);
            }
            break;
        default:
            printf("%d рублей\n", number);
            break;
    }

    return 0;
}
