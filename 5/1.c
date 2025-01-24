#include <stdio.h>

int main() {
    double F[5][6];
    double max = F[0][0];

    // Ввод матрицы и поиск максимального элемента
    printf("Введите элементы матрицы F(5,6):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%lf", &F[i][j]);
            if (F[i][j] > max) {
                max = F[i][j];
            }
        }
    }

    // Преобразование матрицы
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            F[i][j] /= max;
        }
    }

    // Вывод преобразованной матрицы
    printf("Преобразованная матрица:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%.2f ", F[i][j]);
        }
        printf("\n");
    }

    return 0;
}
