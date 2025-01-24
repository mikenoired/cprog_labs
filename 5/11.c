#include <stdio.h>

int main() {
    int B[10][5];

    // Ввод матрицы
    printf("Введите элементы матрицы B(10,5):\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Вывод номеров нечетных элементов
    printf("Номера нечетных элементов:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 5; j++) {
            if (B[i][j] % 2 != 0) {
                printf("(%d, %d)\n", i + 1, j + 1);
            }
        }
    }

    return 0;
}
