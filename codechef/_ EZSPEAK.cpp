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
    char vowel[]={'a','e','i','o','u'};
    int n;
    cin>>n;
    string str;
    cin>>str;
    int tem=0,flag=0;
    loop(n){
        flag=0;
        if(tem==4) {
            no();
            return;
        }
        for(int j=0;j<5;j++){
            if(str[i]==vowel[j]){

    flag=1;
                break;
            }
        }
        if(flag==0) {tem++;}

    }
    yes();
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