#include<bits/stdc++.h>
using namespace std;
long long x,y,z,i;
int j,k;


void ans(){
    float n;
   cin>>x>>y;
   n=x;
   k=1;
   long long arr[x];
   for(i=0; i<x;i++){
    cin>>arr[i];
    
   }
   for(i=0; i<ceil(n/2);i++){
    
    if( y == arr[i]){
        cout<<"Yes"<<endl;
        return;
    }
    
   }
   cout<<"No"<<endl;
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