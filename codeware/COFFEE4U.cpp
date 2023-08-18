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



int dp[101][101][101];

int last(int i, int j, int k) {
    if (i == 0 && j == 0 && k == 0) {
        return 0;
    }
    if (dp[i][j][k] != -1) {
        return dp[i][j][k];
    }
    int ans = 1e9;
    if (i > 0 && j > 0) {
        ans = min(ans, last(i-1, j-1, k));
    }
    if (i > 0 && k > 0) {
        ans = min(ans, last(i-1, j, k-1));
    }
    if (j > 0 && k > 0) {
        ans = min(ans, last(i, j-1, k-1));
    }
    if (i > 0) {
        ans = min(ans, last(i-1, j, k));
    }
    if (j > 0) {
        ans = min(ans, last(i, j-1, k));
    }
    if (k > 0) {
        ans = min(ans, last(i, j, k-1));
    }
    if (j > 0 && k > 0) {
        ans = min(ans, last(i, j-1, k-1));
    }
    dp[i][j][k] = ans + 1;
    return dp[i][j][k];
}


void giver(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;

    memset(dp, -1, sizeof(dp));

    cout << last(a, b, c) << endl;



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