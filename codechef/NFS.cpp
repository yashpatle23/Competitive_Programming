#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;
#define ll long long



void ans(){
   ll u,v,a,s;
   cin>>u>>v>>a>>s;
   ll max;
   if(u==v) max=v;
   else 
   max=(u*u) -(2*a*s);
   if((v*v)>=max) cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
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