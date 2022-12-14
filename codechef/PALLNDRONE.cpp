#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int max=s.length();
    for(int i=0;i<max/2;i++){
        if(s[i]!=s[max-1-i]) {
            cout<<0;
            return 1;
        }
    }
    cout<<1;
    return 0;
}