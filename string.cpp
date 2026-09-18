#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    cout<<"reverse =";
    for(int i=str.length()-1;i>=0;i--)
    {
        cout<<str[i];
    }
}