#include<bits/stdc++.h>
using namespace std;

void ans(){
    int number,b,i=1,j,count;
    int arr[100000],tem=0;
    cin>>b;
    cin>>number;
    while (i <= number)
   	{
   		count = 0;
    	if(number % i == 0)
      	{
      		j = 1;
      		while(j <= i)
      		{
      			if(i % j == 0)
      			{
      				count++;
				}
				j++;
			}
			if(count == 2)
			{
                if(tem==0) {
                    arr[tem]=i;
                    tem++;
                }
                else {
                    bool exits;
                    exits=find(arr,arr+tem,i) != arr+tem;
                    if(!exits){
                        arr[tem]=i;
                        tem++;
                    }
                }
				/////cout << i << " ";
			} 
      	}
    	i++;
   	}
    bool anss;
    for(int i=0;i<tem;i++) {
        if(b%arr[i]!=0){
            anss=false;
            break;
        }
        anss=true;
}
    if(anss) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
    
int main(){
    int t;
    cin>>t;
    while(t--) ans();
    return 0;
}