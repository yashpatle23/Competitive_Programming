#include<bits/stdc++.h>
using namespace std;
int x,y,z;
#define ll long long int

int j,k;
#define loop(y) for (int i = 0; i < y; i++)
int mod=998244353;
// *min_element(arr, arr + n);  *max_element(arr, arr + n);
//maxElementIndex = std::max_element(v.begin(),v.end()) - v.begin();
//__gcd(x,y) lcm=x*y/__gcd(x,y)

void yes() {char yes[] = {'Y', 'E', 'S'}; loop(3) cout << yes[i]; cout << endl;}
void no() {char no[] = {'N', 'O'}; loop(2) cout << no[i]; cout << endl;}


void giver(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   ll n; cin>>n;
multiset<ll>st;
vector<ll>v(n), tmp;
for(ll i=0; i<n; i++) {
cin>>v[i];
st.insert(v[i]);
}
sort (v.begin(),v.end());
ll zz=v[n-1]+v[n-2];
tmp.push_back(v[n-1]);
st.erase(st.find(v[n-1]));
while(tmp.size() <n) {
auto it = st.lower_bound(zz-tmp.back());
if(it==st.begin()) {
cout<<"NO"<<endl;
return;
}
it--;
tmp.push_back(*it);
st.erase(it);
}
cout<<"YES"<<endl;



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