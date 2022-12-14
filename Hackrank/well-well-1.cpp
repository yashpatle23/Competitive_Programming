#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;
int test=1;

void ans(){
    cout<<"Output of Test Case "<<test<<endl;
    test++;
    cin>>x>>y>>z;
    if(z>56) cout<<"DRINK";
    else{
        if(x%2==1) cout<<"EAT FIRST"<<endl;
        if(y%2==1) cout<<"Run bacK 1 KM"<<endl;
        if(z>10){
            cout<<"Wait 10 minutes"<<endl;
        }
        cout<<"DRINK"<<endl;
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