#include<bits/stdc++.h>
using namespace std;
int z;
int i=0,j,k;
#define ll long long


void yes(){ cout<<"YES"<<endl;}
void no() { cout<<"NO"<<endl;}


void ans(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int &index : a){
        cin>>index;
    }
    int gcd=0;
    for(int i=0;i<n;i++) gcd=__gcd(gcd,a[i]);
    
    for(int i=0;i<n;i++)  cout<<a[i]/gcd<<" ";
    cout<<endl;


}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;
    cin>>t;
    while(t--) ans();
    return 0;
}