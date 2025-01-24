#include <stdio.h>
#include <math.h>

int main() {
    double x, y, r;
    printf("Введите координаты точки (x, y): ");
    scanf("%lf %lf", &x, &y);
    printf("Введите радиус r (r > 1): ");
    scanf("%lf", &r);

    if (r <= 1) {
        printf("Ошибка: радиус должен быть больше 1.\n");
        return 1;
    }

    double distance = sqrt(x * x + y * y);

    if (distance >= r && distance <= 2 * r) {
        printf("Точка (%.2f, %.2f) принадлежит кольцу с внутренним радиусом %.2f и внешним радиусом %.2f.\n", x, y, r, 2 * r);
    } else {
        printf("Точка (%.2f, %.2f) не принадлежит кольцу.\n", x, y);
    }

    return 0;
}
