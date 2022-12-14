#include<bits/stdc++.h>
using namespace std;
int x,y;

void ans(){
    cin>>x>>y;
    if(x>=y) cout<<y<<endl;
    else {
        cout<<2*x-y<<endl;
    }
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