#include<bits/stdc++.h>
using namespace std;

void ans(){
    int n,lcm,ans=0,temp=0;
    cin>>n;
    int arr[n];
    lcm=INT_MAX;
    for(int i=0;i <n;i++){
        cin>>arr[i];
        if(lcm>arr[i]) lcm=arr[i];
    }
    temp=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=lcm){
            if(arr[i]%lcm==0) ans++;
            else {
                temp=1;
	                break;
            }
        }
    }
    if(temp) cout<<n<<endl;
    else cout<<ans<<endl;
   
    
}
int main(){
    int t;
    cin>>t;
    while(t--) ans();
    return 0;
}