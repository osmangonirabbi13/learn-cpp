#include <iostream>
using namespace std;

int main()
// Qs. Print the sum of digits of a number using while loop .
{
    int n = 10829;
    int sum = 0;
    while (n > 0)
    {
        int lastDisit = n % 10;
        sum += lastDisit;
        n = n / 10;
    }

    cout << " Total Sum  : " << sum << endl;

    return 0;
}