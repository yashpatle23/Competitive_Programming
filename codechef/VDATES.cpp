#include<bits/stdc++.h>
using namespace std;

void ans(){
   int x,y,z;
   cin>>x>>y>>z;
   if(x<=z && x>=y) cout<< "Take second dose now"<<endl;
   else if (x<z) cout<<"Too Early"<<endl;
   else cout<<"Too Late"<<endl;
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