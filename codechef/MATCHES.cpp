#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;
#define ll long long
ll mod=998244353;

void yes(){ cout<<"YES"<<endl;}
void no() { cout<<"NO"<<endl;}


void branch(){
    cin>>x>>y;
    z=x+y;
    int ans=0;
    while(z!=0){
        k=z%10;
        if(k==2 || k==3 || k==5) ans+=5;
        else if(k==0 || k==6 || k==9) ans+=6;
        else if(k==1) ans+= 2;
        else if (k==4) ans+=4;
        else if( k==7) ans+=3;
        else ans+=7;
        z/=10;
    }
    cout<<ans<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;
    cin>>t;
    while(t--) branch();
    return 0;
}