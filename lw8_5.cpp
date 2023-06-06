#include <iostream>

using namespace std;

int count_occurrences(string* arr, int size, string& search_str)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == search_str)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    setlocale(LC_ALL , "ru");
    const int SIZE = 5;
    string arr[SIZE] = { "����", "����", "�����", "����", "�������" };
    string search_str = "����";
    int count = count_occurrences(arr, SIZE, search_str);
    cout << "������ ��� ������: " << search_str << " ����������� " << count << " ���(�)." << endl;
    return 0;
}
