#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s.length()%2==0){
        cout<<"Not a Palindrome";return 0;
    }
    else{
        int last=s.length()-1;
        for(int i=0;i<(s.length()/2);i++){
            if(s[i]!=s[last]){cout<<"Not a Palindrome";return 0;}
            last--;
        }
    }
    cout<<"Palindrome";
}