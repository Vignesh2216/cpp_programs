#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1,c;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++)
    {
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}