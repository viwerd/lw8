#include <iostream>

using namespace std;

void multiply(int& x, int& y)
{
    x *= y;
}

int main()
{
    setlocale(LC_ALL , "ru");
    int a = 2;
    int b = 5;

    cout << "До: x = " << a << ", y = " << b << endl;

    multiply(a, b);

    cout << "После: x = " << a << ", y = " << b << endl;

    return 0;
}
