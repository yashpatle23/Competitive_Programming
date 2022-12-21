#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll x,y,z;
ll i=0,j,k;
ll mod=998244353;
#define loop(y) for (long long i = 0; i < y; i++)
// *max_element(arr, arr + n); *min_element(arr, arr + n); __min(a,b)  __max(a,b)

void yes(){ cout<<"YES"<<endl;}
void no() { cout<<"NO"<<endl;}

 
ll mostFrequent(ll* arr, ll n)
{
    // code here
    ll maxcount = 0;
    ll element_having_max_freq;
    for (ll i = 0; i < n; i++) {
        ll count = 0;
        for (ll j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
 
        if (count > maxcount) {
            maxcount = count;
            element_having_max_freq = arr[i];
        }
    }
 
    return n-maxcount;
}
void giver(){
    ll n;
    cin>>n;
    ll arr[n];
    loop(n) cin>>arr[i];
    sort(arr,arr+n);
    cout<<mostFrequent(arr,n)<<endl;
    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    ll t;
    cin>>t;
    while(t--) giver();
    return 0;
}