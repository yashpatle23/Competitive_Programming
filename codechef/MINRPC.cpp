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
//sort(arr, arr + n, greater<T>());  reverse sort


void yes() {char yes[] = {'Y', 'E', 'S'}; loop(3) cout << yes[i]; cout << endl;}
void no() {char no[] = {'N', 'O'}; loop(2) cout << no[i]; cout << endl;}


void giver(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    char arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
   
    int roundsToWin = ((n) / 2)+1;

    for(int i=0;i<n-roundsToWin;i++){
        cout<<'P';
        if(arr[i]=='R') roundsToWin--;
        else if(arr[i]!='R' && arr[i]!='P' && arr[i]!='S') cout<<'A';
    }


    for(int i=n-roundsToWin;i<n;i++)    {
                if (arr[i] == 'R') {
                cout << "P";
                
            } else if (arr[i] == 'P') {
                cout << "S";
                
            } else if (arr[i] == 'S') {
                cout << "R";
                
            }
            else if(arr[i]!='R' && arr[i]!='P' && arr[i]!='S') cout<<'A';
    }
    
    cout << endl;




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

