#include <iostream>

using namespace std;

double getAverage(int* arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (double)(sum) / size;
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    double average = getAverage(arr, size);
    cout << "Average: " << average << endl;
    return 0;
}
