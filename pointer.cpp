#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a; //& => address of name
    cout << ptr << "=" << &a;
}