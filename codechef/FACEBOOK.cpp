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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector <int> v(n);
    vector <int> b(n);
    loop(n) cin>>v[i];
    loop(n) cin>>b[i];
    int ans=*max_element(v.begin(),v.end());
    
    int tem=0;
    int out;
    loop(n){
        if(v[i]==ans){
            if(tem==0){
                out=i+1;
                tem=i+1;
            }
            else{
                if(b[i]>b[tem-1]){
                    out=i+1;
                    tem=i+1;
                }
            }
        }
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