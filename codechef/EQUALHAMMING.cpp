#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int j,k;
#define ll long long
#define loop(y) for (ll i = 0; i < y; i++)
ll mod=1000000007;

// *min_element(arr, arr + n);  *max_element(arr, arr + n);
//maxElementIndex = std::max_element(v.begin(),v.end()) - v.begin();

void yes(){ cout<<"YES"<<endl;}
void no() { cout<<"NO"<<endl;}
const int sz=2e5+1;
int power(int a,int b){
    if(b==0) return 1;
    int temp=power(a,b/2);
    temp = ((temp%mod))*(temp%mod)%mod;
    if(b%2) return (temp%mod * a%mod)%mod;
    else return (temp%mod);

}
int fact[sz],invfact[sz];
void prec(){
    fact[0]=invfact[0]=1;
    for(int i=1; i<sz; i++){
        fact[i]=((fact[i-1]%mod)*(i%mod))%mod;
        invfact[i]=(invfact[i-1]%mod)*power(fact[i],mod-2)%mod;
    }
}
void giver(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    string a,b;
    cin>>a>>b;
    int cnt=0;
    loop(n){
        if(a[i]!=b[i]) cnt++;
    }

    if((n-cnt)%2==0){
        cout<<0<<endl;
    }
    n-=cnt;
    int ans=power(2,cnt);
    ans = (ans%mod )*(fact[n]%mod)*invfact[n/2]%mod*invfact[n/2]%mod;
    cout<<ans<<endl;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    prec();

    int t;
    cin>>t;
    while(t--) giver();
    return 0;
}