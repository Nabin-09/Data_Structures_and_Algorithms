/*Implementation of Weighted Graphs in cpp using List */
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*Same Implemenatation as earliar but we will be storing pairs , Destination as well as wieght for all cases*/
    int n , m;
    cin >> n >> m;
    vector<pair<int,int>> adj[n+1];
    for(int i = 0 ; i < m; i++){
        int u , v , weight;
        cin >> u >> v >> weight;
        adj[u].push_back({v,weight});
        adj[v].push_back({u,weight});
    //Implementation for Undirected Weighted graph.
    }
    return 0;
}