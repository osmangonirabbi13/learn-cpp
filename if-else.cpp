#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout << "Enter a :";
    cin >> a;
    cout << "Enter b :";
    cin >> b;

    if (a % 2 == 0)
    {
        cout << " a is a  odd num  :" << a << endl;
    }
    else
    {
        cout << " b is a even num  : " << b << endl;
    }
}

//  g++ if-else.cpp -o index && ./index