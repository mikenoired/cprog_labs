#include <stdio.h>

int main() {
    double T[5][7];
    int positive = 0, negative = 0;

    // Ввод матрицы
    printf("Введите элементы матрицы T(5,7):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++) {
            scanf("%lf", &T[i][j]);
            if (T[i][j] > 0) {
                positive++;
            } else if (T[i][j] < 0) {
                negative++;
            }
        }
    }

    if (positive > negative) {
        printf("Положительных элементов больше.\n");
    } else if (positive < negative) {
        printf("Отрицательных элементов больше.\n");
    } else {
        printf("Количество положительных и отрицательных элементов одинаково.\n");
    }

    return 0;
}
