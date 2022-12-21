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

int distinct_elements(int arr[], int n){
   // Sorting the array
   sort(arr, arr + n);
   // Traverse the sorted array
   int count = 0;
   for (int i = 0; i < n; i++){
      // Moving the index when duplicate is found
      while (i < n - 1 && arr[i] == arr[i + 1]){
         i++;
      }
      count++;
   }
   return count;
}
void giver(){
    int n;
    cin>>n>>x;
    int arr[n];
    loop(n) {
        cin>>arr[i];
        
    };
    y=distinct_elements(arr,n);
    cout<<min(y,n-x)<<endl;

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