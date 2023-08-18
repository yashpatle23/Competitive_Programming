

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


void giver(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int l, w;
    cin>>l>>w;
    vector <int> a(l);
    vector <int> b(w);
    for(int i=0;i<l;i++) cin>>a[i];
   
    for(int i=0;i<l;i++) cin>>b[i];
     
    for(int i=0;i<l;i++) {
        if(a[i]+b[i]>=w) {
           
            no();
            return;
        }
        
    }
    for(int i=0;i<l-1;i++) {
        if(a[i]+b[i+1]>=w) {
           
            no();
            return;
        }
        if(a[i+1]+b[i]>=w) {
           
            no();
            return;
        }
    }
    yes();




}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

     giver();
    return 0;
}