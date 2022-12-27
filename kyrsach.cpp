#include "dead.h"

int main()
{
    setlocale(0, "");
    int c;
    while (true) {
        cout << "Введите номер практической работы, которую вы хотите запустить:\n" <<
            "1. Типы данных и их внутреннее представление в памяти.\n" <<
            "2. Одномерные статические массивы.\n" <<
            "3. Двумерные статические массивы. Указатели.\n" <<
            "4. Текстовые строки как массивы символов.\n" <<
            "5. Выйти из программы\n" <<
            "Ваш выбор: ";
        cin >> c;
        switch (c) {
        case 1:
            system("cls");
            Lab1();
            break;
        case 2:
            system("cls");
            Lab2();
            break;
        case 3:
            system("cls");
            Lab3();
            break;
        case 4:
            system("cls");
            Lab4();
            break;
        case 5:
            return 0;
        }
    }
}
