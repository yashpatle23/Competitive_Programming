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
    int sum=0;
    loop(n) {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%2==0) cout<<0<<endl;
    else {
        
        int min=1000000;
        loop(n){
            if(arr[i]%2==0){
                int tem=0;
                while(arr[i]%2==0){
                    arr[i]=arr[i]/2;
                    tem++;
                }
                if(tem<min) min=tem;
            }
            else {
                int tem=0;
                while(arr[i]%2!=0){
                    arr[i]=arr[i]/2;
                    tem++;
                }
                if(tem<min) min=tem;
            }
        }
        cout<<min<<endl;
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