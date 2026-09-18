#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = 10;
    int c;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    c = a;
    a = b;
    b = c;
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    cout << a <<endl;
    cout << b <<endl;
    return 0;

}