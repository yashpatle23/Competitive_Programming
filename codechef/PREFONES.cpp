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
    int tem=0;
    int x;
    loop(n){
        if(s[i]=='1'){
            tem++;
        }
        else{
            x=i;
            break;
        }
    }
    int ans=tem;
    int var=0;
    for(int i=x;i<n;i++){
        if(s[i]=='1'){
            int temp=0;
            while(s[i++]=='1') temp++;
            i--;
            var=max(var,temp);
        }
       
    }
    ans=var+ans;
    cout<<ans<<endl;

    
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