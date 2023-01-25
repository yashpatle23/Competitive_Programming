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


void giver(){
    int n;
    cin>>n;
    int a[2*n];
    int b[n];
    loop(2*n) cin>>a[i];
    sort(a,a+2*n);
    int c=INT_MAX;
    loop(n){
        int temp=a[i+n-1]-a[i];
        if(temp<c) c=temp;
    }
    cout<<c<<endl;
    
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