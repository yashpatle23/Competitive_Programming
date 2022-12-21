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
    int arr[n];
    loop(n) cin>>arr[i];
    int count=0;
    loop(n) {
        int tem=0;
        
        for(int j=0;j<i; j++){
            if(arr[i]==arr[j]){
                tem=1;
                break;
            }
        }
        if(tem==0) count++;
    }
    cout<<count<<endl;
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