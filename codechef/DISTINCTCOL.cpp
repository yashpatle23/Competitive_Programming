#include<bits/stdc++.h>
using namespace std;


void ans(){
    int n,max;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        if(i==0) max=arr[i];
        if(arr[i]>max) max=arr[i];
    }
    cout<<max<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--) ans();
    return 0;
}



