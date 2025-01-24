#include <stdio.h>

int main() {
    int n;
    printf("Введите количество элементов последовательности: ");
    scanf("%d", &n);

    int sequence[n];
    printf("Введите элементы последовательности:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &sequence[i]);
    }

    int found_zero = 0; // Флаг, указывающий, что найден первый нулевой элемент
    int sum = 0;
    int product = 1;

    for (int i = 0; i < n; i++) {
        if (sequence[i] == 0 && !found_zero) {
            found_zero = 1; // Найден первый нулевой элемент
            continue; // Пропускаем сам нулевой элемент
        }

        if (found_zero && sequence[i] > 0) {
            sum += sequence[i]; // Суммируем положительные элементы
            product *= sequence[i]; // Умножаем положительные элементы
        }
    }

    if (found_zero) {
        printf("Сумма положительных элементов после первого нуля: %d\n", sum);
        printf("Произведение положительных элементов после первого нуля: %d\n", product);
    } else {
        printf("В последовательности нет нулевых элементов.\n");
    }

    return 0;
}
