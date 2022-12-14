#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;


void ans(){
   
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t,n1,n2,ans;
    int max,lcm;
    cin>>t>>ans>>n1>>n2;
    max = (n1 > n2) ? n1 : n2;
    do
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            lcm=max;
            break;
        }
        else
            ++max;
    } while (true);
    if(ans%lcm==6){
        for(int i=1;i<=t;i++){
            for(int j=1;j<=i;j++) cout<<"*  ";
            cout<<endl;
        }
    }
    else {
        cout<<"CAN'T BE PRINTED";
    }
    return 0;
}