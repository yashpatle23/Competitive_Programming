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
    
    loop(n){
        int x;
        cin>>x;
        v.push_back(x);
    }
    if(n<3){
        cout<<-1<<endl;
        return;
    }
    int x=1,y=2;
    loop(n){
        if(v[i]%2==0) {
            cout<<y<<" ";
            y+=2;
        }
        else {
            if(v[i]==1){
                if(n%2==0) cout<<n-1<<" ";
                else cout<<n<<" ";
            }
            else{
                cout<<x<<" ";
                x+=2;
            }
    }
    
    }
    cout<<endl;



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