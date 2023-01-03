#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int j,k;
#define ll long long
#define loop(y) for (ll i = 0; i < y; i++)
ll mod=998244353;

// *min_element(arr, arr + n);  *max_element(arr, arr + n);

void yes(){ cout<<"YES"<<endl;}
void no() { cout<<"NO"<<endl;}


void giver(){
    int n;
     cin>>n;
	 int a[n];
	 for(int i=0;i<n;i++){
	  cin>>a[i];
	     
	 }
     int count=1;
	  sort(a,a+n);
	  for(int j=0;j<n-1;j++){
	   if(abs(a[j]-a[j+1])>1){
	       count=0;
	       break;
	   }
	   else count=1;
	   
	      
	  }
	  if(count==1){cout<<"YES"<<endl;}
	  else {cout<<"NO"<<endl;}
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;
    cin>>t;
    while(t--) giver();
    return 0;
}