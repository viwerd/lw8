#include <iostream>

using namespace std;

void increment(int* num)
{
    (*num)++; // ����������� ��������, �� ������� ��������� ��������� �� 1
}

int main()
{
    setlocale(LC_ALL , "ru");
    int n = 1;
    int* num = &n;

    cout << "�� ����������: " << n << endl;
    increment(num);
    cout << "����� ����������: " << n << endl;

    return 0;
}
