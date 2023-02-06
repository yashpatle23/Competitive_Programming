#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int k;
#define ll long long
#define loop(y) for (ll i = 0; i < y; i++)



void giver(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int j=0;
    cin>>x;
    cin>>y;
    int arr[x];
    loop(x){
         cin>>arr[i];
        if(arr[i]%2==0) j++;
    }
    if(j==x && y%2==0) cout<<-1<<endl;
    else if(y%2==0) cout<<j<<endl;
    else cout<<(j+1)%2<<endl;

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