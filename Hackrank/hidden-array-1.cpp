#include<bits/stdc++.h>
using namespace std;
int x=0,y=0,z;
int i=0,j,k;
int ans=6;
int tem;
int maxa;
    int mina;

void ansa(){
    int s;
    cin>>s;
    int arr[s];
    for(int i=0; i<s;i++) cin>>arr[i];
    x=0;
    for(int i=1;i<=s;i++){
    
            if(x==0){
                mina=arr[i-1];
                x++;
            }
            else if(x==1){
                if(mina==arr[i-1]) continue;
                maxa=arr[i-1];
                x++;
            }
            else if(x==2){
                if(mina>maxa) swap(mina,maxa);
                x++;
            }
            if(x==3){
                if(arr[i-1]<=mina)
                    continue;
                
                else if (arr[i-1]>=maxa) continue;

                cout<<"NO"<<endl;
                    return;
            }
            
    }
    cout<<"YES"<<endl;
    
    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;
    cin>>t;
    while(t--) ansa();
    return 0;
}