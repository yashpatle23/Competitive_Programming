

#include<bits/stdc++.h>
using namespace std;
int x,y,z;
#define ll long long int
#define int ll
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
    int n;
    cin>>n;
    vector<int> arr(n);
    loop(n){
        cin>>arr[i];
    }
    vector<int> vec(n);
    loop(n){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    sort(arr.begin(),arr.end());
    int j=0;
    map<int,int> mp;
    for(int i=0; i<n; i++){
        for(int j=arr[i]; j<vec[i]; j++){
            mp[j]++;
        }
    }
    auto ans=max_element(mp.begin(),mp.end(),[](const pair<int,int> &p1, const pair<int,int> &p2){
        return p1.second<p2.second;
    });
    cout<<ans->second<<endl;


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