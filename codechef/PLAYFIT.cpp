#include<bits/stdc++.h>
using namespace std;
int x,y,z;
#define ll long long int
#define int ll
int j,k;
#define loop(y) for (int i = 0; i < y; i++)
int mod=998244353;
// *min_element(arr, arr + n);  *max_element(arr, arr + n);
//maxElementIndex = std::max_element(v.begin(),v.end()) - v`.begin();
//__gcd(x,y) lcm=x*y/__gcd(x,y)
//sort(arr, arr + n, greater<T>());  reverse sort


void yes() {char yes[] = {'Y', 'E', 'S'}; loop(3) cout << yes[i]; cout << endl;}
void no() {char no[] = {'N', 'O'}; loop(2) cout << no[i]; cout << endl;}

void un(){
    cout<<"UNFIT"<<endl;
}
void giver(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
     int n;
    cin>>n;
    vector <int> v(n);
    loop(n) cin>>v[i];
    vector <int> vd;
    // if(n==1){
    //     un();
    //     return;
    // }
    // loop(n-1){
    //     vd.push_back(*max_element(v.begin()+i,v.end())-v[i]);
    // }
    // int maxd=*max_element(vd.begin(),vd.end());
    // if(maxd<=0) {un();}
    // else cout<<maxd<<endl;
    int maxd=INT_MIN;
    int mini=0;
    loop(n){
        if(v[i]<v[mini]) mini=i;
        if(i!=mini) maxd=max(maxd,v[i]-v[mini]);
    }
    if(maxd<=0) un();
    else cout<<maxd<<endl;




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