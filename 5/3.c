#include <stdio.h>

int main() {
    double B[5][3];
    int count = 0;

    // Ввод матрицы
    printf("Введите элементы матрицы B(5,3):\n");
    for (int i = 0; i < 5; i++) {
        int valid = 1;
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &B[i][j]);
            if (B[i][j] <= 0 || B[i][j] >= 3.5) {
                valid = 0;
            }
        }
        if (valid) {
            count++;
        }
    }

    printf("Число строк, удовлетворяющих условию: %d\n", count);

    return 0;
}
