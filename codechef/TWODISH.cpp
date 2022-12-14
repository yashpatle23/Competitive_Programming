#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;
#define ll long long



void ans(){
   int n;
   cin>>n>>x>>y>>z;
   if(y>=n){
    if((x+z)>=n){
        cout<<"YES"<<endl;
        return;
    }
   }
   cout<<"NO"<<endl;
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