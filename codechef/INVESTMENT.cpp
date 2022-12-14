#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;
#define ll long long

void yes(){ cout<<"YES"<<endl;}
void no() { cout<<"NO"<<endl;}


void ans(){
   cin>>x>>y;
   if(x>=(2*y)) yes();
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