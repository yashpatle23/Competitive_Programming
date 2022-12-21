#include<bits/stdc++.h>
using namespace std;
int y,z;
int i=0,j,k;
#define ll long long
ll mod=998244353;

void yes(){ cout<<"YES"<<endl;}
void no() { cout<<"NO"<<endl;}


void ans(){
    int n;
   cin>>n;

    if(((n-1)/2 +1 )%2==0)  cout<<n<<endl;
    else cout<<n-1<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;
    cin>>t;
    while(t--) ans();
    return 0;
}