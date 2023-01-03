#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int j,k;
#define ll long long
#define loop(y) for (ll i = 0; i < y; i++)
ll mod=998244353;


// *min_element(arr, arr + n);  *max_element(arr, arr + n);

void yes(){ cout<<"YES"<<endl;}
void no() { cout<<"NO"<<endl;}


void giver(){
    ll n;
    cin>>n;
    ll arr[n];
    loop(n) cin>>arr[i];
    sort(arr,arr+n);
    ll t1,t2;
    t1=(arr[n-1]-arr[0])*arr[n-2];
    t2=(arr[n-2]-arr[0])*arr[n-1];
    cout<<max(t1,t2)<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;
    cin>>t;
    while(t--) giver();
    return 0;
}