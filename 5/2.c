#include <stdio.h>

int main() {
    int N, M;
    printf("Введите размеры матрицы (N M): ");
    scanf("%d %d", &N, &M);

    double R[N][M];
    double sum[N];

    // Ввод матрицы
    printf("Введите элементы матрицы R(%d,%d):\n", N, M);
    for (int i = 0; i < N; i++) {
        sum[i] = 0;
        for (int j = 0; j < M; j++) {
            scanf("%lf", &R[i][j]);
            sum[i] += R[i][j];
        }
    }

    // Вывод суммы элементов каждой строки
    printf("Сумма элементов каждой строки:\n");
    for (int i = 0; i < N; i++) {
        printf("%.2f\n", sum[i]);
    }

    return 0;
}
