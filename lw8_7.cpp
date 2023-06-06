#include <iostream>

using namespace std;

void swap(int* num1Ptr, int* num2Ptr)
{
    int temp = *num1Ptr; // сохраняем значение первого числа во временной переменной
    *num1Ptr = *num2Ptr; // копируем значение второго числа в первое
    *num2Ptr = temp; // копируем сохраненное значение первого числа во второе
}

int main()
{
    setlocale(LC_ALL , "ru");
    int num1 = 4;
    int num2 = 8;

    int* num1Ptr = &num1;
    int* num2Ptr = &num2;

    cout << "До перестановки: num1 = " << num1 << ", num2 = " << num2 << endl;
    swap(num1Ptr, num2Ptr);
    cout << "После перестановки: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
