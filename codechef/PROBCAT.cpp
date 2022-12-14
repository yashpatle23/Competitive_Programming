#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;
#define ll long long



void ans(){
   cin>>x;
   if(x<100) cout<<"Easy"<<endl;
   else if (x<200) cout<<"Medium"<<endl;
   else cout<<"Hard"<<endl;
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