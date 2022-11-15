#include<bits/stdc++.h>
using namespace std;
int fact(int n) {
   if ((n==0)||(n==1))
   return 1;
   else
   return n*fact(n-1);
}
void ans(){
    
    int num;
    cin>>num;
    if(num==2 || num==1) cout<<0<<endl;
    else {
        int anss=2*fact(num-2);
        cout<<anss<<endl;
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