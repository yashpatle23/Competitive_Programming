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
    vector <int> v2;
    loop(n) {
        int a;
        cin>>a;
        if(i%2==0) v.push_back(abs(a));
        else v2.push_back(abs(a));
    }
    int sum=accumulate(v.begin(),v.end(),0LL);
    int sum2=accumulate(v2.begin(),v2.end(),0LL);
    int x=sum-sum2;
    x+= max( 0LL,2*(*max_element(v2.begin(),v2.end()) - *min_element(v.begin(),v.end())));

    cout<<x<<endl;



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