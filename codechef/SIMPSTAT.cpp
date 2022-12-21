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
    float n,k;
    cin>>n>>k;
    vector<float> a(n);
    for(float &index : a){
        cin>>index;
    }
    sort(a.begin(),a.end());

    double sum=0;
    for(int i=k;i<n-k;i++){
        sum+=a[i];
    }
    cout<<fixed<<setprecision(6)<<sum/(n-2*k)<<endl;
    
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