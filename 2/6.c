#include <stdio.h>

int main() {
    int n;
    printf("Введите целое неотрицательное число n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Ошибка: число должно быть неотрицательным.\n");
        return 1;
    }

    int count = 0;

    // Подсчет количества цифр
    while (n > 0) {
        n /= 10;
        count++;
    }

    printf("Количество цифр в числе: %d\n", count);

    return 0;
}
