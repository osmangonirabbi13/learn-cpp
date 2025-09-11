#include <iostream>
using namespace std;

int dceToBin(int dceNum)
{
    int n = dceNum;
    int binNum = 0;
    int paw = 1;

    while (n > 0)
    {
        int rem = n % 2;
        binNum += rem * paw;
        n = n / 2;
        paw = paw * 10;
    }
    cout << "Binary Num : " << binNum << endl;
}

int main()
{
    dceToBin(5);
    return 0;
}