#include<bits/stdc++.h>
using namespace std;
int x,y,z;
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

int gcd(int x, int y) {
   return x*y/__gcd(x,y);
}


int smallestX(int a, int b, int c, int d) {
    int ac=a;
    a=ac-(a%b);
    int lcm=gcd(b,d);
    a=lcm+a;
    int x=a-ac;
    return x;
}

void giver(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x,y,p,q;
    cin>>x>>y>>p>>q;
    if(x==p && x<=y && x<=q){
        cout<<1<<endl; 
    }
    else { int a = smallestX(x,y,p,q);
     cout<<a<<endl;
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