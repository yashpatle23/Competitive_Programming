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
void ans() { cout<<"CONFUSED"<<endl;}


void giver(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
     map<int,int> mp;
    loop(n) {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    int arr2[n]={0};
    int j=0;
    for(auto i:mp){
        arr2[j]=i.second;
        j++;
    }
    sort(arr2,arr2+n);
    if(arr2[n-1]==arr2[n-2]) ans();
    else {
        for(auto i:mp){
            if(i.second==arr2[n-1]) {
                cout<<i.first<<endl;
                return;}
        }
    }

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