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


void giver(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    int tem;
    if(a1<=b1 && b1<=a2){
        tem=max(a2,b2);
        
        cout<<tem-a1+1<<endl;
    }
    else if(b1<=a1 && a1<=b2){
        tem=max(a2,b2);
        cout<<tem-b1+1<<endl;
    }
    else if(a2<=b2 && a2>=b1){
        tem=min(a1,b1);
        cout<<b2-tem+1<<endl;
    }
    else if (b2<=a2 && b2>=a1){
        tem=min(a1,b1);
        cout<<a2-tem+1<<endl;
    }
    else{
        cout<<a2-a1+1+b2-b1+1<<endl;
    }

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