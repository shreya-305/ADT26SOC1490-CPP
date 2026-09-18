#include<iostream>
using namespace std;
int main()
{
    int n = 1234;
    int rev;
    rev = (n%10)*1000 + (n/10%10)*100 + (n/100%10)*10 + (n/1000%10);
    cout<<"Reverse of the number is "<<rev<<endl;
    return 0;
}