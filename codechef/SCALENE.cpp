#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;
#define ll long long
ll mod=998244353;

void yes(){ cout<<"YES"<<endl;}
void no() { cout<<"NO"<<endl;}


void ans(){
    cin>>x>>y>>z;
    if(x==y || y==z || z==x) no();
    else yes();
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;
    cin>>t;
    while(t--) ans();
    return 0;
}