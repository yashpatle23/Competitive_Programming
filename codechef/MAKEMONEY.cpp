#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int k;
#define ll long long



void ans(){
    int sum=0;
    int a,b,c,j=0;
	    int x=0;
	    cin>>a>>b>>c;
        int aba[a],ar[a];
	    for(int i=0; i<a; i++){
	        cin>>ar[i];
	        aba[i]=ar[i];
	    }
        int dif=b-c;
	    for(int i=0; i<a; i++){
	         if(ar[i]<dif)
             { aba[i]=b;
             
            j++;
             }
	           }
	        
	        for(int i=0; i<a; i++){
                
	               sum+=aba[i];
	          }
	        cout<<sum-(j*c)<<"\n";
	          

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