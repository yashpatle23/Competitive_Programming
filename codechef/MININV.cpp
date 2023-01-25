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
int getInvCount(int arr[],int n){
    multiset<int> set1;
    set1.insert(arr[0]);
  
    int invcount = 0; 
  
    multiset<int>::iterator itset1; 
  
    for (int i=1; i<n; i++)
    {
        set1.insert(arr[i]);
        itset1 = set1.upper_bound(arr[i]);
        invcount += distance(itset1, set1.end());
    }
  
    return invcount;
}

void giver(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int v[n];
    loop(n) {
        cin>>v[i];
    }
    
    cout<<getInvCount(v,n)<<endl;
    
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