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


void giver(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>x;
    int ia=0;
    int arr[x];
    if(x%2!=0) {
        cout<<-1<<endl;
        return;
    }
    else {
        loop(x/2){
            if(i%2==0){
                arr[i]=ia++;
                arr[x-1-i]=-ia;
                ia++;
            }
            else{
                arr[i]=-ia;
                ia++;
                arr[x-1-i]=ia++;
            }
        }
    }


    loop(x) cout<<arr[i]<<" ";
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