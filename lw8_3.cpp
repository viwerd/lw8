#include <iostream>

using namespace std;

// Сортируем наш массив по следующему принципу , мы сравниваем 1 элемент и 2 , если 2 меньше 1 ,помещаем его вначало
void sort_arr(int* arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL , "ru");
    int arr[] = { 3, 1, 6, 2, 4 };
    int size = sizeof(arr) / sizeof(int);

    cout << "До сортировки: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort_arr(arr, size);

    cout << "После сортировки: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
