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
    int n,m;
    cin>>n>>m;
    int arr[n];
    
    loop(n) cin>>arr[i];
    int l=0;
    int x=0;
        sort(arr,arr+n);
    loop(n){
        if(arr[i]<0 && l!=m){
            x-=arr[i];
            l++;
        }
        else if(arr[i]>0){
            x+=arr[i];
        }
    }
    cout << x << endl;
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