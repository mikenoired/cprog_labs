#include <stdio.h>
#include <math.h>

int main() {
    double x, y, r;
    printf("Введите координаты точки (x, y): ");
    scanf("%lf %lf", &x, &y);
    printf("Введите радиус r (r > 1): ");
    scanf("%lf", &r);

    // Проверка, что r > 1
    if (r <= 1) {
        printf("Ошибка: радиус должен быть больше 1.\n");
        return 1;
    }

    // Вычисляем расстояние от точки до центра (0, 0)
    double distance = sqrt(x * x + y * y);

    // Проверяем, принадлежит ли точка кругу
    if (distance <= r) {
        printf("Точка (%.2f, %.2f) принадлежит кругу с радиусом %.2f.\n", x, y, r);
    } else {
        printf("Точка (%.2f, %.2f) не принадлежит кругу с радиусом %.2f.\n", x, y, r);
    }

    return 0;
}
