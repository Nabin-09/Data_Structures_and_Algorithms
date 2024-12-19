/*We will learn the technique of BFS (Breadth First/Level Wise Search)*/
#include <bits/stdc++.h>
using namespace std;
vector<int> BFS(int n , vector<int> adj[]){
    int vis[n] = {0}; //Visited Array
    vis[0] = 1; //Initial Configuration is 1 .
    queue<int> q;
    q.push(0);
    vector<int> bfs;
    while(!q.size()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it : adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
    /*SC = O(3N) and TC = O(N + 2E)*/
}

int main() {
         /*
          1        -->lEVEL 0
        /   \
        2    6     -->LEVEL 1
      /  \  /  \
      3  4  7   8  -->LEVEL 2
         \  /
          5        -->LEVEL 3
    BFS - 12634785
    If Starting Node is 6 then ?
    617825 (2 and 5 are 2 levels away ,hence mentioned at the end)
    Hence we are just Jottig down the neighbours , something that we did while making the adjacency List.
    and also use a visiting array to mark all the visited.


         */
    int n , m;
    cin >> n >> m;
    vector<int> adj[n+1];
    for(int i = 0 ; i < m  ; i++){
        int u , v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    return 0;
}