#include <iostream>
using namespace std;

int main() {
	int t,a,b;
	cin>>t;
	while(t>0){
	    cin>>a>>b;
	    int ar[a],br[a],c[a],d[a],t1,t2,sum=0;
	    for(int i=0; i<a; i++){
	        cin>>ar[i];
	    }
	  int n=0;
	     for(int i=0; i<a; i++){
	       cin>>br[i];
	       
	        if(ar[i]>br[i])
	        {
	         c[n]=ar[i];
	         d[n]=br[i];
	         n++;
	        }
	     }
	     
	         for(int i=0; i<n; i++){
	       for(int j=i+1; j<n; j++){
	        if(d[i]>d[j]){
	            t1=d[i];
	            t2=c[i];
	            d[i]=d[j];
	            c[i]=c[j];
	            d[j]=t1;
	            c[j]=t2;
	            }
	        }
	     }
	    
	    for(int i=0; i<n; i++){
	        if(b>0){
	        if(c[i]==c[i+1]){
	            sum+=d[i];
	        }
	        else sum+=d[i];
	        b--;
	        }
	    }
	         
	     if(b==0)cout<<sum<<"\n";
	     else cout<<"-1\n";
	    t--;
	}
	return 0;
}