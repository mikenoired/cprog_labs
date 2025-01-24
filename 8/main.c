#include <stdio.h>

#define N 3 // Размерность матрицы

// Функция для ввода элементов матрицы
void inputMatrix(int matrix[N][N], const char* name) {
    printf("Введите элементы матрицы %s (%dx%d):\n", name, N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Функция для вывода элементов матрицы
void printMatrix(int matrix[N][N], const char* name) {
    printf("Матрица %s:\n", name);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Функция для сложения двух матриц
void addMatrices(int A[N][N], int B[N][N], int result[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Функция для вычитания двух матриц
void subtractMatrices(int A[N][N], int B[N][N], int result[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

// Функция для умножения двух матриц
void multiplyMatrices(int A[N][N], int B[N][N], int result[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            result[i][j] = 0;
            for (int k = 0; k < N; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Функция для умножения матрицы на целое число
void multiplyMatrixByScalar(int matrix[N][N], int scalar, int result[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            result[i][j] = matrix[i][j] * scalar;
        }
    }
}

int main() {
    int A[N][N], B[N][N], result[N][N];

    // Ввод матриц A и B
    inputMatrix(A, "A");
    inputMatrix(B, "B");

    // Вывод матриц A и B
    printMatrix(A, "A");
    printMatrix(B, "B");

    // Проверка функций
    // 1) 3A
    multiplyMatrixByScalar(A, 3, result);
    printMatrix(result, "3A");

    // 2) 2A - 3B
    int temp1[N][N], temp2[N][N];
    multiplyMatrixByScalar(A, 2, temp1);
    multiplyMatrixByScalar(B, 3, temp2);
    subtractMatrices(temp1, temp2, result);
    printMatrix(result, "2A - 3B");

    // 3) A * B
    multiplyMatrices(A, B, result);
    printMatrix(result, "A * B");

    // 4) 4A + A*B
    multiplyMatrixByScalar(A, 4, temp1);
    multiplyMatrices(A, B, temp2);
    addMatrices(temp1, temp2, result);
    printMatrix(result, "4A + A*B");

    return 0;
}
