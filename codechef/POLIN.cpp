#include<bits/stdc++.h>
using namespace std;

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
    int x[n],y[n];
    loop(n){
        cin>>x[i]>>y[i];
    }
    sort(x,x+n);
    sort(y,y+n);
    j=2;
    for(int i=1;i<n;i++){
        if(x[i-1]!=x[i]) j++;
        if(y[i-1]!=y[i]) j++;
    }
    cout<<j<<endl;

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