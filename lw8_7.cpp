#include <iostream>

using namespace std;

void swap(int* num1Ptr, int* num2Ptr)
{
    int temp = *num1Ptr; // ��������� �������� ������� ����� �� ��������� ����������
    *num1Ptr = *num2Ptr; // �������� �������� ������� ����� � ������
    *num2Ptr = temp; // �������� ����������� �������� ������� ����� �� ������
}

int main()
{
    setlocale(LC_ALL , "ru");
    int num1 = 4;
    int num2 = 8;

    int* num1Ptr = &num1;
    int* num2Ptr = &num2;

    cout << "�� ������������: num1 = " << num1 << ", num2 = " << num2 << endl;
    swap(num1Ptr, num2Ptr);
    cout << "����� ������������: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
