#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 4.1
void task4_1() {
    char s[] = "1234567890";
    int len = strlen(s);
    char* copy = (char*)malloc(len + 1);
    strcpy(copy, s);
    printf("Копия строки: %s\n", copy);

    char replacement[4];
    printf("Введите строку для замены (3 символа): ");
    scanf("%s", replacement);
    strncpy(copy + 1, replacement, 3);
    printf("Преобразованная строка: %s\n", copy);

    free(copy);
}

// 4.2
void task4_2() {
    char* strings[4];
    for (int i = 0; i < 4; i++) {
        strings[i] = (char*)malloc(11);
        printf("Введите строку %d: ", i + 1);
        scanf("%s", strings[i]);
    }

    int totalLen = 0;
    for (int i = 0; i < 4; i++) {
        totalLen += strlen(strings[i]);
    }

    char* result = (char*)malloc(totalLen + 1);
    result[0] = '\0';
    for (int i = 0; i < 4; i++) {
        strcat(result, strings[i]);
        free(strings[i]);
    }

    printf("Объединенная строка: %s\n", result);
    free(result);
}

// 4.3
void task4_3() {
    char list[] = "1. Иванов И.И.  2. Петров П.П.   3. Сидоров С.С. 4. Александров А.А.";
    char surname[100];

    while (1) {
        printf("Введите фамилию (или пустую строку для выхода): ");
        fgets(surname, 100, stdin);
        surname[strcspn(surname, "\n")] = '\0';

        if (strlen(surname) == 0) {
            break;
        }

        if (strstr(list, surname) != NULL) {
            printf("Фамилия '%s' найдена в списке.\n", surname);
        } else {
            printf("Фамилия '%s' не найдена в списке.\n", surname);
        }
    }
}

int main() {
    task4_1();
    task4_2();
    task4_3();

    return 0;
}
