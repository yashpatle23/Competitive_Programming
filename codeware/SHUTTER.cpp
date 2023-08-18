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

bool isCollisionPossible(vector<int> &X, vector<int> &V) {
    int n = X.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((V[i] > V[j] && X[i] > X[j]) || (V[i] < V[j] && X[i] < X[j])) {
                // The shuttles are moving away from each other, so there won't be a collision
                continue;
            }
            if (V[i] == V[j]) {
                // The shuttles have the same velocity, so they will collide only if they start at the same position
                if (X[i] == X[j]) {
                    
                    return true;
                } else {
                    continue;
                }
            }
            double t = (double) (X[j] - X[i]) / (V[i] - V[j]);
          
            if (t >=0) {
              
                // The shuttles will collide at time t
                return true;
            }
        }
    }
    return false;
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    
    vector<int> X(t);
    vector<int> V(t);
    loop(t) {
        cin >> X[i] >> V[i];
    }
    if (isCollisionPossible(X, V)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }  
    return 0;
}