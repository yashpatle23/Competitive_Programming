#include<bits/stdc++.h>
using namespace std;
int y,z;
int i=0,j,k;
#define ll long long


void yes(){ cout<<"YES"<<endl;}
void no() { cout<<"NO"<<endl;}

// __gcd();
void ans(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(i=0; i<n;i++){
        cin>>a[i];
    }
    int val=x;
    for(i=0; i<n;i++) {
     
        if(a[i]==0) continue;
        else {
            if(val==1)break;
            int tem=__gcd(val,a[i]);
            if(tem!=1) 
            {
                
                val/=tem;
                
            }
        }
    }
    if(val==1) yes();
    else no();

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