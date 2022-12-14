#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;


void ans(){
    int n;
    cin>>n;
    int a[2*n];
    for(i=0;i<(2*n);i++){
        cin>>a[i];
        k=0;
        for(int j=0;j<i;j++) {
            if(a[j]==a[i]){
               k++;
               if(k==2){
                     cout<<"No"<<endl;
                    return ;
               }
            }
        }
    }
    cout<<"Yes"<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;
    cin>>t;
    for(int te=0;te<t;te++) ans();
    return 0;
}