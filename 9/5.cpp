#include <iostream>
#include <string>
using namespace std;

// 5.1
void task5_1() {
    string str;
    cout << "Введите строку: ";
    getline(cin, str);
    cout << "Первый символ: " << str.front() << endl;
    cout << "Последний символ: " << str.back() << endl;
}

// 5.2
void task5_2() {
    string str1, str2;
    cout << "Введите первую строку: ";
    getline(cin, str1);
    cout << "Введите вторую строку: ";
    getline(cin, str2);

    int result = str1.compare(str2);
    if (result == 0) {
        cout << "Строки равны.\n";
    } else if (result < 0) {
        cout << "Первая строка меньше второй.\n";
    } else {
        cout << "Первая строка больше второй.\n";
    }
}

// 5.3
void task5_3() {
    string str = "Hello, World!";
    int choice;
    while (true) {
        cout << "\nТекущая строка: " << str << endl;
        cout << "1. Вставить подстроку\n";
        cout << "2. Удалить подстроку\n";
        cout << "3. Заменить подстроку\n";
        cout << "4. Найти подстроку\n";
        cout << "5. Добавить подстроку\n";
        cout << "0. Выход\n";
        cout << "Выберите действие: ";
        cin >> choice;
        cin.ignore();

        if (choice == 0) break;

        switch (choice) {
            case 1: {
                string substr;
                int pos;
                cout << "Введите подстроку: ";
                getline(cin, substr);
                cout << "Введите позицию: ";
                cin >> pos;
                str.insert(pos, substr);
                break;
            }
            case 2: {
                int pos, len;
                cout << "Введите позицию и длину: ";
                cin >> pos >> len;
                str.erase(pos, len);
                break;
            }
            case 3: {
                int pos, len;
                string substr;
                cout << "Введите позицию и длину: ";
                cin >> pos >> len;
                cin.ignore();
                cout << "Введите подстроку: ";
                getline(cin, substr);
                str.replace(pos, len, substr);
                break;
            }
            case 4: {
                string substr;
                cout << "Введите подстроку: ";
                getline(cin, substr);
                size_t found = str.find(substr);
                if (found != string::npos) {
                    cout << "Подстрока найдена на позиции " << found << endl;
                } else {
                    cout << "Подстрока не найдена.\n";
                }
                break;
            }
            case 5: {
                string substr;
                cout << "Введите подстроку: ";
                getline(cin, substr);
                str.append(substr);
                break;
            }
            default:
                cout << "Неверный выбор.\n";
        }
    }
}

int main() {
    task5_1();
    task5_2();
    task5_3();

    return 0;
}
