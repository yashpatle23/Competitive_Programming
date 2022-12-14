#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,k;
#define ll long long



void ans(){
    int j=0;
   cin>>x;
  int arr[x];
   for(int i=0;i<x;i++) {
    cin>>arr[i];
    if(arr[i]%2!=0) j++;
   }

   
    if(j%2==0){
        if((j/2)%2==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
   
   
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