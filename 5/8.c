#include <stdio.h>

int main() {
    int S[5][10];
    int count = 0;

    // Ввод матрицы
    printf("Введите элементы матрицы S(5,10):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &S[i][j]);
            if ((j == 4 || j == 5) && S[i][j] % 2 == 0) {
                count++;
            }
        }
    }

    printf("Количество четных элементов в пятом и шестом столбцах: %d\n", count);

    return 0;
}
