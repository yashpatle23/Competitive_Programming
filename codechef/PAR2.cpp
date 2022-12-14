#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;


void ans(){
    cin>>x;
    if(x%2==0) cout<<"Yes"<<endl;
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