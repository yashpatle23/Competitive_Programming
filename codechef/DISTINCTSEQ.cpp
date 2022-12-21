#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;
#define ll long long
ll mod=998244353;

void yes(){ cout<<"YES"<<endl;}
void no() { cout<<"NO"<<endl;}


void ans(){
    cin>>x;
    string str;
    cin>>str;
    int tem=0,a_tem=0;
    for(int i=0;i<x;i++){
        if(str[i]=='1') {
            a_tem++;
            
        }
        if(str[i+x]=='1') tem++; 
    }
    if(a_tem!=tem)  {
        for(int i=1;i<x+1;i++) cout<<i<<" ";
        cout<<endl;
    }
    else if (tem==0 || tem==x) cout<<-1<<endl;
    else{
        int flag=0,a_index,b_index;
        for(int i=0;i<x;i++){
            if(flag<2) {
                    if(str[i]=='1') {
                        a_index=i;
                        flag++;
                    }
                    if(str[x+i]=='1') {
                        b_index=x+i;
                        flag++;
                    }
            }
            else break;
        }
        if(a_index==(b_index-x)){
            
        }
        else {
            int min_v=min(a_index,b_index-x);
            
            for(int i=0;i<x;i++){
                if(i<=min_v) cout<<i+1<<" ";
                else cout<<i+x<<" ";
            }
            cout<<endl;

        }
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