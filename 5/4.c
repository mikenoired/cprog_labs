#include <stdio.h>

int main() {
    int Y[8][6];
    int count = 0;

    // Ввод матрицы
    printf("Введите элементы матрицы Y(8,6):\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &Y[i][j]);
        }
    }

    // Поиск столбцов с нулевыми элементами
    for (int j = 0; j < 6; j++) {
        for (int i = 0; i < 8; i++) {
            if (Y[i][j] == 0) {
                count++;
                break;
            }
        }
    }

    printf("Количество столбцов с нулевыми элементами: %d\n", count);

    return 0;
}
