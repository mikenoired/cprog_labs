#include <stdio.h>

int main() {
    double M[6][6];
    double sum_main = 0, sum_secondary = 0;

    // Ввод матрицы
    printf("Введите элементы матрицы M(6,6):\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%lf", &M[i][j]);
        }
        sum_main += M[i][i];
        sum_secondary += M[i][5 - i];
    }

    double min_sum = (sum_main < sum_secondary) ? sum_main : sum_secondary;

    printf("Минимум среди сумм диагоналей: %.2f\n", min_sum);

    return 0;
}
