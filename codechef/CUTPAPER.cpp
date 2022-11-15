#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int num;
	cin>>num;
	for(int i=0;i<num;i++){
	    int k,n,count=0;
	    cin>>k>>n;
	    i=n;
	    j=n;
	    while(i<=k){
	    	while(j<=k){
	    		count++;
	    		j=j+n;
	    	}
	    	i=i+n;
	    }
	    cout<<count<<" sdfa"<<endl;
	}
	return 0;
}