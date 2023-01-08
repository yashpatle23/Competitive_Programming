#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int k=0;
#define ll long long
#define loop(y) for (ll i = 0; i < y; i++)
ll mod=998244353;

// *min_element(arr, arr + n);  *max_element(arr, arr + n);

void yes(){ cout<<"YES"<<endl;}
void no() { cout<<"NO"<<endl;}


void giver(){
    cin>>x;
    
    int a[3]={0};
    a[0]=1;
      
       int n;
       n=x;
       int i=2;
    while((i*i)<=x){
        if(x%i==0 && (i!=(x/i))){
            a[1]=i;
            z=i;
            break;
        }
       n/=i; 
    }
    a[2]=x/z;
 
    if(a[1]!=0) loop(3) cout<<a[i]<<" ";
    else cout<<-1;
    cout<<endl;
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