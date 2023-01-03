//dijkstra routing algorithum?
#include<bits/stdc++.h>
using namespace std;
//dijkstra routing algorithum?
for (int i=0;i<nNodes;i++)
    for (int j=0;j<nNodes;j++){
        if (costMatrix[i][j] != NO_EDGE_VALUE){
            G[i].pb(make_pair(j,costMatrix[i],[j]));
        }
    }


int P[MAX]; /*array with links to parents*/
for(i=0; i<=nodes; i++) P[i] = -1; /*magic unset value*/

// dijkstra
while(!Q.empty()) {
    ....
    if(!F[v] && D[u]+w < D[v]) {
        D[v] = D[u] + w;
        /*By setting P[v] value we will remember what is the 
          previous node on path from source */
        P[v] = u; // <-- added line
        Q.push(pii(v, D[v]));
    }
    ...
}


vector<int> RecoverPath(int src, int dest){
    vector<int> path;
    int v = dest;
    while (v != src) {
        path.push_back(v);
        v = P[v];
    }
    path.push_back(src);
    std::reverse(path.begin(),path.end());
    return path;
}


