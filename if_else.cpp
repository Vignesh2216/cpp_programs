#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a>0)
    {
        cout<<a<<" is positive";
    }
    else if(a==0)
    {
        cout<<"0 is zero";
    }
    else
    {
        cout<<a<<" is negative";
    }
}