#include <bits/stdc++.h>
using namespace std;

// Function to build the graph (adjacency list)
void buildGraph(int n, int m, vector<vector<int>> &graph) {
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); // undirected
    }
}

// Function to perform BFS traversal
vector<int> bfsOfGraph(int n, vector<vector<int>> g) {
    vector<int> vis(n + 1, 0);
    vector<int> bfs;

    queue<int> q;
    q.push(1);       // Start from node 1
    vis[1] = 1;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for (auto it : g[node]) {
            if (!vis[it]) {
                vis[it] = 1;
                q.push(it);
            }
        }
    }

    return bfs;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> g(n + 1); // adjacency list, 1-based
    buildGraph(n, m, g);

    cout << "Adjacency List:\n";
    for (int i = 1; i <= n; i++) {
        cout << i << " -> ";
        for (int v : g[i]) {
            cout << v << " ";
        }
        cout << endl;
    }

    vector<int> bfs = bfsOfGraph(n, g);

    cout << "\nBFS Traversal:\n";
    for (int node : bfs) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
