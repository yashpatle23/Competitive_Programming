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
    ll n,w;
    cin>>n>>w;
    ll arr[n],sum=0;
    loop(n) {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    ll count=0;
    loop(n){
        if(w>sum){
            break;
        }
        else{
            sum= sum -arr[i];
            count++;
        }
    }
    cout<<count-1<<endl;
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