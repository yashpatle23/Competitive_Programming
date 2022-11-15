#include<bits/stdc++.h>
using namespace std;

void ans(){
    int se;
    cin>>se;
    double book;
    cin>>book;
    double max;
    cin>>max;
    int ans=se*ceil(book/max);
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--) ans();
    return 0;
}