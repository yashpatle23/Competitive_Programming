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
    vector<int> arr(x);
    int left=0, right =0;
    map<int ,int> m;
    loop(x) {
        cin>>arr[i];
        m[arr[i]]++;

    }
    for(auto i:m) {
        if(i.second %2==1 ){
            no();
            return;
        }
    }
    yes();
    
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


/*
  // printf("Hello World");
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int, int>m;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            m[x]++;
        }
        int f = 0;
        for(auto i:m){
            if(i.second % 2==1){
                f=1;
                break;
            }
        }
        if(f)cout<<"no\n";
        else cout<<"yes\n";
    }
    return 0


*/