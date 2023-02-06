#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int j,k;
#define ll long long
#define loop(y) for (ll i = 0; i < y; i++)
ll mod=998244353;

// *min_element(arr, arr + n);  *max_element(arr, arr + n);
//maxElementIndex = std::max_element(v.begin(),v.end()) - v.begin();

void yes(){ cout<<"YES"<<endl;}
void no() { cout<<"NO"<<endl;}

int check(int n){
    int out=0;
  
    
        while(n!=0) {
            out++;
            n/=10;
        }
        return out;
   
}
void giver(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
   
	    int N;
	    cin>>N;
	    int arr[N] = {0};
        arr[0] = 3;
        arr[N-1] = 3;
        for (int i=0;N>i;i++){
            cout<<arr[i];
        }
        cout<<endl;
	
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