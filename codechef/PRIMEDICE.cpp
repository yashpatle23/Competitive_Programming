#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;


void ans(){
   cin>>x>>y;
   j=0;
   z=x+y;
   for(i=2;i<=z/2;i++){
    if(z%i==0) {
        cout<<"Bob"<<endl;
        j=1;
        break;
    }
   }
   if(j==0) cout<<"Alice"<<endl;
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