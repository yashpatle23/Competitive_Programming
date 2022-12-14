#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;
#define ll long long



void ans(){
   int a,b,a1,b1,a2,b2;
   cin>>a>>b>>a1>>b1>>a2>>b2;
   if((a1==a || a1==b) && (b1==a || b1 ==b)){
  cout<<1<<endl;
   }
   else if((a2==a || a2==b) && (b2==a || b2 ==b)){
  cout<<2<<endl;
   }
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