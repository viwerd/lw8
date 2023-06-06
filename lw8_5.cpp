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
    string arr[SIZE] = { "слон", "олег", "банан", "слон", "керосин" };
    string search_str = "слон";
    int count = count_occurrences(arr, SIZE, search_str);
    cout << "Строка для поиска: " << search_str << " встречается " << count << " раз(а)." << endl;
    return 0;
}
