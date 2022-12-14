#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;


void ans(){
   cin>>x>>y;
   if((x+y)%2==0)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
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