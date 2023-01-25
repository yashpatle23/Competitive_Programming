#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll x,y,z;
ll j,k;

#define loop(y) for (ll i = 0; i < y; i++)
ll mod=1000000000000000000;

// *min_element(arr, arr + n);  *max_element(arr, arr + n);

void yes(){ cout<<"YES"<<endl;}
void no() { cout<<"NO"<<endl;}
ll gcd(ll a,ll b){
    
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
ll lcm(ll a, ll b){
     return (a / gcd(a, b)) * b;
}

void giver(){
    cin>>x>>y;
    if(x==y) cout<<x<<endl;
    else {
    ll tem=lcm(x,y);
    tem*=2;
    tem=tem-x-y;
    tem=tem%mod;
    cout<<tem<<endl;
}}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    ll t;
    cin>>t;
    while(t--) giver();
    return 0;
}