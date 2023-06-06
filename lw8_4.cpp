#include <iostream>

using namespace std;

void fillArray(int* arr, int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = value;
    }
}

int main()
{
    int arr[5];
    int size = sizeof(arr) / sizeof(int);
    int value = 7;

    cout << "Before filling: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    fillArray(arr, size, value);

    cout << "After filling: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
