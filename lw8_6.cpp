#include <iostream>

using namespace std;

void increment(int* num)
{
    (*num)++; // Увеличиваем значение, на которое указывает указатель на 1
}

int main()
{
    setlocale(LC_ALL , "ru");
    int n = 1;
    int* num = &n;

    cout << "До приращения: " << n << endl;
    increment(num);
    cout << "После приращения: " << n << endl;

    return 0;
}
