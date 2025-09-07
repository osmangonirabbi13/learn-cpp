#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a valut :";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Total sum :" << sum << endl;
}