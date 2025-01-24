#include <stdio.h>

int main() {
    int city_code, minutes;
    double price_per_minute = 0.0, total_cost = 0.0;

    // Ввод данных
    printf("Введите код города: ");
    scanf("%d", &city_code);
    printf("Введите длительность разговора (в минутах): ");
    scanf("%d", &minutes);

    // Определение цены за минуту в зависимости от кода города
    switch (city_code) {
        case 432: // Владивосток
            price_per_minute = 9.20;
            break;
        case 495: // Москва
            price_per_minute = 4.10;
            break;
        case 861: // Краснодар
            price_per_minute = 2.05;
            break;
        case 844: // Волгоград
            price_per_minute = 2.50;
            break;
        default:
            printf("Ошибка: код города не найден.\n");
            return 1; // Завершение программы с ошибкой
    }

    // Вычисление общей стоимости
    total_cost = price_per_minute * minutes;

    // Вывод результата
    printf("Цена за минуту разговора: %.2f руб.\n", price_per_minute);
    printf("Общая стоимость разговора: %.2f руб.\n", total_cost);

    return 0;
}
