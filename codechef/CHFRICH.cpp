#include<bits/stdc++.h>
using namespace std;

void ans(){
   int x,y,te;
   cin>>x>>y>>te;
   cout<<(y-x)/te<<endl;
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