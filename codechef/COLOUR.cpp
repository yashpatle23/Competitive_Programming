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
    int x,y,z;
    cin>>x>>y>>z;
    int count=0;
    vector <int> v={x,y,z};
    sort(v.begin(),v.end(),greater<int>());
    loop(3){
        if(v[i]>0) {
            count++;
            v[i]--;
        }
        else break;
        
    }
    if(v[0]>0 && v[1]>0){
        v[0]--;
        v[1]--;
        count++;
    }
    if(v[0]>0 && v[2]>0){
        v[0]--;
        v[2]--;
        count++;
    }
    if(v[1]>0 && v[2]>0){
        v[1]--;
        v[2]--;
        count++;
    }
    cout<<count<<endl;
    



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