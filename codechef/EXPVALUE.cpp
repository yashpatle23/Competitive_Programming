#include<bits/stdc++.h>
using namespace std;

int j,k;
#define ll long long int
#define int ll
#define loop(y) for (ll i = 0; i < y; i++)
int mod=998244353;

// *min_element(arr, arr + n);  *max_element(arr, arr + n);
//maxElementIndex = std::max_element(v.begin(),v.end()) - v.begin();

void yes(){ cout<<"YES"<<endl;}
void no() { cout<<"NO"<<endl;}
int mul(int a, int b){
    return ((a % mod) * (b % mod)) % mod;
}

int binpow(int a, int b){
    if (b == 0)
        return 1;
    int tmp = binpow(a, b / 2);
    tmp = mul(tmp, tmp);
    if (b % 2)
        return mul(tmp, a);
    return tmp;
}

int modinv(int a){
    return binpow(a, mod - 2);
}

void giver(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x,y;
    cin>>x>>y;
    vector<int> d(x+1,0),d2(x+1,0);
    d[1]=d2[1]=modinv(2);

    int individual2=modinv(2);
    for(int i=2;i<=x;i++){
        int ya=binpow(y,i-1);
        ya=modinv(ya);
        int val=d[i-1]+mul(binpow(ya,2),individual2)+mul(ya,d2[i-1]);
        val%=mod;
        d[i]=val;
        d2[i]=(d2[i-1]+mul(ya,individual2))%mod;
    }
    for(int i=1;i<=x;i++) cout<<d[i]<<" ";
    cout<<endl;

}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    giver();
    return 0;
}