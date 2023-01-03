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
    int count=0;
    string arr;
    cin>>arr;
    loop(n) if(arr[i]=='1') count++;
    if(count==n) {
        cout<<1<<endl;
        return;
    }
    else{
        int i=0;
        while(arr[i]!='1') i++;
        
        for(int j=i+1;j<n;j=j+2){
            if(arr[j]=='1'){
                cout<<1<<endl;
                return;
            }
        }
    }
    cout<<2<<endl;
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