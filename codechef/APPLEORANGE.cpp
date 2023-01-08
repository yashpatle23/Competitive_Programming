#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int j,k;
#define ll long long
#define loop(y) for (ll i = 0; i < y; i++)
ll mod=998244353;

// *min_element(arr, arr + n);  *max_element(arr, arr + n);

void yes(){ cout<<"YES"<<endl;}
void no() { cout<<"NO"<<endl;}

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}

void giver(){
    cin>>x>>y;
    if(x==y) {
        cout<<x<<endl;
        return;
    }
    cout<<gcd(x,y)<<endl;
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
