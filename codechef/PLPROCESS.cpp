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
//sort(arr, arr + n, greater<T>());  reverse sort


void yes() {char yes[] = {'Y', 'E', 'S'}; loop(3) cout << yes[i]; cout << endl;}
void no() {char no[] = {'N', 'O'}; loop(2) cout << no[i]; cout << endl;}


void giver(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector <int> v;
    int sum=0;
    loop(n){
        cin>>x;
        sum+=x;
        v.push_back(x);
    }
    vector <int> vec1,vec2;
    vec1.push_back(0);
    vec2.push_back(sum);
    for(int i=0; i<n; i++){
        vec1.push_back(vec1[i]+v[i]);
        vec2.push_back(vec2[i]-v[i]);
        
    }
    vector <int> ans;
    loop(n+1){
        ans.push_back(abs(vec1[i]-vec2[i]));
        
    }

    int maxElementIndex = std::min_element(ans.begin(),ans.end()) - ans.begin();
    cout<<max(vec1[maxElementIndex],vec2[maxElementIndex])<<endl;



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