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

 
ll log_a_to_base_b(int a, int b)
{
    return log(a) / log(b);
}
void giver(){

    ll s,tem,n;
    cin>>n>>k>>s;
    int arr[n]={0};
    for(int i=0;i<n;i++){
        tem=log_a_to_base_b(s,k);
       
        arr[tem]=1;
        s=s-pow(k,tem);
        if(s==0) break;
    }
   if (s==0) {loop(n) cout<<arr[i]<<" ";}
   else cout<<-2;
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