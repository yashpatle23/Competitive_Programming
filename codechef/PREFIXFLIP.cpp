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
    int n,k;
    cin>>n>>k;
    int arr[n];
    string s;
    cin>>s;
    arr[0]=0;
    int differ=0;
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]) differ++;
     
        arr[i]=differ;
    }
    int out=arr[k-1];
    if(s[k-1]=='0') out++;
    loop(n-k){
        int tem=arr[i+k]-arr[i+1];
        if(s[i+k]=='0') tem++;
        out=min(out,tem);
    }
    cout<<out<<endl;
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





