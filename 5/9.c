#include <stdio.h>

int main() {
    double P[7][7];
    int min_col = 0;

    // Ввод матрицы
    printf("Введите элементы матрицы P(7,7):\n");
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            scanf("%lf", &P[i][j]);
        }
        if (P[i][i] < P[min_col][min_col]) {
            min_col = i;
        }
    }

    // Сортировка столбца по убыванию
    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 7; j++) {
            if (P[i][min_col] < P[j][min_col]) {
                double temp = P[i][min_col];
                P[i][min_col] = P[j][min_col];
                P[j][min_col] = temp;
            }
        }
    }

    // Вывод матрицы
    printf("Матрица после сортировки столбца %d:\n", min_col + 1);
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            printf("%.2f ", P[i][j]);
        }
        printf("\n");
    }

    return 0;
}
