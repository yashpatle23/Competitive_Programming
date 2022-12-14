#include<bits/stdc++.h>
using namespace std;

#define ll long long

float x,y,z;
float i=0,j,k;

void num(float num){
    cout<<num<<endl;
}

void ans(){
   cin>>x>>y>>k;
   int ans=abs((x-y)/k);
   z=abs((x-y)/k);
   
   if(x==y) cout<<0<<endl;
   else {
        if(ans==z) num(z);
        else num(ans+1);
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