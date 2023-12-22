

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
    map<int,int> mp;
    vector<int> arr(n);
    int sum=0;
    loop(n) {
        cin>>arr[i];
        mp[arr[i]]++;
sum+=arr[i];
    }
    
    if(n==4) {
        if(arr[0]+arr[1] ==arr[2]+arr[3]) no();
        else yes();
        return;
    }
    if(mp[arr[0]]==n){
        no();
        return;
    }
    yes();



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