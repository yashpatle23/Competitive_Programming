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
int findOdd(int arr[], int n)
{
    int res = 0, i;
    for (i = 0; i < n; i++)
        res |= arr[i];
    return res;
}

void giver(){
    int n;
    
    cin>>n>>x;
    int arr[n];
    loop(n) cin>>arr[i];
    int tem=findOdd(arr,n);
    if(x-tem==0) cout<<0<<endl;
    else{
        int dif=x-tem;
        loop(x+1){
            if((dif|i)==x){
                cout<<i+1<<endl;
                return;
            }
        }
        cout<<-1<<endl;
       
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