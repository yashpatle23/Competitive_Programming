#include<bits/stdc++.h>
using namespace std;
int x,y,z;
#define ll long long
#define int long long
int j,k;
#define loop(y) for (int i = 0; i < y; i++)
int mod=998244353;
// *min_element(arr, arr + n);  *max_element(arr, arr + n);
//maxElementIndex = std::max_element(v.begin(),v.end()) - v.begin();
//__gcd(x,y) lcm=x*y/__gcd(x,y)

void yes() {char yes[] = {'Y', 'E', 'S'}; loop(3) cout << yes[i]; cout << endl;}
void no() {char no[] = {'N', 'O'}; loop(2) cout << no[i]; cout << endl;}

int cmp(pair <int,int> a, pair <int,int> b){

    return a.second<b.second;
}
bool compareInterval (pair<ll,ll> il, pair<ll,ll> i2)
{
if((il.first + il.second) == (i2.first + i2.second)) return il.first<i2. first;
return (il.first + il.second) < (i2.first + i2.second);
}
void giver()



{


                                                ll n,k; cin>>n>>k;
vector<ll>a(n), b(n);
vector<pair<ll,ll>>m(n);
for(ll i=0; i<n; i++) cin>>a[i];
for(ll i=0; i<n; i++) cin>>b[i];
for(ll i=0; i<n; i++) m[i]={a[i],b[i]};
sort(m.begin(),m.end(), compareInterval);
ll mx=0, sum=0,i=0;
while(i<n){
if(m[i].first+m[i].second+sum<=k){
sum+=m[i].first+m[i].second;
mx=max(mx, m[i].second);
i++;
}
else break;
}
vector<ll>mn(n);
for (ll k=n-1; k>=0; k--) {
if(k==n-1) mn[k]=m[k].first;
else mn[k]=min(mn[k+1],m[k].first);
}
ll ans=i;
if(i<n) {
ll rem=k-sum;
if(mn[i]<=rem) ans++;
else if(rem+mx>=m[i].first+m[i].second){ans++; }
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



