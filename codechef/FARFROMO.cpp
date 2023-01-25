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
    int x1,y1,z2,y2;
    std::cin >> x1>>y1>>z2>>y2;
    int a=(x1*x1)+(y1*y1);
    int b=(z2*z2)+(y2*y2);
    if (a>b)
    {
        std::cout << "ALEX" << std::endl;
    }
    else if  (a<b)
    {
        std::cout << "BOB" << std::endl;
    }
    else
    {std::cout << "EQUAL" << std::endl;
}


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