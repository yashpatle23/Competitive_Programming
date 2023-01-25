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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    map <ll,ll> m;
    vector <ll> v(n);
    loop(n) cin>>v[i];
    ll size=n;
    ll left=0;
    ll right=n;
    ll flag=0;
    if(n==2) {
        cout<<1<<endl;
        return ;
    }
    set<ll> s;
    while(left<size-1){
        s.clear();
        for(ll i=left; i<size; i++){
            s.insert(v[i]);
        }
        
        vector <ll> b;

        for(auto it:s)b.push_back(it);
        ll size2=b.size();
        cout<<b[size2-1]<<" "<<b[size2-2]<<endl;
        m[b[size2-1]-b[size2-2]]++;
      
        left++;
    }
    left=0;
    while(left<size-1){
        s.clear();
        for(ll i=0; i<size-left; i++){
            s.insert(v[i]);
        }
        
        vector <ll> b;

        for(auto it:s)b.push_back(it);
        ll size2=b.size();
        cout<<b[size2-1]<<" "<<b[size2-2]<<endl;
        m[b[size2-1]-b[size2-2]]++;
      
        left++;
    }
    left=0;
    while(2*left<size-1){
        s.clear();
        for(ll i=left; i<size-left; i++){
            s.insert(v[i]);
        }
        
        vector <ll> b;

        for(auto it:s)b.push_back(it);
        ll size2=b.size();
        cout<<b[size2-1]<<" "<<b[size2-2]<<endl;
        m[b[size2-1]-b[size2-2]]++;
      
        left++;
    }
   
    
    int out=0;
    for(auto i:m){
      
        out++;
    }
    cout<<out<<"next"<<endl;

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