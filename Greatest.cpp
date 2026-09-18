#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<" Greatest number is "<<a<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<" Greatest number is "<<b<<endl;
    }
    else
    {
        cout<<" Greatest number is "<<c<<endl;
    }
    return 0;
}