#include <stdio.h>

int main() {
    int E[5][5];

    // Ввод матрицы
    printf("Введите элементы матрицы E(5,5):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &E[i][j]);
        }
    }

    // Вывод номеров строк с отрицательными нечетными элементами на главной диагонали
    printf("Номера строк с отрицательными нечетными элементами на главной диагонали:\n");
    for (int i = 0; i < 5; i++) {
        if (E[i][i] < 0 && E[i][i] % 2 != 0) {
            printf("%d\n", i + 1);
        }
    }

    return 0;
}
