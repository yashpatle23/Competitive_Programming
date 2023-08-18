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


const int MAXN = 20;
const int INF = 1e9;

int N, S;
int d[MAXN][MAXN];
int dp[MAXN][1<<MAXN];

int solve() {
    for (int i = 0; i < N; i++) {
        for (int mask = 0; mask < (1<<N); mask++) {
            dp[i][mask] = INF;
        }
    }
    dp[S][(1<<S)] = 0;
    for (int mask = 0; mask < (1<<N); mask++) {
        for (int i = 0; i < N; i++) {
            if (!(mask&(1<<i))) continue;
            for (int j = 0; j < N; j++) {
                if (mask&(1<<j)) continue;
                dp[j][mask|(1<<j)] = min(dp[j][mask|(1<<j)], dp[i][mask]+d[i][j]);
            }
        }
    }
    int ans = INF;
    for (int i = 0; i < N; i++) {
        ans = min(ans, dp[i][(1<<N)-1]+d[i][S]);
    }
    return ans;
}

void giver(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> S;
    S--;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> d[i][j];
        }
    }
    cout << solve() << endl;



}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    giver();
    return 0;
}