#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;


void ans(){
   cin>>x>>y>>z;
    if(x==y && y==z) cout<<"No"<<endl;
    else{
        if(x>=y && x>=z){
            if(x<=y+z) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
        else  if(y>=x && y>=z){
            if(y<=x+z) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
        else{
            if(z<=x+y) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
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