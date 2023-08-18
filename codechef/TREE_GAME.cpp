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


vector<int> graph[100001]; // adjacency list to store the graph
int population[100001]; // population of each city
bool visited_by_alice[100001]; // to keep track of visited cities by Alice
bool visited_by_bob[100001]; // to keep track of visited cities by Bob
int alice_points = 0; // Alice's score
int bob_points = 0; // Bob's score

void dfs(int city, bool visited[], int alice_score, int bob_score, bool alice_turn) {
    visited[city] = true;
    alice_score += population[city] * alice_turn;
    bob_score += population[city] * !alice_turn;

    for (int neighbor : graph[city]) {
        if (!visited[neighbor]) {
            dfs(neighbor, visited, alice_score, bob_score, !alice_turn);
        }
    }

    if (alice_score > bob_score) {
        alice_points++;
    } else {
        bob_points++;
    }

    visited[city] = false;
    alice_score -= population[city] * alice_turn;
    bob_score -= population[city] * !alice_turn;
}

void giver(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
     int N,a,b;
    cin >> N>>a>>b;
    cout<<N<<a<<b<<endl;

    // read population of each city
    for (int i = 1; i <= N; i++) {
        cin >> population[i];
    }

    // read the edges of the tree
    for (int i = 1; i <= N-1; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    // start the DFS from both cities
    dfs(a, visited_by_alice, 0, 0, true);
    dfs(b, visited_by_bob, 0, 0, false);

    // print the final score of Alice
    cout << alice_points << endl;



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