#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;
#define ll long long
ll mod=998244353;

void yes(){ cout<<"YES"<<endl;}
void no() { cout<<"NO"<<endl;}


void ans(){
    int n;
    ll tem=0;
    cin>>n;
    vector<int> a(n);
    for(int &index : a){
        cin>>index;
    }
    
        for(int i=0;i<n;i++  ){
            ll add=0;
            add+=a[i];
            tem+=add*add*add;
            for(j=i+1;j<n;j++){
                add+=a[j];
                tem+=add*add*add;
            }
        }
    
    cout<<tem%mod<<endl;
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