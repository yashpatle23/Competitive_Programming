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
    int tem=0;
    int arr[n];
    int ans[n]={0};
    loop(n) {
        cin>>arr[i];
        if(arr[i]>n) tem=1;
    }
    if(tem==1) {
        cout<<-1<<endl;
        return;
    }
    else{
        
        
        int write=1;
        
        for(int i=0;i<n;i++){
            int run=1;
            int tem=arr[i];
            if(ans[i]==0){
                ans[i]=write;
                
                    for(int j=i+1;j<n;j++){
                        if(run==arr[i]) break;
                        if(arr[i]==arr[j]){
                            ans[j]=write;
                            run++;
                        }
                        if(j==n) {
                            cout<< run<<" ";
                            if(run<arr[i]){
                                cout<<-1<<endl;
                                return;
                            }
                        }
                    }
                write++;
                
            }
        }

    }
    sort(arr,arr+n);
    loop(n) {
        
    }
  
    loop(n) cout<<ans[i]<<" ";
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