#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;
#define ll long long



void ans(){
   int x1,y1;
   cin>>y>>y1>>x>>x1>>z;
   if((x*z)<=(y1-y) && (x1*z)>=(y1-y)) cout<<1<<endl;
   else cout<<0<<endl;
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