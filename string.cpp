#include <iostream>
#include<string>
using namespace std;
int main()
{
    char t[200];
    cin>>t;
    for(int i=0;t[i]!='\0';i++){
        if(t[i]>=97){
            char temp=t[i]-32;
            cout<<temp;
        }
        else{
            cout<<t[i];
        }
    }
}