#include<bits/stdc++.h>
using namespace std;

void ans(){
    int n,t=0;
    cin>>n;
    string s;
    cin>>s;
    int mid=n/2;
    for(int i=0;i<mid;i++){
        if(s[i]==s[mid+i]) continue;
        else{
            t=1;
            break;
    }}
    if(t==1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--) ans();
    return 0;
}