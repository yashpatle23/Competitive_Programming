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
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n, 0));
    matrix[0][0] = 1;

    for (int i = 1; i < n; i++) {
        matrix[i][0] = 1 - matrix[i-1][0];
    }

    for (int j = 1; j < n; j++) {
        matrix[0][j] = 1 - matrix[0][j-1];
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i-1][j] == matrix[i][j-1]) {
                cout << -1 << endl;
                return ;
            }
            matrix[i][j] = 1 - matrix[i-1][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
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


