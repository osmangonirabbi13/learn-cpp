#include <iostream>
using namespace std;

int dupliCate(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 1};
    int n = sizeof(arr) / sizeof(int);

    cout << dupliCate(arr, n);

    return 0;
}
