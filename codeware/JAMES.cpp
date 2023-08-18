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


bool isPossible(vector<vector<int>>& a, int l) {
    int n = a.size(), m = a[0].size();
    for (int i = 0; i <= n - l; i++) {
        for (int j = 0; j <= m - l; j++) {
            bool possible = true;
            for (int k = i; k < i + l; k++) {
                for (int l = j; l < j + l; l++) {
                    if (a[k][l] < l) {
                        possible = false;
                        break;
                    }
                }
                if (!possible) break;
            }
            if (possible) return true;
        }
    }
    return false;
}

int findMaxSquare(vector<vector<int>>& a) {
    int n = a.size(), m = a[0].size();
    int lmin = 1, lmax = 1e6;
    while (lmin <= lmax) {
        int mid = lmin + (lmax - lmin) / 2;
        if (isPossible(a, mid)) {
            lmin = mid + 1;
        } else {
            lmax = mid - 1;
        }
    }
    return lmax;
}
void giver(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        cout << findMaxSquare(a) << endl;


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