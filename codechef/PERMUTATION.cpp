#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;
#define ll long long
ll mod=998244353;

void yes(){ cout<<"YES"<<endl;}
void no() { cout<<"NO"<<endl;}


void ans(){
   int n;
    cin>>n;
    int size=n;
    int a[size];
    int sum=0;
    int max=n*(n+1)/2;
    int n_index=0,n1_index=0;
     for(int i=0;i<n;i++) {
        cin>>a[i];
        
     }
     sort(a,a+n);
      for(int i=0;i<n;i++) {
        if(a[i]!=i+1 && a[i]<i+1) sum+=i+1-a[i];
        else if(a[i]>i+1){
            sum=-1;
            break;
        }
     }
     
    
    cout<<sum<<endl;
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