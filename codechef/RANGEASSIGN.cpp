#include<bits/stdc++.h>
using namespace std;

void ans(){
    int n;
    cin>>n;
    int arr[n],ans=9,tem;
    for(int i=0;i<n;i++) cin>>arr[i];
 
    if(n==2){
	        cout << "YES" << endl;
	        goto x;
	    }
	    else{
	        if(arr[0] == arr[n-1]){
	            cout << "YES" << endl;
	            goto x;
	        }
	        else{
	            for(int i=0; i<n-1; i++){
	                if(arr[i] == arr[0] && arr[i+1] == arr[n-1]){
	                    cout << "YES" << endl;
	                    goto x;
	                }
	            }
	        }
	    }
	    cout << "NO" << endl;
	    x: ;
}
int main(){
    int t;
    cin>>t;
    while(t--) ans();
    return 0;
}


