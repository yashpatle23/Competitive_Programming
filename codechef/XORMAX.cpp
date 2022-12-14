#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;
#define ll long long


void yes(){ cout<<"YES"<<endl;}
void no() { cout<<"NO"<<endl;}


void ans(){
   string a,b;
   cin>>a>>b;
   ll a_tem=0,b_tem=0;
   int n=a.length();
    for(int i=0;i<n;i++){
        if(a[i]=='1') a_tem++;
        
        if(b[i]=='1') b_tem++;
    }
    int tem=0;
    if(a_tem==n || b_tem==n)   tem= abs(a_tem-b_tem);

    else{
        if((n-a_tem)>=b_tem) tem+=b_tem;
        else tem+=(n-a_tem);
        if((n-b_tem)>=a_tem) tem+=a_tem;
        else tem+=(n-b_tem);
    }
     for(int i=0;i<n;i++){
        if(tem>0){
            cout<<1;
            tem--;
        }
        else cout<<0;
    }
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



