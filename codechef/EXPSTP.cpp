#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;
#define ll long long



void ans(){
   int n;
   cin>>n;
   int x1,y1,x2,y2;
   cin>>x1>>y1>>x2>>y2;
   i++;
   int ans;
   cout<<i<<" ";
   
    x=x2-x1;
   y=y2-y1;
   if(x<=y) ans=x+2;
   else ans=y+2;
   if(ans<=x+y) cout<<ans<<endl;
   else cout<<x+y<<endl;
   
 
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