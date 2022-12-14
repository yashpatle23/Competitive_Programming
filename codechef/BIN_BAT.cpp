#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;

int n;
void ans(){
   cin>>n;
   cin>>x>>y;
   i=x;
    while(true){
        n=n/2;
      
        if(n==1) break;
        i=i+x;
        
        i=i+y;

    }
    cout<<i<<endl;

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