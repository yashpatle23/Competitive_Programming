

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
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    vector<int> m,t;
    int summ=0,sumt=0;
    loop(n){
        cin>>arr[i];
        if(i%2==0) {
            m.push_back(arr[i]);
            summ+=arr[i];
        }
        else {
            t.push_back(arr[i]);
            sumt+=arr[i];
        
        }
    }
    sort(t.begin(),t.end());
    sort(m.begin(),m.end(),greater<int>());
    for(int i=0; i<k && i<t.size(); i++){
        
        if(summ>=sumt){
            summ-=m[i];
            summ+=t[i];
            sumt-=t[i];
            sumt+=m[i];
        }
        else{
            yes();
            return;
        }
    }
    if(summ>=sumt) no();
    else yes();


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