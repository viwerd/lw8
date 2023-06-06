#include <iostream>

using namespace std;

int count_сhars(char* strPtr)
{
    int count = 0;
    while (*strPtr != '\0') // Пока не достигнут конец строки
    {
        count++; // Увеличиваем счетчик символов
        strPtr++; // Переходим к следующему символу
    }
    return count;
}

int main()
{
    setlocale(LC_ALL , "ru");
    char str[100];
    cout << "Введите строку: ";
    cin.getline(str, 100);

    int char_сount = count_сhars(str);
    cout << "Строка: " << str << " " << char_сount << " сиволов." << endl;

    return 0;
}
