#include <stdio.h>
#include <ctype.h>

// 2.1. Подсчет количества букв и цифр
void countLettersAndDigits(const char* str) {
    int letters = 0, digits = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letters++;
        } else if (isdigit(str[i])) {
            digits++;
        }
    }
    printf("В строке %d букв и %d цифр.\n", letters, digits);
}

// 2.2. Разделение строки на буквы и цифры
void splitString(const char* str, char* letters, char* digits) {
    int l = 0, d = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letters[l++] = str[i];
        } else if (isdigit(str[i])) {
            digits[d++] = str[i];
        }
    }
    letters[l] = '\0';
    digits[d] = '\0';
}

int main() {
    char str[100];
    printf("Введите строку: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; // Удаление символа новой строки

    // 2.1
    countLettersAndDigits(str);

    // 2.2
    char letters[100], digits[100];
    splitString(str, letters, digits);
    printf("Буквы: %s\n", letters);
    printf("Цифры: %s\n", digits);

    // Создание новой строки: сначала цифры, затем буквы
    char newStr[200];
    strcpy(newStr, digits);
    strcat(newStr, letters);
    printf("Новая строка: %s\n", newStr);

    return 0;
}
