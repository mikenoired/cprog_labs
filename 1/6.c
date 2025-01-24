#include <stdio.h>

int main() {
    int N;
    printf("Введите натуральное число N: ");
    scanf("%d", &N);

    if (N >= 10 && N <= 99) {
        // Если число двузначное, находим сумму цифр
        int digit1 = N / 10;
        int digit2 = N % 10;
        int sum = digit1 + digit2;
        printf("Сумма цифр числа %d: %d\n", N, sum);
    } else if (N >= 100 && N <= 999) {
        // Если число трехзначное, находим произведение ненулевых цифр
        int digit1 = N / 100;
        int digit2 = (N / 10) % 10;
        int digit3 = N % 10;
        int product = 1;
        if (digit1 != 0) product *= digit1;
        if (digit2 != 0) product *= digit2;
        if (digit3 != 0) product *= digit3;
        printf("Произведение ненулевых цифр числа %d: %d\n", N, product);
    } else {
        printf("Число не является двузначным или трехзначным.\n");
    }

    return 0;
}
