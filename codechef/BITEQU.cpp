#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define int ll
int j,k;
#define loop(y) for (int i = 0; i < y; i++)
int mod=998244353;
// *min_element(arr, arr + n);  *max_element(arr, arr + n);
//maxElementIndex = std::max_element(v.begin(),v.end()) - v.begin();
//__gcd(x,y) lcm=x*y/__gcd(x,y)

void yes() {char yes[] = {'Y', 'E', 'S'}; loop(3) cout << yes[i]; cout << endl;}
void no() {char no[] = {'N', 'O'}; loop(2) cout << no[i]; cout << endl;}


void giver(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector <int> v;
    int x;
    cin>>x;
    int y=1;
    if(x==0){
        cout<<"1 3 4 5"<<endl;
        return;
    }
    int ans[4]={};
    ans[0]=ans[1]=ans[2]=x;
    int j=0;
    for (int i = 0; i < 60; i++){
        if(!(x&(1ll<<i))){
            ans[j]+=(1ll<<i);
            if(j==2) ans[3] += (1ll<<i);
            j++;
            j%=3;
        }

    }
   for (int i = 0; i < 4; i++){
        assert(ans[i]!=0);
        for(int j=i+1;j<4;j++){
            assert(ans[i]!=ans[j]);
        }

    }
    int val=((ans[0] & ans[1]) | ans[2]) ^ ans[3];
    
    assert(val==x);
    if(ans[3]==0) cout<<-1<<endl;
    else{
        loop(4) cout<<ans[i]<<" ";
        cout<<endl;
    }

    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--) 
    
    giver();
    return 0;
}