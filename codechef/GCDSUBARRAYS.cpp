#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;
#define ll long long


void yes(){ cout<<"YES"<<endl;}
void no() { cout<<"NO"<<endl;}


void ans(){
    int n;
    cin>>n>>x;
    int sum=n*(n+1)/2;

    if (x<sum) cout<<-1<<endl;
    else {
        for(int i=0;i<n-1;i++)  cout<<"1 ";
        cout<<x-sum+1<<endl;
        
    }
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