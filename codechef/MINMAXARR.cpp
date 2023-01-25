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
    ll a[n];
    loop(n) cin>>a[i];
    ll b[n];
    
    ll lo=*min_element(a,a+n);
    ll hi=*max_element(a,a+n);

    ll ans=LONG_MAX;
    while(lo<=hi){
        ll mid = (lo+hi)/2;
        loop(n) b[i]=a[i];
        for(ll i=n-1; i>=1; i--){
            if(b[i]>mid){
                b[i-1]=b[i-1]+b[i]-mid;
                b[i]=mid;
            }
        }
        ll temid=*max_element(b,b+n);
        if(temid>mid){
            lo=mid+1;
        }
        else {
            ans=min(ans,temid);
            hi=mid-1;
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
    while(t--) giver();
    return 0;
}