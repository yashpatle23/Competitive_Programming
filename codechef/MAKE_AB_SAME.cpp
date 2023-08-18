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
    int n;
cin >>n;
int a[n], b[n];
int zeroCount = 0, oneCount = 0;
for(int i = 0; i <n; i++){
cin >> a[i];
if(a[i] == 0)
zeroCount++;
else
oneCount++;
}
for(int i = 0; i<n; i++){
cin >> b[i];
}
if(a[0] != b[0] || a[n-1] != b[n-1]){
cout<<"NO"<<endl;
return;
}
bool answer = false;
for(int i = 1; i < n-1; i++){
if(a[i] != b[i] && a[i] == 0 && oneCount == 0) {
cout<<"NO"<<endl;
return;
answer = true;
break;
}
if(a[i] != b[i] && a[i] ==1){
cout<<"NO"<<endl;
return;
answer = true;
break;
}
}
if(! answer) yes();
else no();


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