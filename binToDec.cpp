#include <iostream>
using namespace std;

void binToDec(int binNum)
{
    int n = binNum;
    int decNum = 0;
    int paw = 1;

    while (n > 0)
    {
        int lastDigit = n % 10;
        decNum += lastDigit * paw;
        paw = paw * 2;
        n = n / 10;
    }

    cout << " decimal Num : " << decNum << endl;
}

int main()
{
    binToDec(101);
    return 0;
}