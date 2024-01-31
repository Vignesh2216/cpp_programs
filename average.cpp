#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    float x=(a+b+c+d+e)/5;
    cout<<fixed<<setprecision(2)<<x;
    return 0;
}