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
    cin>>x>>y;
    int l=0;
    if(x==y) cout<<0<<endl;
    else if(x>y){
        
       if(x%2==0) cout<<log2(x/y)<<endl;
       else {
     
         x/=2;
         l++;
         l=l+log2(x/y);
         cout<<l<<endl;
       }
    }
    else{
        if(x%2==0 || x==1){
            cout<<log2(y/x)<<endl;
            }
        
        else {
            
            x/=2;
            l++;
            l=l+log2(y/x);
            cout<<l<<endl;
        }
    }
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