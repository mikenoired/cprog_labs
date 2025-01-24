#include <stdio.h>
#include <string.h>

// 1.1. Заменить все символы '+' на '-'
void replacePlusWithMinus(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '+') {
            str[i] = '-';
        }
    }
}

// 1.2. Удалить все символы '-' и удвоить все символы '&'
void removeMinusAndDoubleAmpersand(char* str) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '&') {
            str[j++] = str[i];
            str[j++] = str[i];
        } else if (str[i] != '-') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

// 1.3. Удалить все символы, не являющиеся цифрами
void removeNonDigits(char* str) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

// 1.4. Заменить все прописные латинские буквы строчными
void toLowercase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
}

// 1.5. Заменить каждую группу рядом стоящих символов '+' на один '+'
void compressPlus(char* str) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '+' && str[i + 1] == '+') {
            continue;
        }
        str[j++] = str[i];
    }
    str[j] = '\0';
}

// 1.6. Удалить все комбинации символов "the"
void removeThe(char* str) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 't' && str[i + 1] == 'h' && str[i + 2] == 'e') {
            i += 2;
            continue;
        }
        str[j++] = str[i];
    }
    str[j] = '\0';
}

// 1.7. Удалить группы символов между фигурными скобками
void removeBetweenBraces(char* str) {
    int j = 0;
    int inBraces = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '{') {
            inBraces = 1;
            continue;
        }
        if (str[i] == '}') {
            inBraces = 0;
            continue;
        }
        if (!inBraces) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    printf("Введите строку: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; // Удаление символа новой строки

    // 1.1
    replacePlusWithMinus(str);
    printf("1.1: %s\n", str);

    // 1.2
    removeMinusAndDoubleAmpersand(str);
    printf("1.2: %s\n", str);

    // 1.3
    removeNonDigits(str);
    printf("1.3: %s\n", str);

    // 1.4
    toLowercase(str);
    printf("1.4: %s\n", str);

    // 1.5
    compressPlus(str);
    printf("1.5: %s\n", str);

    // 1.6
    removeThe(str);
    printf("1.6: %s\n", str);

    // 1.7
    removeBetweenBraces(str);
    printf("1.7: %s\n", str);

    return 0;
}
