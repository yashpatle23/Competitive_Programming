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
    int t=((n+1)*n)/2;
    int as=1;
    int tem=0;
    vector <vector <int>>  vec;
    for(int i=0; i<n;i++){
        vector<int> v;
        v.push_back(as);
        as++;
        vec.push_back(v);
    }
    for(int i =n-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(tem%2==0){
                vec[n-1-j].push_back(as);
            as++;
            }
            else{
                vec[n-i+j].push_back(as);
            as++;}
        }
        tem++;
    }
    for(auto a: vec){
        for(auto b: a){
            cout<<b<<" ";
        }
        cout<<endl;
    }



}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    giver();
    return 0;
}