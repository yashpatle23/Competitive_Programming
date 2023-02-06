#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int j,k;
#define ll long long
#define loop(y) for (ll i = 0; i < y; i++)
ll mod=998244353;

// *min_element(arr, arr + n);  *max_element(arr, arr + n);
//maxElementIndex = std::max_element(v.begin(),v.end()) - v.begin();

void yes(){ cout<<"YES"<<endl;}
void no() { cout<<"NO"<<endl;}


void giver(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ia=0;
    loop(n){
        if(s[i]=='0'){
            ia++;
        }
    }
    int j=n-ia;
    if(ia==0) cout<<1<<endl;
    else if(j==0) cout<<0<<endl;
    else {
        
        if(ia==j){
            cout<<ia<<endl;
            return;
        }
        if(ia<j){
            cout<<ia+1<<endl;
            return;
        }
        cout<<j<<endl;

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