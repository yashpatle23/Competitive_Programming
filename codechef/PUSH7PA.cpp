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
    int n;
    cin>>n;
    vector <int> v(n);
    map<int,int> m;
    loop(n) {
        cin>>v[i];
        m[v[i]]++;
    }
    int ans=0;
    for(auto i:m){
        ans=max(ans,i.first+i.second-1);
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