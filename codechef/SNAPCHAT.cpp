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
    cin>>x;
    int arr[x],arr1[x];
    loop(x) cin>>arr[i];
    loop(x) cin>>arr1[i];
    y=0;
    j=0;
    loop(x){
        if(arr[i]!=0 && arr1[i]!=0) y++;
        else {
            j=max(j,y);
            y=0;
        }
    }
    j=max(j,y);
    cout<<j<<endl;
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