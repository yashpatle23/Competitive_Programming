

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
    int n,m;
    cin>>n>>m;
    map<int,int> mp;
    vector<int> arr(n);
    loop(n) {
        cin>>arr[i];
        mp[arr[i]]++;
    
    }
    int max_ele=*max_element(arr.begin(),arr.end());
    if(mp[max_ele]==n){
        cout<<0<<endl;
        return;
    }
    int min_ele=*min_element(arr.begin(),arr.end());
    sort(arr.begin(),arr.end());
    int diff=arr[n-1]-arr[0];
    int ans=0;
    
        
        loop(n){
            ans+=(max_ele-arr[i]);
            if(arr[i]==max_ele) break;
        }
    
    int fi;
    if(ans%m==0) fi=ans/m;
    else fi=ans/m+1;

    cout<<max(fi,diff)<<endl;


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