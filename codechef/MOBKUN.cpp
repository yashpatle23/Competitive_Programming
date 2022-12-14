#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;
int tem;

void ans(){
   int N,M;
   int Year,Day;
   cin>>N>>M;
   
   cin>>Year>>Day;
   /*
   tem=N*(Year-1);
   Day=Day-tem;
   while(Day>0){
    
    if(Day<=N+M) {
        cout<<"YES"<<endl;
        return;
    }
    Day=Day-tem-(N+M);
   }
   cout<<"NO"<<endl;
   */
  tem=(N*Year)+M;
  z=Day%tem;
  x=N*(Year-1);
  if(z==0){
    cout<<"YES"<<endl;
    return;
  }
  else if(z>x){
    cout<<"YES"<<endl;
    return;
  }
  cout<<"NO"<<endl;
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