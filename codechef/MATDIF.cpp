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

vector<vector<int>> constructMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, 0)); // Step 1

    int num = 1; // Step 2
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
           if(i%2==0){
             if ((i + j) % 2 == 0) {
                matrix[i][j] = num;
                num++;
            }
           }
           else {
             if ((i + j) % 2 != 0) {
                matrix[i][j] = num;
                num++;
            }
           }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i%2==0){
             if ((i + j) % 2 != 0) {
                matrix[i][j] = num;
                num++;
            }
            }
            else {
                if ((i + j) % 2 == 0) {
                matrix[i][j] = num;
                num++;
            }
            }
        }
    }

    return matrix; // Step 3
}
void giver(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int arr[n][n];
    vector<vector<int>> matrix = constructMatrix(n);
    loop(n) {
        for(int j=0; j<n; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
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