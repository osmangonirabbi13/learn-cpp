#include <iostream>
using namespace std;

void sayHello()
{
    cout << " hello ";
}

void sayH()
{
    sayHello();
    cout << " hi ";
}

int main()
{
    sayH();
    return 0;
}