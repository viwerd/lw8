#include <iostream>

using namespace std;

int count_�hars(char* strPtr)
{
    int count = 0;
    while (*strPtr != '\0') // ���� �� ��������� ����� ������
    {
        count++; // ����������� ������� ��������
        strPtr++; // ��������� � ���������� �������
    }
    return count;
}

int main()
{
    setlocale(LC_ALL , "ru");
    char str[100];
    cout << "������� ������: ";
    cin.getline(str, 100);

    int char_�ount = count_�hars(str);
    cout << "������: " << str << " " << char_�ount << " �������." << endl;

    return 0;
}
