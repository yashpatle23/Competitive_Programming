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
     int n, k;
    cin >> n >> k;
    cout<<k;

    vector<string> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int cost = 0;
    for (int i = 0; i < n; i++) {
        // count the number of differences between A[i] and B[i]
        int num_diff = 0;
        for (int j = 0; j < a[i].size(); j++) {
            if (a[i][j] != b[i][j]) {
                num_diff++;
            }
        }

        if (num_diff > k) {
            cout << -1 << endl;
            return ;
        }

        // try to match A[i] with B[i]
        for (int j = 0; j < a[i].size(); j++) {
            if (a[i][j] != b[i][j]) {
                if (num_diff > 1 && k > 0) {
                    // use type 1 operation to swap the characters
                    for (int l = 0; l < n; l++) {
                        if (a[l][j] == b[i][j] && b[l][j] == a[i][j]) {
                            swap(a[l][j], a[i][j]);
                            cost += 0;
                            num_diff--;
                            k--;
                            break;
                        }
                    }
                } else {
                    // use type 2 operation to replace the character
                    a[i][j] = b[i][j];
                    cost += 1;
                    k--;
                    break;
                }
            }
        }
    }

    cout << cost << endl;



}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--) giver();
    
}