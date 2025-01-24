#include <stdio.h>

int main() {
    int number;
    printf("Введите трехзначное число: ");
    scanf("%d", &number);

    int digit1 = number / 100;
    int digit2 = (number / 10) % 10;
    int digit3 = number % 10;

    if (digit1 == digit2 || digit1 == digit3 || digit2 == digit3) {
        printf("Среди цифр числа есть одинаковые.\n");
    } else {
        printf("Все цифры числа различны.\n");
    }

    return 0;
}
