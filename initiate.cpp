#include<iostream>
#include <algorithm>
using namespace std;


void bigger(int n){
    int arr[3][100],hcf[3];
    for(int i=0;i<3;i++) for(int j=0;j<n;j++) cin>>arr[i][j];
    for(int i=0;i<3;i++) {
        
        hcf[i]=1;
        int mina=*min_element(arr[i], arr[i] + n);
        
        for(int j=2;j<=mina;j++){
            int tem=0;
            for(int k=0;k<n;k++){
                if(arr[i][k]%j==0)  tem++;
                else break;
            }
            if(tem==n) hcf[i]=j;
        }
    }
    int index=max_element(hcf, hcf + 3) - hcf;
    if(index==0) cout<<"YASH"<<endl;
    else if(index==1) cout<<"SAHIL"<<endl;
    else cout<<"PRIYA"<<endl;
}

int main(){
    int t,n; 
    cin >>t;
    cin>>n;
    while(t--) bigger(n);
    return 0;
}