#include<bits/stdc++.h>
using namespace std;
int x,y,z;
#define ll long long int
#define int ll
int j,k;
#define loop(y) for (int i = 1; i <= y; i++)
int mod=998244353;
// *min_element(arr, arr + n);  *max_element(arr, arr + n);
//maxElementIndex = std::max_element(v.begin(),v.end()) - v.begin();
//__gcd(x,y) lcm=x*y/__gcd(x,y)

void yes() {char yes[] = {'Y', 'E', 'S'}; loop(3) cout << yes[i]; cout << endl;}
void no() {char no[] = {'N', 'O'}; loop(2) cout << no[i]; cout << endl;}


int find_denjis_favorite(int n) {
    long long total_sum = (1LL * n * (n+1)) / 2; // sum of 1 to n
    if (total_sum % 2 != 0) { // if sum is odd, not possible
        return -1;
    }
    long long target_sum = total_sum / 2; // sum of 1 to d and d+1 to n must be equal
    long long curr_sum = 0;
    for (int i = 1; i <= n; i++) {
        curr_sum += i;
        if (curr_sum == target_sum) {
            return i;
        }
        if (curr_sum > target_sum) { // not possible
            break;
        }
    }
    return -1;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    int t_sum=(t*(t+1))/2;
    
        int sum=0;
        loop(t){
            sum+=i;
            if(sum==t_sum){
                cout<<i<<endl;
                return 0;
            }
            t_sum=t_sum-i;
        }
    
    cout<<-1<<endl;
    return 0;
}

