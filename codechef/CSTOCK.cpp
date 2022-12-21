#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;
#define ll long long
ll mod=998244353;

void yes(){ cout<<"Yes"<<endl;}
void no() { cout<<"No"<<endl;}


void ans(){
   ll s,a,b,c;
   cin>>s>>a>>b>>c;
    s=s*(100+c)/100;
    if(s<=b && s>=a) yes();
    else no();
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