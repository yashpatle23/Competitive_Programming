#include<bits/stdc++.h>
using namespace std;

#define loop(y) for (long long i = 0; i < y; i++)

void fucker(){
    int n;
    cin>>n;
    int a[2*n];
    int b[2*n];
    loop(2*n) {cin>>a[i];b[i]=a[i];}
    sort(b,b+2*n);
    int tback =b[n-1];
    int index =n;
    long long vum=0;
    loop(index){
        if(a[i]>tback) {
            vum+=index-i;
            index++;    
        }
    }
    cout<<vum<<endl;
    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;
    cin>>t;
    while(t--) fucker();
    return 0;
}