#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j=0,k=0;
int ct=0;
#define ll long long

void array_input(ll n){
    
}


void ans(){
   int n;
   cin>>n;
    vector<ll> v(n);
    for(int i=0 ;i<n;i++) cin>>v[i];
   ll l = 0,r = n-1;
    ll ans = 0;
    while(l<r) {
        if(v[l] == v[r]) {
            l++;
            r--;
        }
        else if(v[l] < v[r]) {
            v[r] -= v[l];
            l++;
            ans++;
        }
        else {
            v[l] -= v[r];
            r--;
            ans++;
        }
    }
    cout<<ans<<endl;
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