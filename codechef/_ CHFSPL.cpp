#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;
#define ll long long



void ans(){
   cin>>x>>y>>z;
   int arr[3];
   arr[0]=x+y;
   arr[1]=x+z;
   arr[2]=z+y;
   cout<<*max_element(arr,arr+3)<<endl;
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