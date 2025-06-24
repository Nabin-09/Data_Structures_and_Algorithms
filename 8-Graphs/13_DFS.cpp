#include <bits/stdc++.h>
using namespace std;

void buildGraph(int n, int m, vector<vector<int>> &adj) {
    for (int i = 0; i < m; i++) {  // Fix: loop over edges
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // undirected
    }
}

void dfs(int node, vector<vector<int>> &adj, vector<int> &vis, vector<int> &ls) {
    vis[node] = 1;
    ls.push_back(node);
    for (auto it : adj[node]) {
        if (!vis[it]) {
            dfs(it, adj, vis, ls);
        }
    }
}

vector<int> dfsOfGraph(int n, vector<vector<int>> &adj) {
    vector<int> vis(n + 1, 0);
    vector<int> ls;
    dfs(1, adj, vis, ls); // Starting from node 1
    return ls;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);
    buildGraph(n, m, adj);

    cout << "Adjacency List:\n";
    for (int i = 1; i <= n; i++) {
        cout << i << " -> ";
        for (int v : adj[i]) {
            cout << v << " ";
        }
        cout << endl;
    }

    vector<int> dfsTraversal = dfsOfGraph(n, adj);

    cout << "\nDFS Traversal:\n";
    for (int node : dfsTraversal) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
