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
    int n,acou=0,bcou=0;
    cin>>n;
    string arr,brr;
   
        cin>>arr>>brr;
     
    loop(n) {
        if(arr[i]=='1') acou++;
       
        if(brr[i]=='1') bcou++;
    }
    if(acou==bcou) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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