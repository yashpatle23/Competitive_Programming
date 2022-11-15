#include<bits/stdc++.h>
using namespace std;

void ans(){
    int tem;
    int index=0;
    cin>>tem;
    int ans[tem];
    double add =tem;
    for(int i=0;i<tem;i++){
        
        for(double j=1; j<=tem; j++){
             if(i==tem-1){
                
                    
                    
                    cout<<add<<endl;
                    break;
                }
            if (ceil((double)sqrt(add*j)) != floor((double)sqrt(add*j))){
                
                cout<<add<<" ";
               
                add=j;
                break;
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--) ans();
    return 0;
}