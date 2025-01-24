#include <stdio.h>

int main() {
    int A[6][6];
    int count = 0;

    // Ввод матрицы
    printf("Введите элементы матрицы A(6,6):\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &A[i][j]);
            if (A[i][j] % 2 == 0 && A[i][j] > -5 && A[i][j] < 5) {
                count++;
            }
        }
    }

    printf("Количество четных элементов, удовлетворяющих условию: %d\n", count);

    return 0;
}
