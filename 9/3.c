#include <stdio.h>

// 3.1. Проверка наличия символа в строке
int containsChar(const char* str, char q) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == q) {
            return 1;
        }
    }
    return 0;
}

// 3.2. Проверка наличия комбинации "op" или "po"
int containsOpOrPo(const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] == 'o' && str[i + 1] == 'p') || (str[i] == 'p' && str[i + 1] == 'o')) {
            return 1;
        }
    }
    return 0;
}

// 3.3. Подсчет количества слов в строке
int countWords(const char* str) {
    int count = 0;
    int inWord = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && !inWord) {
            inWord = 1;
            count++;
        } else if (str[i] == ' ') {
            inWord = 0;
        }
    }
    return count;
}

int main() {
    char str[100];
    printf("Введите строку: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; // Удаление символа новой строки

    // 3.1
    char q;
    printf("Введите символ для поиска: ");
    scanf(" %c", &q);
    printf("Символ '%c' %sнайден в строке.\n", q, containsChar(str, q) ? "" : "не ");

    // 3.2
    printf("Комбинация 'op' или 'po' %sнайдена в строке.\n", containsOpOrPo(str) ? "" : "не ");

    // 3.3
    printf("Количество слов в строке: %d\n", countWords(str));

    return 0;
}
