#include<iostream>
using namespace std;
int main()
{
    float percentage;
    cout<<"Enter your percentage: ";
    cin>>percentage;
    if(percentage>=70)
    {
        cout<<"Distinction"<<endl;
    }
    else if(percentage>=60 && percentage<70)
    {
        cout<<"First Class"<<endl;
    }
    else if(percentage>=50 && percentage<60)
    {
        cout<<"Second Class"<<endl;
    }
    else if(percentage>=40 && percentage<50)
    {
        cout<<"Pass Class"<<endl;
    }
    else
    {
        cout<<"Fail"<<endl;
    }
}