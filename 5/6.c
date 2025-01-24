#include <stdio.h>

int main() {
    double A[8][8];
    int max_row = 0;

    // Ввод матрицы
    printf("Введите элементы матрицы A(8,8):\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            scanf("%lf", &A[i][j]);
        }
        if (A[i][i] > A[max_row][max_row]) {
            max_row = i;
        }
    }

    // Сортировка строки по убыванию
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (A[max_row][i] < A[max_row][j]) {
                double temp = A[max_row][i];
                A[max_row][i] = A[max_row][j];
                A[max_row][j] = temp;
            }
        }
    }

    // Вывод матрицы
    printf("Матрица после сортировки строки %d:\n", max_row + 1);
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
