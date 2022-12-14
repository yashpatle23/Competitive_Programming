#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i,j,k;


void ans(){
    int n;
  cin>>n>>x;
  int arr[n],max=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cin>>z;
        if(arr[i]<=x){
            if(z>max) max=z;
        }
    }
    cout<<max<<endl;


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