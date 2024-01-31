#include<iostream>
using namespace std;
int main()
{
    int i,n,m=1;
    cin>>n;
    if(n>0)
    {
        for(i=1;i<=n;i++)
        {
            m=m*i;
        }
    
        cout<<m;
    }

    else
    {
        cout<<"Error! Factorial of a negative number doesn't exist.";
    }
    return 0;
}