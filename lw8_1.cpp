#include <iostream>

using namespace std;

void swap(int& x, int& y)
{
    int n = x;
    x = y;
    y = n;
}

int main()
{
    setlocale(LC_ALL , "ru");
    int a = 1;
    int b = 2;
    cout << "До обмена: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "После обмена: a = " << a << ", b = " << b << endl;
    return 0;
}
